#include "usuarios.h"
//-****************************************************
//-***************************************************************************************
//SECTOR ADMINISTRACION DE USUARIOS
//-***************************************************************************************
//A)FUNCION QUE CARGA 1 USUARIO A LA ESTRUCTURA AUXILIAR Y LA GUARDA EN EL ARCHIVO //FALTA DESARROLLO DE PASS
//-----------------------------------------------------
void cargaunusuario(char PatchUser[])
{
    int valido=0;
    int i=0;
    int comparacion=0;

    char cAux[11];
    char cAux1[11];
    int iMatrixPsw[2][5];
    int iMatrixTestigo[2][2];
    int iMatrixEncrt [2][5];
    char cControl = 'n';

    FILE *ArchiUser;
    stUsuario Usuario;

    int cont=CantidadValida(PatchUser);


    ArchiUser=fopen(PatchUser,"ab");
    if ((ArchiUser)==NULL)
    {
        printf("Error en crear el archivo / ruta invalida \n");
    }
    if ((ArchiUser)!=NULL)
    {
        Usuario.IdUsuario=cont+1; //AUTOINCREMENTABLE
        //CARGA DE 1 USUARIO POR TECLADO
        printf("\nIngrese nombre de usuario: (Maximo 10 Caracteres): ");
        fflush(stdin);
        gets(Usuario.nombreUsuario);
        // VALIDO SI EL NOMBRE DE USUARIO YA EXISTE
        comparacion=validacionUsuario(PatchUser,Usuario,Usuario.IdUsuario);
        while (comparacion==0)
        {
            printf("\nEl nombre de usuario ya existe!");
            printf("\nIngrese otro nombre de usuario!: ");
            fflush(stdin);
            gets(Usuario.nombreUsuario);
            comparacion=validacionUsuario(PatchUser,Usuario,Usuario.IdUsuario);//VALIDO NUEVAMENTE EL NOMBRE
        }
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
            cpyMatr(2,2, Usuario.testigo, iMatrixTestigo);
            ///crea matriz testigo
            encriptar_matriz(2, 5, iMatrixTestigo, iMatrixPsw, iMatrixEncrt);
            cpyMatr(2, 5, Usuario.pass, iMatrixEncrt);
            ///archiva la contrasenia en campo pass de usuario
            cControl = 's';
        }

        printf("\nIngrese A%co de Nacimiento: ",164);
        fflush(stdin);
        scanf("%i",&Usuario.anioNacimiento);

        printf("Ingrese Genero: (-m-asculino/-f-emenino): ");
        fflush(stdin);
        gets(&Usuario.genero);

        printf("Ingrese pais de nacimiento del Usuario: ");
        fflush(stdin);
        gets(Usuario.pais);

        Usuario.eliminado=0;

        fwrite(&Usuario,sizeof(stUsuario),1,ArchiUser);
        printf("Se ha registrado correctamente el usuario\n");
        fclose(ArchiUser);
    }
}
//-----------------------------------------------------
//A.1)FUNCION ADICIONAL QUE VALIDA SI EL USUARIO YA EXISTE
//-----------------------------------------------------
int validacionUsuario(char PatchUser[],stUsuario Usuario,int validos)
{
    FILE *Archivo;
    int validacion=-1;
    stUsuario Aux[validos];
    int i=0;
    Archivo=fopen(PatchUser,"rb");
    if ((Archivo)!=NULL)
    {
        CargaArchivosEstructura(PatchUser,Aux,validos);
        while ((validacion!=0)&&(i<validos))
        {
            validacion=strcmp(Aux[i].nombreUsuario,Usuario.nombreUsuario);
            i++;
        }
        fclose(Archivo);
    }
    if (Archivo==NULL)
    {
        validacion=-1;
    }
    return validacion;

}
//-----------------------------------------------------
//FUNCION QUE MUESTRA 1 USUARIO
void mostrarunUsuario(stUsuario Usuario[],int pos)
{
    int pass[11];
    puts("-------------------------------------------------------------------\n");
    printf("USUARIO NRO/ID %d\n",Usuario[pos].IdUsuario);
    printf("Nombre de usuario: %s\n",Usuario[pos].nombreUsuario);
    //    pasajeMatriztoArreglo(pass,Usuario[pos].pass);
    //  printf("PASS: %s\n",pass);
    printf("Anio Nacimiento: %i\n",Usuario[pos].anioNacimiento);
    printf("Genero: ");
    if (Usuario[pos].genero=='f')
    {
        printf("Femenino\n");
    }
    else
    {
        printf("Masculino\n");
    }
    printf("Pais de origen: %s\n",Usuario[pos].pais);
    printf("Cantidad de Peliculas vistas: %d\n",Usuario[pos].canVistas);
    if (Usuario[pos].eliminado==0)
    {
        printf("Estado: ACTIVO\n");
    }
    else
    {
        printf("Estado: INACTIVO\n");
    }
    puts("-------------------------------------------------------------------\n");
}
//-----------------------------------------------------
//B)FUNCION QUE MUESTRA LISTA DE USUARIOS  // FALTA LA ENCRIPTACION SOLAMENTE
//-----------------------------------------------------
void mostrarUsuarioArchivo(char PatchUser[])
{
    FILE *ArchiUser;
    int validos=CantidadValida(PatchUser);
    stUsuario Usuario[validos];
    int i=0;
    ArchiUser=fopen(PatchUser,"rb");
    if ((ArchiUser)!=NULL)
    {
        printf("Apertura del archivo exitosa!\n");
        CargaArchivosEstructura(PatchUser,Usuario,validos);
        while (i<validos)
        {
            mostrarunUsuario(Usuario,i);
            i++;
        }
        fclose(ArchiUser);
    }
    if (ArchiUser==NULL)
    {
        printf("Error no existe el archivo\n");
    }
}
//-----------------------------------------------------
//C)FUNCION BAJA DE USUARIOS (INACTIVIDAD) REGISTRADOS EN EL ARCHIVO //EN DESARROLLO.....
//-----------------------------------------------------
void BajaUsuario(char PatchUser[],stUsuario Usuario[],int validos,int pos)
{
    char respuesta='y';
    system("pause");
    system("cls");
    printf("Nombre del Usuario %s:\n",Usuario[pos].nombreUsuario);
    printf("Esta seguro que quiere eliminar el usuario ID: %d ? Y/N \n",Usuario[pos].IdUsuario);
    fflush(stdin);
    gets(&respuesta);
    while ((respuesta!='y')&&(respuesta!='n'))
    {
        system("cls");
        printf("Opcion incorrecta!!\n");
        printf("Por favor reingrese la opcion!\n");
        printf("Nombre del Usuario %s:\n",Usuario[pos].nombreUsuario);
        printf("Esta seguro que quiere eliminar el usuario ID: %d ? Y/N \n",Usuario[pos].IdUsuario);
        fflush(stdin);
        gets(&respuesta);
    }
    if (respuesta=='y')
    {
        Usuario[pos].eliminado=1;
        mostrarunUsuario(Usuario,pos);
        ActualizarArchivo(PatchUser,Usuario,validos);
        printf("Usuario Inactivo!\n");
    }
    if (respuesta=='n')
    {
        Usuario[pos].eliminado=0;
        mostrarunUsuario(Usuario,pos);
        ActualizarArchivo(PatchUser,Usuario,validos);
        printf("No se dio de baja el Usuario!\n");
    }

}
//--------------------------------------------------
//D)FUNCION QUE BUSCA UN USUARIO POR ID O POR NOMBRE
//--------------------------------------------------
//D.1)FUNCION ADICIONAL PASAR LOS USUARIOS GUARDADOS DEL ARCHIVO A UNA ESTRUCTURA
//----------------------------------------------------------------------------
void CargaArchivosEstructura(char PatchUser[],stUsuario Usuario[],int validos)
{
    FILE *ArchiUser;
    int pos=0;
    ArchiUser=fopen(PatchUser,"rb");
    if ((ArchiUser)!=NULL)
    {
        while ((fread(&Usuario[pos],sizeof(stUsuario),1,ArchiUser)>0)&&(pos<validos))
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
//-----------------------------------
//D.2)FUNCION QUE BUSCAR USUARIO POR ID
//-----------------------------------
int BuscarUsuarioxxID(stUsuario Usuarios[],int id,int validos)
{
    int posid=0;
    int flag=0;
    int i=0;
    while ((i<validos)&&(flag==0))
    {
        if (id==Usuarios[i].IdUsuario)
        {
            flag=1;
            posid=i;
        }
        i++;
    }
    if (flag==0)//EN CASO QUE NO EXISTA EL USUARIO SE RETORNA -1 COMO VALOR
    {
        printf("El usuario no se encuentra en el registro!\n");
        posid=-1;
    }
    if (flag!=0)//EN CASO QUE SE ENCONTRO EL USUARIO RETORNA SU POSICION
    {
        printf("El usuario se encuentra en el registro!\n");
    }
    return posid;
}
//-----------------------------------------------
//D.3)BUSQUEDA DE USUARIO POR NOMBRE
//-----------------------------------------------
int BuscarUsuarioxNombre(stUsuario Usuario[],int validos,char nombre[])
{
    int flag=0;
    int i=0;
    int comparacion=0;
    int pos=0;
    while ((i<validos)&&(flag==0))
    {
        comparacion=strcmpi(nombre,Usuario[i].nombreUsuario);//COMPARO NOMBRES DE LOS REGISTRADOS CON EL BUSCADO
        if (comparacion==0)//SI SE ENCUENTRA SE TERMINA EL CICLO
        {
            flag=1;//VALOR QUE CORTA EL CICLO
            pos=i;
        }
        i++;
    }
    if (flag==0)//EN CASO QUE NO EXISTA EL USUARIO SE RETORNA -1 COMO VALOR
    {
        printf("El usuario no se encuentra en el registro!\n");
        pos=-1;
    }
    if (flag!=0)//EN CASO QUE SE ENCONTRO EL USUARIO RETORNA SU POSICION
    {
        printf("El usuario se encuentra en el registro!\n");
    }
    return pos;
}
//------------------------------------------------
//D.4)FUNCION QUE RETORNA LA  CANTIDAD DE REGISTROS VALIDOS EN EL ARCHIVO
//------------------------------------------------
int CantidadValida(char PatchUser[])
{
    int cantidad=0;
    FILE *Archivo;
    stUsuario UsuarioAux;
    Archivo=fopen(PatchUser,"rb");
    if ((Archivo)!=NULL)//EN CASO DE DAR OK EN LA LECTURA DEVUELVE LA CANTIDAD EXACTA DE USUARIOS EN EL ARCHIVO
    {
        while (fread(&UsuarioAux,sizeof(stUsuario),1,Archivo)>0)
        {
            cantidad++;
        }
        fclose(Archivo);
    }
    if ((Archivo)==NULL)//EN CASO DE DAR ERROR DEVUELVE COMO CANTIDAD 0 YA QUE NO EXISTE EL ARCHIVO
    {
        cantidad=0;
    }
    return cantidad;
}
//-***************************************************************************************
//FUNCION DE ACTUALIZACION DE USUARIOS
//-------------------------------------------
void ActualizarArchivo(char PatchUser[],stUsuario Usuario[],int validos)
{
    int i=0;
    FILE *Archivo;
    Archivo=fopen(PatchUser,"wb");
    if (Archivo!=NULL)
    {
        while(i<validos)
        {
            fwrite(&Usuario[i],sizeof(stUsuario),1,Archivo);
            i++;
        }
        fclose(Archivo);
    }
    if (Archivo==NULL)
    {
        printf("Error en abrir el archivo\n");
    }
}
//---------------------------------------
//FUNCION QUE MODIFICA UN USUARIO
//----------------------------------------

///FUNCION QUE CARGA LOS ID DE PELICULAS EN UN USUARIO DETERMINADO
void cargaIDpelisausuario(stUsuario Usuario[],int pos,int pospeli)
{
    int i=0;
    int flag=0;
    while ((i<30)&&(flag==0))
    {
        if((Usuario[pos].peliculasVistas[i])==-1)
        {
            Usuario[pos].peliculasVistas[i]=pospeli;
            flag=1;
        }
        i++;
    }
}
///FUNCION DE PRUEBA QUE MUESTRA LOS ID DE LAS PELICULAS GUARDADAS EN UN USUARIO DETERMINADO
void mostrarIDpelisausuario(stUsuario Usuario[],int pos)
{
    int i=0;
    int flag=0;
    printf("PElICULAS VISTAS!\n");
    while ((i<30))
    {
        if((Usuario[pos].peliculasVistas[i])!=-1)
        {
            printf("%d\n",Usuario[pos].peliculasVistas[i]);
        }
        i++;
    }
}

void passW(char palabra[])
{
///Le ingresa al string traido por local una password en **
///Exacamente 10 caracteres
    int cont = 0;
///Contador para que en la pos 10 se cree "\0"
    for(cont = 0; cont < 10; cont++)
    {
        fflush(stdin),
               palabra[cont] = _getch();
        while(palabra[cont] == 8 && cont >= 0)
        {
            if(cont > 0)
            {
                cont--;
            }
            putchar(8);
            putchar(' ');
            putchar(8);
            fflush(stdin);
            palabra[cont] = _getch();
        }
        printf("*");
    }
    palabra[cont] = '\0';
}
