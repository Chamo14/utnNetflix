#include "ArbolesTDA.h"

//FUNCION INICIALIZAR UN  ARBOL
nodoArbolPelicula * inicArbol()
{
    return NULL;
}

//FUNCION CREAR NODO ARBOL
nodoArbolPelicula * crearNodoArbol(stPelicula p)
{
    nodoArbolPelicula *aux=malloc(sizeof(nodoArbolPelicula));
    aux->p=p;
    aux->der=NULL;
    aux->izq=NULL;
    return aux;
}

//FUNCION BUSCAR EN UN ARBOL
nodoArbolPelicula * buscarEnArbol(nodoArbolPelicula *arbol,int id)
{
    nodoArbolPelicula *rta=inicArbol();
    if (arbol)
    {
        if (id==arbol->p.idPelicula)///--->Si lo encuentra devuelve el arbol como respuesta
            rta=arbol;
        else
        {
            if (id>arbol->p.idPelicula)//---->Si el dato es mayor que el dato en la raiz se busca por derecha y si es menor se busca por izquierda
                rta=buscarEnArbol(arbol->der,id);//se hace llamada recursiva hasta encontrar el dato
            else
                rta=buscarEnArbol(arbol->izq,id);//se hace llamada recursiva hasta encontrar el dato
        }
    }
    return rta;//-->En caso que no encuentre el dato devuelve NULL como respuesta
}

//FUNCION INSERTAR UN NODO EN UN ARBOL
nodoArbolPelicula * insertarNodoArbol(nodoArbolPelicula *arbol,stPelicula peli)
{
    if (!arbol)
        arbol=crearNodoArbol(peli);
    else
    {
        if (peli.idPelicula>arbol->p.idPelicula)//-->Si el dato a insertar es mayor al dato de la raiz se inserta por derecha  sino se inserta por izquierda
            arbol->der=insertarNodoArbol(arbol->der,peli);
        else
            arbol->izq=insertarNodoArbol(arbol->izq,peli);
    }
    return arbol;
}
//LA SIGUIENTES FUNCIONES DE PRINTEO DEL ARBOL SOLO IMPRIME LAS PELICULAS DADAS DE ALTA
//MOSTRAR ARBOL PREORDEN (MUESTRA PRIMERO LA RAIZ Y DESPUES MUESTRA TODA LA RAMA IZQUIER Y LUEGO LA DERECHA
//FUNCION PRINTEO DE ARBOL
void printeoArbol(nodoArbolPelicula *arbol)
{
        puts("\n---------------------------------------");
        printf("\tID:            %d\n",arbol->p.idPelicula);
        printf("\tNombre:        %s\n",arbol->p.nombrePelicula);
        printf("\tDirector:      %s\n",arbol->p.director);
        printf("\tG%cnero:        %s\n",130,arbol->p.genero);
        printf("\tPais:          %s\n",arbol->p.pais);
        printf("\tA%co:           %d\n",164,arbol->p.anio);
        printf("\tValoraci%cn:    %d\n",162,arbol->p.valoracion);
        if(arbol->p.pm>=13&&arbol->p.pm<16)
            printf("\tRating:       Apto para mayores de 13 a%cos",164);
        else if(arbol->p.pm>=16&&arbol->p.pm<18)
            printf("\tRating:       Apto para mayores de 16 a%cos",164);
        else if(arbol->p.pm>=18)
            printf("\tRating:       Apto para mayores de 18 a%cos",164);
        else
            printf("\tRating:       Apto para todo p%cblico",163);
        puts("\n---------------------------------------");

}

void preorder(nodoArbolPelicula *arbol)
{
    if (arbol)
    {
        if (arbol->p.eliminado==1)
        ListadoSimplePeliculas(arbol);
        preorder(arbol->izq);
        preorder(arbol->der);
    }
}
//MOSTRAR ARBOL INORDEN (MUESTRA PRIMERO TODA LA RAMA IZQUIERDA , MUESTRA LA RAIZ Y LUEGO TODA LA RAMA DERECHA
void inorder(nodoArbolPelicula *arbol)
{
    if (arbol)
    {
        inorder(arbol->izq);
        if (arbol->p.eliminado==1)
        ListadoSimplePeliculas(arbol);
        inorder(arbol->der);
    }
}

//MOSTRAR ARBOL POSORDEN (MUESTRA PRIMERO TODA LA RAMA IZQUIERDA, LUEGO LA DERECHA Y POR ULTIMO LA RAIZ)
void postorder(nodoArbolPelicula *arbol)
{
    if (arbol)
    {
        postorder(arbol->izq);
        postorder(arbol->der);
        if (arbol->p.eliminado==1)
        ListadoSimplePeliculas(arbol);
    }
}
//-------------------------------------------------------
//FUNCION QUE INSERTA LA RAIZ
nodoArbolPelicula * insertarRaizArchitoPeli(nodoArbolPelicula *arbol,char patch[])
{
    FILE *archivo;
    int cantidad=0;
    cantidad=contartodo(patch);
    cantidad=cantidad/2;
    stPelicula peli;
    archivo=fopen(patch,"rb");
    if (archivo)
    {
        fseek(archivo,cantidad*sizeof(stPelicula),SEEK_SET);//Se mueve x bloques para llegar a la mitad del archivo y esa sera la pelicula del medio .
        fread(&peli,1,sizeof(stPelicula),archivo);//al ya cargarse en el archivo las peliculas ordenadas por ID se sabe que esa sera la raiz del arbol
        arbol=insertarNodoArbol(arbol,peli);
        fclose(archivo);
    }
    return arbol;

}
//FUNCIONES PARA PASAR LOS ARCHIVOS AL ARBOL
nodoArbolPelicula * pasarArchivoaArbol(nodoArbolPelicula *arbol,char patch[])
{
    int cantidad=0;
    cantidad=contartodo(patch);//se cuenta la cantidad de peliculas que hay en el archivo
    stPelicula pelis[cantidad];
    cargarPeliculasaEstructura(patch,pelis);
    arbol=insertarRaizArchitoPeli(arbol,patch);//Funcion que cuenta los datos del archivo que previamente estan ordenados por ID de pelicula y busca su ID MEDIO
    arbol=desordenarArreglo(patch,pelis,cantidad,arbol);//Funcion que inserta los datos del arreglo de forma aleatoria en el arbol
    return arbol;
}

//FUNCION AUXILIAR QUE CARGAR DE FORMA RANDOM LOS DATOS DEL ARCHIVO AL ARBOL
nodoArbolPelicula * desordenarArreglo(char path[],stPelicula arreglo[],int validos,nodoArbolPelicula *arbol)
{
    peliculaAux arregloAux[validos];
    nodoArbolPelicula *aux;
    stPelicula pelis;
    aux=inicArbol();
    aux=insertarRaizArchitoPeli(aux,path);//GUARDO EL NODO RAIZ PARA EVALUARLO EN LA CARGA DE LA ESTRUCTURA
    int i=0;
    int tamanio=validos;
    int aleatorio;
    srand(time(NULL));
    while (i<validos)
    {
        if (arreglo[i].idPelicula!=aux->p.idPelicula)//SI EL DATO DEL ARREGLO DE PELIS ES DISTINTO A LA RAIZ DEL ARBOL YA INSERTADA
        {
        arregloAux[i].flag=0;//SE PONE COMO BANDERA 0
        arregloAux[i].p=arreglo[i];//SE GUARDA EL DATO
        i++;
        }
        else
        {
        arregloAux[i].flag=1;//SINO SE PONE COMO BANDERA 1 ES DECIR QUE SE ENCONTRO SU RAIZ PARA EVITAR QUE SE REPITA EN EL ARBOL
        arregloAux[i].p=arreglo[i];
        tamanio--;
        i++;
        }
    }
    i=0;
    while (tamanio>0)
    {
        aleatorio=rand()%validos;//SE SELECCIONA UN NUMERO DE POSICION DEL ARREGLO AL AZAR
        if (arregloAux[aleatorio].flag==0)//SI NO FUE SELECCIONADO SE EJECUTA
        {
            pelis=arregloAux[aleatorio].p;//SE GUARDA EN EL ARREGLO
            arregloAux[aleatorio].flag=1;//SE CARGA SU BANDERA
            arbol=insertarNodoArbol(arbol,pelis);//SE INSERTA EN EL ARBOL YA CON SU RAIZ PREVIAMENTE INSERTADA
            i++;//SE SUMA UNA POSICION DEL ARREGLO ORIGINAL
            tamanio--;//SE RESTA EL TAMAÑO HASTA QUE SE INSERTEN TODOS LOS ELEMENTOS EN EL ARBOL
        }
    }
    return arbol;//SE RETORNA EL ARBOL
}
//--------------------------------------------------

//ACTUALIZACION DEL ARCHIVO DESDE EL ARBOL (CONSTA DE 3 FUNCIONES)
void pasarArbolToArchivo(nodoArbolPelicula *arbol,FILE *archivo)//Hago un recorrido como inOrder primero la rama izquierda , la raiz y por ultimo la rama derecha de modo que se guarde en el archivo de forma ordenada
{
    stPelicula peli;
    if(arbol)
    {
        pasarArbolToArchivo(arbol->izq,archivo);//RECORRO LA RAMA IZQUIERDA
        peli=arbol->p;//LO GUARDO EL NODO EN UNA ESTRUCTURA PELICULA AUX
        fwrite(&peli,1,sizeof(stPelicula),archivo);//SE GUARDA EN EL ARCHIVO
        pasarArbolToArchivo(arbol->der,archivo);//RECORRO LA RAMA DERECHA
    }
}


void actualizarPeliculasDeArbol(nodoArbolPelicula *arbol,char path[])
{
    FILE *archivo;
    archivo=fopen(path,"wb");//BORRO TODO EL CONTENIDO DEL ARCHIVO
    if (archivo)
    {
        int i=0;
        pasarArbolToArchivo(arbol,archivo);//HAGO LLAMADA A LA FUNCION QUE INSERTA EL ARBOL EN EL ARCHIVO DE FORMA ORDENADA POR ID
        printf("Datos Actualizados!\n");
        fclose(archivo);
    }

}
//BUSQUEDA EN EL ARBOL DE PELICULAS POR ID
int buscarxIdEnArbol(nodoArbolPelicula *arbol)
{
    int id;
    nodoArbolPelicula *aux;
    printf("Ingrese ID de la pel%ccula a buscar: ",161);
    scanf("%d",&id);
    aux=buscarEnArbol(arbol,id);
    if (aux)
    {
        printf("ID Pel%ccula: %d\n",161,aux->p.idPelicula);
        printf("Nombre de la Pel%ccula: %s\n",161,aux->p.nombrePelicula);
        printf("Director: %s\n",aux->p.director);
        return aux->p.idPelicula;
    }
    else
    {
        printf("La pelicula no se encuentra en el catalogo\n");
        return id=-1;
    }

}
//AUXILIAR QUE SE USO PARA VERIFICAR QUE EL ARBOL SE CARGO DE ACUERDO A SUS IDS ,MUESTRA EL ARBOL DE FORMA HORIZONTAL
void mostrarArbolCompleto(nodoArbolPelicula *arbol,int cont)
{
    if (arbol==NULL)
    {
        return;
    }
    else
    {
        mostrarArbolCompleto(arbol->der,cont+1);
        for (int i=0; i<cont; i++)
        {
            printf("        ");
        }
        printf("%d\n",arbol->p.idPelicula);
        mostrarArbolCompleto(arbol->izq,cont+1);
    }
}

//FUNCION BORRAR NODO
nodoArbolPelicula * borrarNodoArbol (nodoArbolPelicula * arbol, int dato)
{
    nodoArbolPelicula * masDer;
    nodoArbolPelicula * masIzq;
    inicArbol(masDer);
    inicArbol(masIzq);

    if (arbol != NULL)
    {
        if (dato == arbol->p.idPelicula)
        {
            if (arbol->izq != NULL)
            {
                masDer = NMD(arbol->izq);
                arbol ->p = masDer->p;
                arbol ->izq = borrarNodoArbol(arbol->izq, masDer->p.idPelicula);
            }
            else if (arbol->der != NULL)
            {
                masIzq = NMI(arbol->der);
                arbol ->p = masIzq->p;
                arbol ->der = borrarNodoArbol(arbol->der, masIzq->p.idPelicula);
            }
            else
            {
                free(arbol);
                arbol = NULL;
            }
        }
        else if (dato > arbol->p.idPelicula)
        {
            arbol -> der = borrarNodoArbol(arbol->der, dato);
        }
        else
        {
            arbol->izq = borrarNodoArbol(arbol->izq, dato);
        }

    }

    return arbol;
}

nodoArbolPelicula * NMD (nodoArbolPelicula * arbol)
{
    if (arbol->der != NULL)
    {
        arbol = NMD(arbol->der);
    }
    return arbol;
}

nodoArbolPelicula * NMI (nodoArbolPelicula * arbol)
{
    if (arbol ->izq != NULL)
    {
        arbol = NMI(arbol->izq);
    }

    return arbol;
}

//FUNCION AUXILIAR QUE CUENTA LOS NODOS DEL ARBOL , SE USO PARA VERIFICAR EN LA IDA Y VUELTA DE LOS DATOS EN EL ARBOL
int contarNodosArbol(nodoArbolPelicula *arbol)
{
    int cantidad=0;
    if (arbol)
    {
        cantidad=cantidad+1+contarNodosArbol(arbol->izq)+contarNodosArbol(arbol->der);
    }
    return cantidad;
}

nodoArbolPelicula * modificarCampoenArbol(nodoArbolPelicula *arbol,char pathvideo[])
{
    int cantidadpelis=contartodo(pathvideo);
    stPelicula peli[cantidadpelis];
    cargarPeliculasaEstructura(pathvideo,peli);
    modificar(pathvideo,peli,cantidadpelis);//ME LO MODIFICA YA EN EL ARCHIVO
    int i=0;
    while (i<cantidadpelis)
    {
        nodoArbolPelicula *aux=inicArbol();
        aux=buscarEnArbol(arbol,peli[i].idPelicula);
        aux->p=peli[i];//ME LO MODIFICA EN EL ARBOL
        i++;
    }
    return arbol;
}
void ListadoSimplePeliculas(nodoArbolPelicula*arbol)
{
    if (arbol)
    {
        if (arbol->p.eliminado==1)
        {
            if (arbol->p.idPelicula < 10)
                printf("ID: [#00%d] | T%cTULO: %s\n",arbol->p.idPelicula, 214, arbol->p.nombrePelicula);
            else if(arbol->p.idPelicula >=10 && arbol->p.idPelicula < 100)
                printf("ID: [#0%d] | T%cTULO: %s\n",arbol->p.idPelicula, 214, arbol->p.nombrePelicula);
            else
                printf("ID: [#%d] | T%cTULO: %s\n",arbol->p.idPelicula, 214, arbol->p.nombrePelicula);
        }
    }
}
