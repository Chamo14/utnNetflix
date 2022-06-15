#include "TDAARREGLO.h"
#include "usuarios.h"
#include "listaEnlazada.h"


///FUNCION QUE REDIMENSIONA EL TAMAÑO DEL ADL
int redimensionarADL(arregloUsuarios *adl,int validos)
{
    adl=realloc(adl,sizeof(arregloUsuarios)*(validos+1));
    return validos+1;

}
//FUNCION QUE GUARDA UN USUARIO EN EL ADL CUANDO REGISTRO UN NUEVO USUARIO AL SISTEMA
void guardarEnADL(arregloUsuarios adl[],int validos,stUsuario dato)
{
    adl[validos-1].usr=dato;
    adl[validos-1].listaPelis=inicLista();
}
///FUNCION QUE REDIMENSIONA EL TAMAÑO DEL ARREGLO DE PELIS VISTAS
int redimensionarPelis(stPelisVistas *pelis,int validos)//OK
{
    pelis=realloc(pelis,sizeof(stPelisVistas)*(validos+1));
    return validos+1;
}
//FUNCION QUE GUARDA EL ID DE PELI Y USUARIO EN UN REGISTRO POR PRIMERA VEZ EN EL USUARIO
void guardarPeliVista(stPelisVistas peli,int validos,int idUsuario, int idPelicula)
{
    peli.idPelicula=idPelicula;
    peli.idUsuario=idUsuario;
    peli.idAutoincremental=validos+1;
}


//FUNCION QUE CARGA LOS USUARIOS CONTENIDOS EN EL ARCHIVO AL ADL
void cargarADL (arregloUsuarios adl[],int validos,char path[])
{
    FILE * archi;
    stUsuario aux;
    int i=0;
    archi=fopen(path, "rb");
    if (archi)
    {
        while ((fread(&aux, sizeof(stUsuario),1, archi)>0)&&(i<validos))
        {
            adl[i].usr=aux;
            adl[i].listaPelis=inicLista();
            i++;
        }
        fclose(archi);
    }

}
//FUNCION QUE CARGA UN USUARIO EN EL ARCHIVO Y EN EL ALD
int altaUsuarioaArreglo(arregloUsuarios adl[], int validos, char pathUser[])
{
    cargaunusuario(pathUser);
    int cantidad=CantidadValida(pathUser);
    stUsuario usuario[cantidad];
    CargaArchivosEstructura(pathUser,usuario,cantidad);
    validos=redimensionarADL(&adl,validos);
    guardarEnADL(adl,validos,usuario[cantidad-1]);

    return validos;
}
//FUNCION QUE BUSCA UN USUARIO EN EL ADL POR SU NOMBRE
int buscarUsuarioxNombreADL(arregloUsuarios adl[],char dato[],int dimension)
{
    int rta=-1;
    int i=0;
    while ((i<dimension)&&(rta==-1))
    {
        if (strcmp(adl[i].usr.nombreUsuario,dato)==0)
            rta=i;
        i++;
    }
    return rta;
}
//FUNCION QUE BUSCA UN USUARIO EN EL ADL POR SU ID
int buscarXIdUsuario(arregloUsuarios adl[], int dato, int validos)
{
    int rta=-1;
    int i=0;
    while ((i<validos)&&(rta==-1))
    {
        if(adl[i].usr.IdUsuario == dato)
            rta=i;
        i++;
    }
    return rta;
}

//FUNCION QUE MUESTRA EL ADL DE USUARIOS CON SUS LISTA DE PELICULAS VISTAS
void mostrarUsuarios (arregloUsuarios adl[], int validos)
{
    printf("\nMostrando el ADL de usuarios \n");
    int i=0;
    while(i<validos)
    {

        if (adl[i].usr.eliminado==0)
        {
            puts("\n---------------------------------------");
            printf("\nUsuario ID %d: %s",adl[i].usr.IdUsuario, adl[i].usr.nombreUsuario);
            recorrerYmostrar(adl[i].listaPelis);
            puts("\n---------------------------------------");
        }
        i++;
    }
}
//FUNCION QUE LIMPIA LAS LISTAS DE PELICULAS VISTAS DE CADA USUARIO PARA SER TRABAJADAS NUEVAMENTE
void limpiarArregloDeListas(arregloUsuarios adl[], int validos)
{
    int i=0;
    while (i<validos)
    {
        borrarTodaLaLista(adl[i].listaPelis);
        adl[i].listaPelis=inicLista();
        i++;
    }
}
//--------------------ACTUALIZA EL ARCHIVO DE PELICULAS OK
void persistirPeliculasVistas (char pathPeliVistas[],stPelisVistas pelis)
{
    FILE * archi;
    archi=fopen(pathPeliVistas,"ab");
    int i=0;
    if(archi)
    {
        fwrite(&pelis,sizeof(stPelisVistas),1,archi);
        fclose(archi);
    }
}
//---------------------------------------------
//PARTE PELICULAS VISTAS

void viendopeli(nodoArbolPelicula *arbol)
{
    int i;
    printf("-\n");
    printf("--\n");
    printf("---\n");
    printf("----\n");
    printf("-----\n");
    printf("------\n");
    printf("--------\n");
    printf("-----------\n");
    printf("--------------\n");
    printf("MIRANDO '%s' CALIDAD FULL HD 1080p\n",arbol->p.nombrePelicula);
    for(i=0; i<10; i++)
    {
        printf(". ");
        Sleep(250);
    }
    printf("\n");
    printf("--------------\n");
    printf("-----------\n");
    printf("--------\n");
    printf("------\n");
    printf("-----\n");
    printf("----\n");
    printf("---\n");
    printf("--\n");
    printf("-\n");
}
//funcion que agrega una pelicula al usuario y a su vez se guarda en un registro
void agregarPeliculaToUsuario(arregloUsuarios adl[],int pos,int validos,nodoArbolPelicula *arbol)
{
    int id;
    char op;
    int cantidad;
    nodoArbolPelicula *aux;
    aux=inicArbol();
    nodoListaPelicula *ainsertar;
    ainsertar=inicLista();
    printf("Ingrese el ID de Pelicula a ver: ");
    scanf("%d",&id);
    aux=buscarEnArbol(arbol,id);
    if(aux)
    {
        printf("SU PELICULA ES...\n");
        printeoArbol(aux);
        printf("%cDesea verla? y/n: ",168);
        fflush(stdin);
        scanf("%c",&op);
        if (op=='y')
        {
            system("cls");
            viendopeli(aux);
            system("pause");
            ainsertar=crearNodo(aux->p);
            adl[pos].listaPelis=agregarFinal(adl[pos].listaPelis,ainsertar);
        }
        else
            printf("Puede elegir otra pelicula del catalogo si no quiere mirar su pelicula elegida!\n");
    }
    else
        printf("Su pelicula no esta cargada en el sistema\n");
}


//FUNCION QUE CUENTA LAS PELICULAS REGISTRADAS EN EL ARCHIVO
int contarPelisVistas(char path[])
{
    int cont=1;
    FILE *archivo;
    archivo=fopen(path,"rb");
    stPelisVistas aux;
    if (archivo)
    {
        while (fread(&aux,sizeof(stPelisVistas),1,archivo)>0)
            cont++;
        fclose(archivo);
    }
    return cont;
}
//FUNCION QUE PASA LAS PELICULAS VISTAS DEL ARCHIVO AL ADL
void pasarPeliculasVistasADL(char path[],arregloUsuarios adl[],nodoArbolPelicula *arbol,int validos)
{
    FILE *archivo;
    stPelisVistas pelisaux;
    nodoListaPelicula *auxpeli=inicLista();
    nodoArbolPelicula *arbolaux=inicArbol();
    archivo=fopen(path,"rb");
    int i=0;
    int posicion=0;
    if (archivo)
    {
        while ((fread(&pelisaux,1,sizeof(stPelisVistas),archivo)>0))
        {
            posicion=buscarXIdUsuario(adl,pelisaux.idUsuario,validos);;
            if (posicion!=-1)
            {
                arbolaux=buscarEnArbol(arbol,pelisaux.idPelicula);
                auxpeli=crearNodo(arbolaux->p);
                adl[posicion].listaPelis=agregarFinal(adl[posicion].listaPelis,auxpeli);
            }
        }
        fclose(archivo);
    }
}
//FUNCION QUE GUARDA LAS PELICULAS VISTAS DEL ADL AL ARCHIVO
void pasarADLaPelisVistas(char path[],arregloUsuarios adl[],int dimension)
{
    FILE *archivo;
    stPelisVistas p;
    nodoListaPelicula *lista;
    lista=inicLista();
    int i=0;
    int contador=0;
    archivo=fopen(path,"wb");
    if (archivo)
    {
        for(i=0; i<dimension; i++)
        {
            lista=adl[i].listaPelis;
            while(lista)
            {
                p.idPelicula=lista->p.idPelicula;
                p.idUsuario=adl[i].usr.IdUsuario;
                p.idAutoincremental=contador++;
                contador++;
                fwrite(&p,1,sizeof(stPelisVistas),archivo);
                lista=lista->sig;
            }
        }
        fclose(archivo);
        printf("Datos actualizados!\n");
        system("cls");
    }
}

void modificacionUsuario(arregloUsuarios adl[], int pos, int subopcion, int admin, nodoArbolPelicula * arbol, char pathUser[], char pathVideo[], int validos)
{
    int subopcion2=0;
    system("cls");
    char cAux[11];
    char cAux1[11];
    int iMatrixPsw[2][5];
    int iMatrixTestigo[2][2];
    int iMatrixEncrt [2][5];
    char cControl = 'n';
    int eliminado=0;
    switch (subopcion)
    {
    case 1:
        printf("Su nombre actual: %s\n",adl[pos].usr.nombreUsuario);
        printf("Ingrese nombre nuevo: ");
        fflush(stdin);
        gets(adl[pos].usr.nombreUsuario);
        ///VERIFICAR QUE NO ESTÉ REPETIDO EN EL ARREGLO
        printf("\nNombre cambiado con exito!\n");
        printf("Su nombre nuevo es: %s\n",adl[pos].usr.nombreUsuario);
        system("pause");
        system("cls");
        break;

    case 2:
        system("cls");
        while(cControl !=  's')
        {
            do
            {
                printf("\nIngrese una contrase%ca (10 caracteres obligatoriamente): ",164);
                passW(cAux);
                _getch();
                printf("\nIngrese una vez mas su contrase%ca: ",164);
                passW(cAux1);
                _getch();
            }
            while(strcmpi(cAux,cAux1) != 0);
            while(strlen(cAux) != (10 * sizeof(char)))
            {
                system("cls");
                printf("La contrase%ca no cumple con requisitos, ingrese otra por favor: \n",164);
                passW(cAux);
                _getch();
            }
            pasar_pswd_matriz(2, 5, cAux, iMatrixPsw);
            ///pasa pswd a matriz de enteros
            crear_matriz_encriptadora(2, iMatrixTestigo);
            cpyMatr(2,2, adl[pos].usr.testigo, iMatrixTestigo);
            ///crea matriz testigo
            encriptar_matriz(2, 5, iMatrixTestigo, iMatrixPsw, iMatrixEncrt);
            cpyMatr(2, 5, adl[pos].usr.pass, iMatrixEncrt);
            ///archiva la contrasenia en campo pass de usuario
            cControl = 's';
            printf("\n");
        }
        system("pause");
        system("cls");
        break;
    case 3:
        system("cls");
        printf("Ingrese nuevo g%cnero: ",130);
        printf("\nm-->Masculino\n");
        printf("f-->Femenino\n");
        printf("Cualquier otra letra que no sea m o f---> Otro genero\n");
        fflush(stdin);
        scanf("%c",&adl[pos].usr.genero);

        if (adl[pos].usr.genero=='f'||adl[pos].usr.genero=='F')
        {
            printf("Modificado con exito. El g%cnero ahora es: Femenino.\n", 130);
        }
        else if (adl[pos].usr.genero=='m'||adl[pos].usr.genero=='M')
        {
            printf("Modificado con exito. El g%cnero ahora es: Masculino.\n", 130);
        }
        else
        {
            printf("Modificado con exito. El g%cnero ahora es: Otro. Aca no se juzga :)\n", 130);
        }
        system("pause");
        system("cls");
        break;

    case 4:
        system("cls");
        printf("Su A%co de nacimiento actual es: %d\n",164,adl[pos].usr.anioNacimiento);
        printf("Ingrese nuevo a%co de nacimiento: ",164);
        scanf("%d",&adl[pos].usr.anioNacimiento);
        printf("\nModificado con exito. Su nuevo a%co de nacimiento es %d\n",164,adl[pos].usr.anioNacimiento);
        system("pause");
        system("cls");
        break;

    case 5:
        system("cls");
        printf("Su pa%cs de origen actual es: %s\n",161,adl[pos].usr.pais);
        printf("Ingrese el nuevo pa%cs: \n",161);
        fflush(stdin);
        gets(adl[pos].usr.pais);
        printf("Modificado con exito. El pa%cs ahora es: %s\n",161,adl[pos].usr.pais);
        system("pause");
        system("cls");
        break;
    case 6:
        system("cls");
        printf("Volviendo al menu anterior....\n");
        system("pause");
        system("cls");
        menuAdminPrincipal(adl, arbol, pathUser, pathVideo, validos);
        break;
    case 7:
        if (admin==0)
        {
            printf("No tiene los privilegios para hacer eso. \n");
            break;
        }
        else
        {
            if (adl[pos].usr.eliminado==1)
            {
                printf("Estado actual del usuario es: INACTIVO\n");
            }
            if (adl[pos].usr.eliminado==0)
            {
                printf("Estado actual del usuario es: ACTIVO\n");
            }
            printf("Dar de alta/baja usuario: ([0.] ACTIVO / [1.] INACTIVO) ");
            scanf("%d",&eliminado);
            while ((eliminado!=0)&&(eliminado!=1))
            {
                printf("Numero incorrecto.\n");
                printf("0. Alta de usuario\n");
                printf("1. Baja de usuario\n");
                printf("Reingrese opcion: ");
                scanf("%d",&eliminado);

            }
            if (eliminado==0)
            {
                adl[pos].usr.eliminado=eliminado;
                printf("Estado modificado a ACTIVO\n");
            }
            if (eliminado==1)
            {
                adl[pos].usr.eliminado=eliminado;
                printf("Estado modificado a INACTIVO\n");
            }
            break;
        }
        break;
    default:
        system("cls");
        printf("Opcion incorrecta!\n");
        printf("Reingrese nuevamente la opcion: \n");
        scanf("%d",&subopcion2);
        modificacionUsuario(adl, pos, subopcion2, admin, arbol, pathUser, pathVideo, validos);
        guardarADLenArchivo(adl, validos, pathUser);
        break;

    }
}

void mostrarUsuario(arregloUsuarios adl[], int pos)
{
    AuxiliarPassword contrasenia;
    puts("-------------------------------------------------------------------\n");
    puts("SU PERFIL: ");
    printf("\tUSUARIO ID: \t    [%d]\n", adl[pos].usr.IdUsuario);
    printf("\tNOMBRE DE USUARIO:  %s\n",adl[pos].usr.nombreUsuario);
    contrasenia = showPswdFile(adl, pos);
//  printea basura
     printf("\tPASSWORD:           "),puts(contrasenia.palabra);
    printf("\tA%cO DE NACIMIENTO:  %i\n", 165, adl[pos].usr.anioNacimiento);
    printf("\tG%cNERO: ", 144);
    if (adl[pos].usr.genero=='f')
    {
        printf("\t    Femenino\n");
    }
    else if (adl[pos].usr.genero=='m')
    {
        printf("\t    Masculino\n");
    }
    else
    {
        printf("\t    Otro\n");
    }
    printf("\tPA%cS DE ORIGEN:     %s\n", 214, adl[pos].usr.pais);

    if (adl[pos].usr.eliminado==0)
    {
        printf("\tESTADO:             ACTIVO\n");
    }
    else
    {
        printf("\tESTADO:             INACTIVO\n");
    }
    puts("\n-------------------------------------------------------------------");
}

void guardarADLenArchivo(arregloUsuarios adl[],int dimension,char pathUser[])
{
    FILE *archivo;
    archivo=fopen(pathUser,"wb");
    if (archivo)
    {
        pasarAdlEnArchi(adl,dimension,archivo);
        printf("Datos Actualizados!\n");

        fclose(archivo);
    }
}

void pasarAdlEnArchi(arregloUsuarios adl[],int dimension,FILE *archivo)
{
    for (int i=0; i<dimension; i++)
        fwrite(&adl[i].usr,1,sizeof(stUsuario),archivo);
}

void pass_Decrypt (char passVacio[11], int ContraMatri[2][5])
{
    int A[2][2]= {{7,-6},{-1,1}};
    int i,j,k,z;
    int Desencriptada[2][5]= {0};
    printf("\nClave: ");

    z=0;
    for (i=0; i<2; i++)
    {
        for (j=0; j<5; j++)
        {

            for (k=0; k<2; k++)
            {
                Desencriptada[i][j]=Desencriptada[i][j]+(A[i][k]*ContraMatri[k][j]);
            }
            passVacio[z]=Desencriptada[i][j];
            printf("%c",passVacio[z]);
            z++;

        }
    }
}
AuxiliarPassword showPswdFile (arregloUsuarios adl[], int pos)
{
    int i;
    int u;
    int j=0;
    AuxiliarPassword contra;
    int matriz_encriptada[2][5];
    int matriz_testigo[2][2];
    int matriz_desencriptada[2][5];
    cpyMatr(2, 2, matriz_testigo, adl[pos].usr.testigo);
    cpyMatr(2, 5, matriz_encriptada, adl[pos].usr.pass);

  desencriptar_matriz(2,5, matriz_testigo, matriz_encriptada, matriz_desencriptada);

    for (i=0; i<2; i++)
    {
        for (u=0; u<5; u++)
        {
            contra.palabra[j]=(char)matriz_desencriptada[i][u];
            j++;
        }
    }
    return contra;
}
void printearRegistro(char path[])
{
    FILE *archivo;
    int c=0;
    archivo=fopen(path,"rb");
    stPelisVistas p;
    if (archivo)
    {
        while (fread(&p,sizeof(stPelisVistas),1,archivo)>0)
        {
            c++;
            printf("%d CANTIDAD\n",c);
            printf("%d PELI \n",p.idPelicula);
            printf("%d USER \n",p.idUsuario);
        }
        fclose(archivo);

    }
}
