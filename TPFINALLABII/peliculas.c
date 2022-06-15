#include "peliculas.h"
//------------------------------
//SECTOR PELICULAS
//------------------------------
///FUNCION QUE CARGA UNA PELICULA Y LA GUARDA AL ARCHIVO
void CargaPeliculaNuevo (char PathVideo[], stPelicula p)
{
    FILE * archi;
    archi=fopen(PathVideo, "ab");

    if(archi)
    {
        fwrite(&p, sizeof(stPelicula),1,archi);
    }
    fclose(archi);
}

///FUNCION QUE CUENTA LA CANTIDAD DE REGISTROS DE PELICULAS ACTIVAS QUE CONTIENE EL ARCHIVO Y RETORNA SI VALOR
int contar(char PatchVideo[])
{
    FILE *archi;
    stPelicula a;
    int cont=0;
    archi=fopen(PatchVideo,"rb");
    if(archi!=NULL)
    {
        while(fread(&a,sizeof(stPelicula),1,archi)>0)
        {
            if (a.eliminado==1)
                cont ++;
        }
        fclose(archi);
    }
    return cont;

}
///FUNCION QUE CUENTA LA CANTIDAD DE REGISTROS DE PELICULAS QUE CONTIENE EL ARCHIVO Y RETORNA SI VALOR
int contartodo(char PatchVideo[])
{
    FILE *archi;
    stPelicula a;
    int cont=0;
    archi=fopen(PatchVideo,"rb");
    if(archi!=NULL)
    {
        //  rewind(archi);
        while(fread(&a,sizeof(stPelicula),1,archi)>0)
        {
            cont ++;
        }
        fclose(archi);
    }
    return cont;

}

///FUNCION QUE BUSCA EL NOMBRE DE UNA PELICULA LA CUAL SE INGRESA SU NOMBRE POR EL ADMINISTRADOR /USUARIO
void buscarXnombre(char PatchVideo[])
{
    char palabra[20];
    int pos;
    int validos;
    validos=contartodo(PatchVideo);
    stPelicula pelis[validos];
    cargarPeliculasaEstructura(PatchVideo,pelis);
    char control='y';
    printf("\nIngrese Nombre de la peliculas:");
    fflush(stdin);
    gets(palabra);
    pos=buscarPos(pelis,palabra,validos);
    if(pos==-1)
    {
        printf("\nLa pelicula 'NO' se encontro");
    }
    else
    {
        printf("\nLa pelicula 'SI' se encontro ¿Desea ver pelicula? (y/n)\n");
        mostrarunapeliculaVERT(PatchVideo,pos);
    }
}
///FUNCION QUE BUSCA UNA DETERMINADA POSICION DE PELICULA QUE SE COMPARA CON LA INGRESADA POR EL USUARIO
int buscarPos(stPelicula peli[],char abuscar[],int validos)
{
    int flag=0;
    int pos=0;
    int i=0;
    int comparacion=0;
    {
        while((i<validos)&&(flag==0))
        {
            comparacion=strcmpi(abuscar,peli[i].nombrePelicula);
            if(comparacion==0)
            {
                flag=1;
                pos=i;
            }
            i++;

        }

        if (flag==1)
        {
            printf("%d",pos);

        }
        else
        {
            pos=-1;
        }
    }
    return pos;
}

void mostrarunapeliculaVERT(char ArchivoPeliculas[],int pos)
{
    FILE *archi;
    stPelicula a;
    archi=fopen(ArchivoPeliculas,"rb");
    if(archi!=NULL)
    {
        fseek(archi,sizeof(stPelicula)*pos,SEEK_SET);
        fread(&a,sizeof(stPelicula),1,archi);
        puts("\n---------------------------------------");
        printf("ID: %d\n",a.idPelicula);
        printf("Nombre: %s\n",a.nombrePelicula);
        printf("Director: %s\n",a.director);
        printf("Genero: %s\n",a.genero);
        printf("Pais: %s\n",a.pais);
        printf("A%co: %d\n",164,a.anio);
        printf("Valoracion: %d",a.valoracion);
        puts("\n---------------------------------------");

    }
}

void EliminacionLogica(stPelicula pelis[],int pos)
{
    pelis[pos].eliminado=0;
}
void AltaLogica(stPelicula pelis[],int pos)
{
    pelis[pos].eliminado=1;
}
void AltaBaja()
{
    system("cls");
    printf("%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c\n",201,205,187,196,196,196,196,196,196,196,196,196,196,196,196,196,196,196,196,196,196,196,196,196,196,196,191);
    printf("%c1%c         ALTA         %c\n",186,186,179);
    printf("%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c\n",200,205,188,196,196,196,196,196,196,196,196,196,196,196,196,196,196,196,196,196,196,196,196,196,196,196,217);
    printf("%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c\n",201,205,187,196,196,196,196,196,196,196,196,196,196,196,196,196,196,196,196,196,196,196,196,196,196,196,191);
    printf("%c2%c         BAJA         %c\n",186,186,179);
    printf("%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c\n",200,205,188,196,196,196,196,196,196,196,196,196,196,196,196,196,196,196,196,196,196,196,196,196,196,196,217);
}
void modificar(char PatchVideo[],stPelicula pelis[],int cant)
{
    int pos=0;
    int idAbus=0;
    int validos=0;
    int opcion=0;
    int subopcion=0;
    mostrarpeliculas(PatchVideo);
    validos=DeArchivoToArrglo(PatchVideo,pelis,cant);
    printfmodbaja();
    printf("\nIngrese una opcion: ");
    scanf(" %d",&opcion);
    switch(opcion)
    {
    case 1:
        printf("\n\nINGRESE ID DE PELICULA A MODIFICAR: ");
        scanf(" %d",&idAbus);
        pos=buscarPosNum(pelis,validos,idAbus);
        if(pos==-1)
        {
            printf("\nID NO ENCONTRADO");
        }
        else
        {
            modificacion(pelis,pos);
            actualizar(PatchVideo,pelis,validos);
        }
        break;
    case 2:
        printf("\n\nINGRESE ID DE PELICULA: ");
        scanf(" %d",&idAbus);
        pos=buscarPosNum(pelis,validos,idAbus);
        if(pos==-1)
        {
            printf("\nID NO ENCONTRADO");
        }
        else
        {
            AltaBaja();
            scanf(" %d",&subopcion);
            switch(subopcion)
            {
            case 1:
                AltaLogica(pelis,pos);
                actualizar(PatchVideo,pelis,validos);
                break;
            case 2:
                EliminacionLogica(pelis,pos);
                actualizar(PatchVideo,pelis,validos);
                break;
            }
        }
        break;
    }
}
//FUNCION QUE GUARDA
int DeArchivoToArrglo(char PatchVideo[],stPelicula pelis[],int cant)
{
    FILE *archi;
    stPelicula a;
    int cont=0;
    archi=fopen(PatchVideo,"rb");
    if(archi!=NULL)
    {
        while(fread(&a,sizeof(stPelicula),1,archi)>0&&cont<cant)
        {
            pelis[cont]=a;
            cont++;
        }
        fclose(archi);
    }
    return cont;
}

int buscarPosNum(stPelicula pelis[],int validos,int num)
{
    int i=0;
    int flag=0;
    int pos=0;
    while(i<validos&&flag==0)
    {
        if(pelis[i].idPelicula==num)
        {
            flag=1;
        }
        else
        {
            i++;
        }
    }
    if (flag==1)
    {
        pos=i;
    }
    else
    {
        pos=-1;
    }
    return pos;
}
void modificacion(stPelicula pelis[],int pos)
{
    system("cls");
    int opcion=0;
    SubmenuModificacionPelis();
    printf("\nIngrese una opcion: ");
    scanf(" %d",&opcion);
    switch(opcion)
    {
    case 1:
        printf("\nIngrese Nombre de Pelicula \n");
        fflush(stdin);
        gets(pelis[pos].nombrePelicula);
        break;
    case 2:
        printf("Ingrese el Director \n");
        fflush(stdin);
        gets(pelis[pos].director);
        break;
    case 3:
        printf("Ingrese el Genero \n");
        fflush(stdin);
        gets(pelis[pos].genero);
        break;
    case 4:
        printf("Ingrese el Pais \n");
        fflush(stdin);
        gets(pelis[pos].pais);
        break;
    case 5:
        printf("Ingrese el Anio de la Pelicula \n");
        scanf(" %d",&pelis[pos].anio);
        break;
    case 6:
        printf("Ingrese la Valoracion (del 0 a 10) \n");
        scanf(" %d",&pelis[pos].valoracion);
        break;
    case 7:
        printf("Ingrese la Clasificacion por Edades \n");
        printf("0 a 13 - ATP \n");
        printf("13 - Mayor de 13 \n");
        printf("16 - Mayor de 16 \n");
        printf("18 - Mayor de 18 \n");
        scanf(" %d",&pelis[pos].pm);
        pelis[pos].idPelicula=pos;
        pelis[pos].eliminado=1;
        break;
    }
}

///FUNCION QUE CORRESPONDE A LA MUESTRA DEL LISTADO DE PELOCULAS
void mostrarpeliculas(char PatchVideo[])
{
    system("cls");
    FILE *archi;
    stPelicula a;
    printf("%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c",205,205,205,205,205,205,205,205,205,205,205,205,205,205,205,205,205,205,205,205,205,205,205,205,205,205,205,205,205,205,205,205,205,205,205,205,205,205,205,205,205,205,205,205,205,205,205,205,205,205,205,205,205,205,205,205,205,205,205,205,205,205,205,205,205,205,205,205,205,205,205,205,205,205,205,205,205,205,205,205,205,205,205,205,205,205,205,205,205,205,205,205,205,205,205,205,205,205,205,205,205,205,205,205,205,205,205,205,205,205,205,205,205,205,205,205,205,205,205,205,205,205,205,205,205,205,205,205,205,205,205,205,205,205,205,205,205,205,205,205,205,205,205,205,205,205,205,205,205,205,205,205,205,205,205,205,205,205,205,205,205,205,205,205,205,205,205);
    printf("%20s\t%20.40s\t%20.20s\t%13.30s\t%20s\t%25.30s\t%5s\t%13s\n","PELICULA","GENERO","DIRECTOR","ANIO","PAIS","VALORACION","ID","DISP.");
    printf("%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c",205,205,205,205,205,205,205,205,205,205,205,205,205,205,205,205,205,205,205,205,205,205,205,205,205,205,205,205,205,205,205,205,205,205,205,205,205,205,205,205,205,205,205,205,205,205,205,205,205,205,205,205,205,205,205,205,205,205,205,205,205,205,205,205,205,205,205,205,205,205,205,205,205,205,205,205,205,205,205,205,205,205,205,205,205,205,205,205,205,205,205,205,205,205,205,205,205,205,205,205,205,205,205,205,205,205,205,205,205,205,205,205,205,205,205,205,205,205,205,205,205,205,205,205,205,205,205,205,205,205,205,205,205,205,205,205,205,205,205,205,205,205,205,205,205,205,205,205,205,205,205,205,205,205,205,205,205,205,205,205,205,205,205,205,205,205,205);
    archi=fopen(PatchVideo,"rb");

    if(archi!=NULL)
    {
        while(fread(&a,sizeof(stPelicula),1,archi)>0)
        {
            mostrarunapeliculaHOR(a);
        }
        fclose(archi);
    }
}
///PRINTEO DE LA MUESTRA DE UNA PELICULA PROVENIENTE DE UNA ESTRUCTURA QUE SE CARGO DEL ARCHIVO
void mostrarunapeliculaHOR(stPelicula a)
{
    printf("%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c",196,196,196,196,196,196,196,196,196,196,196,196,196,196,196,196,196,196,196,196,196,196,196,196,196,196,196,196,196,196,196,196,196,196,196,196,196,196,196,196,196,196,196,196,196,196,196,196,196,196,196,196,196,196,196,196,196,196,196,196,196,196,196,196,196,196,196,196,196,196,196,196,196,196,196,196,196,196,196,196,196,196,196,196,196,196,196,196,196,196,196,196,196,196,196,196,196,196,196,196,196,196,196,196,196,196,196,196,196,196,196,196,196,196,196,196,196,196,196,196,196,196,196,196,196,196,196,196,196,196,196,196,196,196,196,196,196,196,196,196,196,196,196,196,196,196,196,196,196,196,196,196,196,196,196,196,196,196,196,196,196,196,196,196,196,196,196,196,196,196,196,196,196,196,196,196,196);
    printf("%20.35s\t%20.30s\t%20.30s\t%15d\t%30s\t%13d\t%13d\t%13d\n",a.nombrePelicula,a.genero,a.director,a.anio,a.pais,a.valoracion,a.idPelicula,a.eliminado);
}


///SUBMENU PRINTEADO CORRESPONDIENTE A COMO QUIERE VER ORDENADAS LAS PELICULAS EL USUARIO
void submenuMostrarPelisPrinteado()
{
    printf("%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c\n",201,205,187,196,196,196,196,196,196,196,196,196,196,196,196,196,196,196,196,196,196,196,196,196,196,196,196,196,196,196,196,191);
    printf("%c1%c  MOSTRAR POR TITULO         %c\n",186,186,179);
    printf("%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c\n",200,205,188,196,196,196,196,196,196,196,196,196,196,196,196,196,196,196,196,196,196,196,196,196,196,196,196,196,196,196,196,217);
    printf("%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c\n",201,205,187,196,196,196,196,196,196,196,196,196,196,196,196,196,196,196,196,196,196,196,196,196,196,196,196,196,196,196,196,191);
    printf("%c2%c  MOSTRAR POR GENERO        %c\n",186,186,179);
    printf("%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c\n",200,205,188,196,196,196,196,196,196,196,196,196,196,196,196,196,196,196,196,196,196,196,196,196,196,196,196,196,196,196,196,217);
}
///PRINNTEO DE OPCION A ELEGIR POR EL ADMINISTRADOR SOBRE LAS PELICULAS CORRESPONDIENTE A LA BAJA
void printfmodbaja()
{
    printf("%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c\n",201,205,187,196,196,196,196,196,196,196,196,196,196,196,196,196,196,196,196,196,196,196,196,196,196,196,191);
    printf("%c1%c  MODIFICAR PELICULA   %c\n",186,186,179);
    printf("%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c\n",200,205,188,196,196,196,196,196,196,196,196,196,196,196,196,196,196,196,196,196,196,196,196,196,196,196,217);
    printf("%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c\n",201,205,187,196,196,196,196,196,196,196,196,196,196,196,196,196,196,196,196,196,196,196,196,196,196,196,191);
    printf("%c2%c  ALTA/BAJA PELICULA   %c\n",186,186,179);
    printf("%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c\n",200,205,188,196,196,196,196,196,196,196,196,196,196,196,196,196,196,196,196,196,196,196,196,196,196,196,217);
}


///-----------------------------------------------------------------------------------------------
///SUBMENU PRINTEADO CORRESPONDIENTE A LA MODIFICACION DE UNA PELICULA
void SubmenuModificacionPelis()
{
    printf("%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c\n",201,205,187,196,196,196,196,196,196,196,196,196,196,196,196,196,196,196,196,196,196,196,196,196,196,196,191);
    printf("%c1%c  MODIFICAR NOMBRE     %c\n",186,186,179);
    printf("%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c\n",200,205,188,196,196,196,196,196,196,196,196,196,196,196,196,196,196,196,196,196,196,196,196,196,196,196,217);
    printf("%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c\n",201,205,187,196,196,196,196,196,196,196,196,196,196,196,196,196,196,196,196,196,196,196,196,196,196,196,191);
    printf("%c2%c  MODIFICAR DIRECTOR   %c\n",186,186,179);
    printf("%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c\n",200,205,188,196,196,196,196,196,196,196,196,196,196,196,196,196,196,196,196,196,196,196,196,196,196,196,217);
    printf("%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c\n",201,205,187,196,196,196,196,196,196,196,196,196,196,196,196,196,196,196,196,196,196,196,196,196,196,196,191);
    printf("%c3%c  MODIFICAR GENERO     %c\n",186,186,179);
    printf("%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c\n",200,205,188,196,196,196,196,196,196,196,196,196,196,196,196,196,196,196,196,196,196,196,196,196,196,196,217);
    printf("%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c\n",201,205,187,196,196,196,196,196,196,196,196,196,196,196,196,196,196,196,196,196,196,196,196,196,196,196,191);
    printf("%c4%c  MODIFICAR PAIS       %c\n",186,186,179);
    printf("%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c\n",200,205,188,196,196,196,196,196,196,196,196,196,196,196,196,196,196,196,196,196,196,196,196,196,196,196,217);
    printf("%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c\n",201,205,187,196,196,196,196,196,196,196,196,196,196,196,196,196,196,196,196,196,196,196,196,196,196,196,191);
    printf("%c5%c  MODIFICAR A%cO        %c\n",186,186,165,179);
    printf("%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c\n",200,205,188,196,196,196,196,196,196,196,196,196,196,196,196,196,196,196,196,196,196,196,196,196,196,196,217);
    printf("%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c\n",201,205,187,196,196,196,196,196,196,196,196,196,196,196,196,196,196,196,196,196,196,196,196,196,196,196,191);
    printf("%c6%c  MODIFICAR VALORACION %c\n",186,186,179);
    printf("%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c\n",200,205,188,196,196,196,196,196,196,196,196,196,196,196,196,196,196,196,196,196,196,196,196,196,196,196,217);
}


///FUNCION QUE CARGA LAS PELICULAS PROVENIENTE DEL ARCHIVO A UNA ESTRUCTURA
void cargarPeliculasaEstructura(char PatchVideo[],stPelicula Peliculas[])
{
    FILE *ArchiUser;
    int pos=0;
    int validos=contartodo(PatchVideo); //SE GUARDA EN UNA VARIABLE LA CANTIDAD DE REGISTROS QUE TIENE EL ARCHIVO DE PELICULAS
    ArchiUser=fopen(PatchVideo,"rb");
    if ((ArchiUser)!=NULL)
    {
        while ((fread(&Peliculas[pos],sizeof(stPelicula),1,ArchiUser)>0)&&(pos<validos))//SI SE CUMPLE SE GUARDA EN LA ESTRUCTURA
        {
            pos++;
        }
        fclose(ArchiUser);
    }
    if ((ArchiUser)==NULL)
    {
        printf("El archivo no existe / error de lectura!!\n");
    }
}
void actualizar(char PatchVideo[],stPelicula pelis[],int validos)
{
    FILE *archi;
    int i=0;
    archi=fopen(PatchVideo,"wb");
    if(archi!=NULL)
    {
        while(i<validos)
        {
            fwrite(&pelis[i],sizeof(stPelicula),1,archi);
            i++;
        }
        fclose(archi);
    }
}
///FUNCION QUE ORDENA PELICULAS POR TITULO
///(METODO SELECCION)
void OrdenarTitulosXsel(stPelicula pelis[],int validos)
{
    int posmenor=0;
    stPelicula aux;
    int cont=0;
    while(cont<validos-1)
    {
        posmenor=EncontrarMenorTitulo(pelis,validos,cont);
        aux=pelis[posmenor];
        pelis[posmenor]=pelis[cont];
        pelis[cont]=aux;
        cont++;
    }
}
//FUNCION ADICIONAL ENCONTRAR EL MENOR TITULO PARA EL METODO SELECCION
int EncontrarMenorTitulo(stPelicula pelis[],int validos,int pos)
{
    stPelicula menorpal=pelis[pos];
    int posmenor=pos;
    int cont=pos+1;
    while(cont<validos)
    {
        if(strcmpi(menorpal.nombrePelicula,pelis[cont].nombrePelicula)==1)
        {
            menorpal=pelis[cont];
            posmenor=cont;
        }
        cont++;
    }
    return posmenor;
}
///ORDENAR PELICULAS POR GENERO METODO INSERCION
void ordenarGeneroXins(stPelicula pelis[],int validos)
{
    int u=0;
    while(u<validos-1)
    {
        insertar(pelis,u,pelis[u+1]);
        u++;
    }
}
//FUNCION QUE INSERTA UNA PELICULA ORDENADA PARA EL METODO DE INSERCION
void insertar(stPelicula pelis[],int u,stPelicula dato)
{
    int i=u;
    while(i>=0&&strcmpi(dato.genero,pelis[i].genero)==-1)
    {
        pelis[i+1]=pelis[i];
        i--;
    }
    pelis[i+1]=dato;
}
///FUNCION QUE RETORNA EL MAYOR NUMERO DE PELICULAS VISTAS DE UN USUARIO
int cantidadrepetidasVistas(stUsuario usuario[])
{
    int i=0;
    while(i>=0)
    {
        printf("s");
    }
    return 1;
}
//FUNCION QUE MUUESTRA UNA PELICULA

void mostrarArreglo(stPelicula pelis[],int pos)
{
    int i=0;
    while(i<pos)
    {
        puts("\n---------------------------------------");
        printf("ID: %d\n",pelis[i].idPelicula);
        printf("Nombre: %s\n",pelis[i].nombrePelicula);
        printf("Director: %s\n",pelis[i].director);
        printf("Genero: %s\n",pelis[i].genero);
        printf("Pais: %s\n",pelis[i].pais);
        printf("A%co: %d\n",164,pelis[i].anio);
        printf("Valoracion: %d",pelis[i].valoracion);
        puts("\n---------------------------------------");
        i++;
    }
}

void ordenarIDXsel(stPelicula pelis[],int validos)
{
    int posmenor=0;
    stPelicula aux;
    int cont=0;
    while(cont<validos-1)
    {
        posmenor=encontrarMenorId(pelis,validos,cont);
        aux=pelis[posmenor];
        pelis[posmenor]=pelis[cont];
        pelis[cont]=aux;
        cont++;
    }
}
//FUNCION ADICIONAL ENCONTRAR EL MENOR TITULO PARA EL METODO SELECCION
int encontrarMenorId(stPelicula pelis[],int validos,int pos)
{
    stPelicula menorpal=pelis[pos];
    int posmenor=pos;
    int cont=pos+1;
    while(cont<validos)
    {
        if(pelis[cont].idPelicula<menorpal.idPelicula)
        {
            menorpal=pelis[cont];
            posmenor=cont;
        }
        cont++;
    }
    return posmenor;
}

