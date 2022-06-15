#include "menuPrincilal.h"

const char *meses[] = {"Enero","Febrero","Marzo","Abril","Mayo","Junio","Julio","Agosto","Septiembre","Octubre","Noviembre","Diciembre"};
const char *dias[] = {"Domingo","Lunes","Martes","Miercoles","Jueves","Viernes","Sabado"};

void menuPrinteadoPrincipal()
{
    printf("\t\t\t\t\t\t\t\t   ");
    formatoFecha();
    printf("\t\t\t\t\t\t\t\t%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c\n",201,205,205,205,205,205,205,205,205,205,205,205,205,205,205,205,205,205,205,205,205,205,205,205,205,205,205,205,205,205,205,187);
    printf("\t\t\t\t\t\t\t\t%c        MEN%c PRINCIPAL        %c\n",186,233,186);
    printf("\t\t\t\t\t\t\t\t%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c\n",200,205,205,205,205,205,205,205,205,205,205,205,205,205,205,205,205,205,205,205,205,205,205,205,205,205,205,205,205,205,205,188);
    printf("\t\t\t\t\t\t\t\t%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c\n",201,205,187,196,196,196,196,196,196,196,196,196,196,196,196,196,196,196,196,196,196,196,196,196,196,196,196,196,196,196,196,191);
    printf("\t\t\t\t\t\t\t\t%c1%c  INICIAR SESI%cN            %c\n",186,186,224,179);
    printf("\t\t\t\t\t\t\t\t%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c\n",200,205,188,196,196,196,196,196,196,196,196,196,196,196,196,196,196,196,196,196,196,196,196,196,196,196,196,196,196,196,196,217);
    printf("\t\t\t\t\t\t\t\t%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c\n",201,205,187,196,196,196,196,196,196,196,196,196,196,196,196,196,196,196,196,196,196,196,196,196,196,196,196,196,196,196,196,191);
    printf("\t\t\t\t\t\t\t\t%c2%c  SOLO ADMINISTRADORES      %c\n",186,186,179);
    printf("\t\t\t\t\t\t\t\t%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c\n",200,205,188,196,196,196,196,196,196,196,196,196,196,196,196,196,196,196,196,196,196,196,196,196,196,196,196,196,196,196,196,217);
    printf("\t\t\t\t\t\t\t\t%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c\n",201,205,187,196,196,196,196,196,196,196,196,196,196,196,196,196,196,196,196,196,196,196,196,196,196,196,196,196,196,196,196,191);
    printf("\t\t\t\t\t\t\t\t%c3%c  REGISTRARSE               %c\n",186,186,179);
    printf("\t\t\t\t\t\t\t\t%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c\n",200,205,188,196,196,196,196,196,196,196,196,196,196,196,196,196,196,196,196,196,196,196,196,196,196,196,196,196,196,196,196,217);
    printf("\t\t\t\t\t\t\t\t%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c\n",201,205,187,196,196,196,196,196,196,196,196,196,196,196,196,196,196,196,196,196,196,196,196,196,196,196,196,196,196,196,196,191);
    printf("\t\t\t\t\t\t\t\t%c4%c  OPCIONES DE ACCESIBILIDAD %c\n",186,186,179);
    printf("\t\t\t\t\t\t\t\t%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c\n",200,205,188,196,196,196,196,196,196,196,196,196,196,196,196,196,196,196,196,196,196,196,196,196,196,196,196,196,196,196,196,217);
    printf("\t\t\t\t\t\t\t\t%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c\n",201,205,187,196,196,196,196,196,196,196,196,196,196,196,196,196,196,196,196,196,196,196,196,196,196,196,196,196,196,196,196,191);
    printf("\t\t\t\t\t\t\t\t%c5%c  SALIR                     %c\n",186,186,179);
    printf("\t\t\t\t\t\t\t\t%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c\n",200,205,188,196,196,196,196,196,196,196,196,196,196,196,196,196,196,196,196,196,196,196,196,196,196,196,196,196,196,196,196,217);
}

void menuPrincipal(arregloUsuarios adl[], nodoArbolPelicula * arbol, int validos, char pathUser[], char pathVideo[], char pathpelisVistas[])
{
    int opcion;
    int repeticiones=1;
    int passrepetidas=1;
    char nombreLogin[30];
    char pass[11];
    int coincide=0;
    int posUsuario=0;
    char nombreAdmin[30];
    stUsuario Admin;

    menuPrinteadoPrincipal();
    printf("Seleccione su opci%cn: ",162);
    scanf("%d",&opcion);
    switch(opcion)
    {
    case 1:
        system("cls");
        printf("Ingrese nombre de usuario: ");
        fflush(stdin);
        gets(nombreLogin);
        posUsuario=buscarUsuarioxNombreADL(adl, nombreLogin, validos);
        while ((posUsuario==-1)&&(repeticiones<4))
        {
            system("cls");
            printf("Nombre de usuario inv%clido!!!\n",160);
            printf("Intento n%cmero %d de 3\n",163,repeticiones);
            printf("Ingrese nombre de usuario: ");
            fflush(stdin);
            gets(nombreLogin);
            posUsuario=buscarUsuarioxNombreADL(adl, nombreLogin, validos);
            repeticiones++;
        }

        if ((posUsuario==-1))
        {
            printf("N%cmero de intentos llegados al maximo!\n",163);
            printf("Volviendo al men%c principal...\n",163);
            system("pause");
            system("cls");
            menuPrincipal(adl, arbol, validos, pathUser, pathVideo, pathpelisVistas);
        }
        else
        {
            printf("Ingrese su contrase%ca:     ",164);
            fflush(stdin);
            passW(pass);
            _getch();
            coincide=calcular_compatibilidad(2, 5, adl[posUsuario].usr.pass, adl[posUsuario].usr.testigo, pass);
            while ((coincide==0)&&(passrepetidas<4))
            {
                system("cls");
                printf("Intento n%cmero %d de 3\n",163,passrepetidas);
                printf("Contrase%ca incorrecta. \n",164);
                fflush(stdin);
                printf("Ingrese la contrase%ca nuevamente:\n ",164);
                passW(pass);
                _getch();
                coincide=calcular_compatibilidad(2, 5, adl[posUsuario].usr.pass, adl[posUsuario].usr.testigo, pass);
                passrepetidas++;
            }

        }
        if (passrepetidas>=4)
        {
            printf("N%cmero de intentos llegados al maximo!\n",163);
            printf("Volviendo al men%c principal...\n",163);
            system("pause");
            system("cls");
            menuPrincipal(adl, arbol, validos, pathUser, pathVideo, pathpelisVistas);
        }
        else
        {
            system("cls");
            printf("\nBIENVENIDO USUARIO %s!!\n",adl[posUsuario].usr.nombreUsuario);
            EfectoCargaMenu();
            printf("\n");
            system("pause");
            system("cls");
            menuUsuario(adl, nombreLogin, validos, arbol, pathUser, pathVideo, pathpelisVistas);
        }
        break;
    case 2:
        strcpy(Admin.nombreUsuario,"admin123");
        Admin.admin=1;
        system("cls");
        printf("Ingrese sus credenciales de Administrador: ");
        fflush(stdin);
        gets(nombreAdmin);
        while ((strcmp(Admin.nombreUsuario, nombreAdmin)!=0)&&(repeticiones<4))
        {
            system("cls");
            printf("Credenciales inv%clidas!!!\n",160);
            printf("N%cmero de intento: %d de 3\n",163,repeticiones);
            printf("Ingrese nombre de usuario: ");
            fflush(stdin);
            gets(nombreLogin);
            posUsuario=buscarUsuarioxNombreADL(adl, nombreAdmin, validos);
            repeticiones++;
        }
        if (strcmp(Admin.nombreUsuario, nombreAdmin)==0)
        {
            if (Admin.admin==1)
            {
                system("cls");
                printf("BIENVENIDO ADMINISTRADOR \n");
                EfectoCargaMenu();
                printf("\n");
                system("pause");
                system("cls");
                menuAdminPrincipal(adl, arbol, pathUser, pathVideo, validos, pathpelisVistas);
            }
            else
            {
                printf("Este usuario no cuenta con los privilegios de administrador. \n");
                printf("Volviendo al men%c principal...",163);
                system("pause");
                system("cls");
                menuPrincipal(adl, arbol, validos, pathUser, pathVideo, pathpelisVistas);
            }
        }
        if ((posUsuario==-1))
        {
            printf("N%cmero de intentos llegados al m%cximo!\n",163,160);
            printf("Volviendo al men%c Principal\n",163);
            system("pause");
            system("cls");
            menuPrincipal(adl, arbol, validos, pathUser, pathVideo, pathpelisVistas);
        }
        break;

    case 3:
        validos=altaUsuarioaArreglo(adl, validos, pathUser);
        system("pause");
        system("cls");
        menuPrincipal(adl,arbol,validos,pathUser,pathVideo,pathpelisVistas);
        break;

    case 4:
        system("cls");
        menuPrinteadoColores();
        system ("pause");
        system("cls");
        menuPrincipal(adl, arbol, validos, pathUser, pathVideo, pathpelisVistas);
        break;
    case 5:
        free(arbol);
        free(adl);
        printf("Gracias por usar UTN-ETFLIX 2\n");
        exit(1);
        break;
    default:
        printf("Opci%cn inv%clida!\n",162,160);
        system("pause");
        system("cls");
        menuPrincipal(adl, arbol, validos, pathUser, pathVideo, pathpelisVistas);
        break;
    }
}

void menuPrinteadoUsuario(char usuario[])
{
    printf("\t\t\t\t\t\t\t\t   ");
    formatoFecha();
    printf("\t\t\t\t\t\t\t\t%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c\n",201,205,205,205,205,205,205,205,205,205,205,205,205,205,205,205,205,205,205,205,205,205,205,205,205,205,205,205,205,205,205,187);
    printf("\t\t\t\t\t\t\t\t%c    BIENVENIDO  %s      %c\n",186,usuario,186);
    printf("\t\t\t\t\t\t\t\t%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c\n",200,205,205,205,205,205,205,205,205,205,205,205,205,205,205,205,205,205,205,205,205,205,205,205,205,205,205,205,205,205,205,188);
    printf("\t\t\t\t\t\t\t\t%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c\n",201,205,187,196,196,196,196,196,196,196,196,196,196,196,196,196,196,196,196,196,196,196,196,196,196,196,196,196,196,196,196,191);
    printf("\t\t\t\t\t\t\t\t%c1%c  VER PERFIL                %c\n",186,186,179);
    printf("\t\t\t\t\t\t\t\t%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c\n",200,205,188,196,196,196,196,196,196,196,196,196,196,196,196,196,196,196,196,196,196,196,196,196,196,196,196,196,196,196,196,217);
    printf("\t\t\t\t\t\t\t\t%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c\n",201,205,187,196,196,196,196,196,196,196,196,196,196,196,196,196,196,196,196,196,196,196,196,196,196,196,196,196,196,196,196,191);
    printf("\t\t\t\t\t\t\t\t%c2%c  MOSTRAR PEL%cCULAS         %c\n",186,186,214,179);
    printf("\t\t\t\t\t\t\t\t%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c\n",200,205,188,196,196,196,196,196,196,196,196,196,196,196,196,196,196,196,196,196,196,196,196,196,196,196,196,196,196,196,196,217);
    printf("\t\t\t\t\t\t\t\t%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c\n",201,205,187,196,196,196,196,196,196,196,196,196,196,196,196,196,196,196,196,196,196,196,196,196,196,196,196,196,196,196,196,191);
    printf("\t\t\t\t\t\t\t\t%c3%c  VER UNA PEL%cCULA          %c\n",186,186,214,179);
    printf("\t\t\t\t\t\t\t\t%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c\n",200,205,188,196,196,196,196,196,196,196,196,196,196,196,196,196,196,196,196,196,196,196,196,196,196,196,196,196,196,196,196,217);
    printf("\t\t\t\t\t\t\t\t%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c\n",201,205,187,196,196,196,196,196,196,196,196,196,196,196,196,196,196,196,196,196,196,196,196,196,196,196,196,196,196,196,196,191);
    printf("\t\t\t\t\t\t\t\t%c4%c  EDITAR SU PERFIL          %c\n",186,186,179);
    printf("\t\t\t\t\t\t\t\t%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c\n",200,205,188,196,196,196,196,196,196,196,196,196,196,196,196,196,196,196,196,196,196,196,196,196,196,196,196,196,196,196,196,217);
    printf("\t\t\t\t\t\t\t\t%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c\n",201,205,187,196,196,196,196,196,196,196,196,196,196,196,196,196,196,196,196,196,196,196,196,196,196,196,196,196,196,196,196,191);
    printf("\t\t\t\t\t\t\t\t%c5%c  BORRAR HISTORIAL          %c\n",186,186,179);
    printf("\t\t\t\t\t\t\t\t%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c\n",200,205,188,196,196,196,196,196,196,196,196,196,196,196,196,196,196,196,196,196,196,196,196,196,196,196,196,196,196,196,196,217);
    printf("\t\t\t\t\t\t\t\t%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c\n",201,205,187,196,196,196,196,196,196,196,196,196,196,196,196,196,196,196,196,196,196,196,196,196,196,196,196,196,196,196,196,191);
    printf("\t\t\t\t\t\t\t\t%c6%c  VER HISTORIAL             %c\n",186,186,179);
    printf("\t\t\t\t\t\t\t\t%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c\n",200,205,188,196,196,196,196,196,196,196,196,196,196,196,196,196,196,196,196,196,196,196,196,196,196,196,196,196,196,196,196,217);
    printf("\t\t\t\t\t\t\t\t%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c\n",201,205,187,196,196,196,196,196,196,196,196,196,196,196,196,196,196,196,196,196,196,196,196,196,196,196,196,196,196,196,196,191);
    printf("\t\t\t\t\t\t\t\t%c7%c  SALIR                     %c\n",186,186,179);
    printf("\t\t\t\t\t\t\t\t%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c\n",200,205,188,196,196,196,196,196,196,196,196,196,196,196,196,196,196,196,196,196,196,196,196,196,196,196,196,196,196,196,196,217);

}

void menuUsuario(arregloUsuarios adl[], char usuario[], int validos, nodoArbolPelicula * arbol, char pathUser[], char pathVideo[], char pathpelisVistas[])
{
    int opcion;
    int posUsuario=buscarUsuarioxNombreADL(adl, usuario, validos);
    int opModificarUsuario=0;
    int orden;
    menuPrinteadoUsuario(usuario);
    printf("\nSeleccione su opci%cn: ",162);
    scanf("%d",&opcion);
    switch(opcion)
    {
    case 1:
        system("cls");
        mostrarUsuario(adl, posUsuario);///SE MUESTRA EL PERFIL DEL USUARIO LOGUEADO
        system("pause");
        system("cls");
        menuUsuario(adl, usuario, validos, arbol, pathUser, pathVideo, pathpelisVistas);//SE RETORNA AL MENU DEL LOGIN PARA SEGUIR EN LA SESION
        break;
    case 2:
        system("cls");
        printf("Como desea ver el listado? ([1]. PRE-Order / [2]. IN-Order / [3]. POS-Order): ");
        scanf("%i", &orden);

        switch(orden)
        {
        case 1:
            preorder(arbol);
            system("pause");
            system("cls");
            break;
        case 2:
            inorder(arbol);
            system("pause");
            system("cls");
            break;
        case 3:
            postorder(arbol);
            system("pause");
            system("cls");
            break;
        default:
            inorder(arbol);
            system("pause");
            system("cls");
            break;
        }
        menuUsuario(adl, usuario, validos, arbol, pathUser, pathVideo, pathpelisVistas);
        break;
    case 3:
        ///EN ESTA OPCION SE CARGA LAS PELICULAS A UNA ESTRUCTURA PARA BUSCAR LA PELICULA QUE INGRESA EL USUARIO EN EL ARCHIVO
        ///DE TAL MANERA QUE SI LA ENCUENTRA GUARDA SU ID DE PELICULA Y SE LE SUMA A SU CANTIDAD DE PELICULAS VISTAS
        system("cls");
        agregarPeliculaToUsuario(adl, posUsuario, validos, arbol);//SE GUARDA LA PELICULA EN EL ARREGLo
        system("pause");
        system("cls");
        menuUsuario(adl, usuario, validos, arbol, pathUser, pathVideo, pathpelisVistas);//SE RETORNA AL MENU DEL LOGIN PARA SEGUIR EN LA SESION
        break;
    case 4:
        system("cls");
        menuPrinteadoModificacionUsuario();
        printf("Seleccione su opci%cn: ",162);
        scanf("%i",&opModificarUsuario);
        modificacionUsuario(adl, posUsuario, opModificarUsuario, 0, arbol, pathUser, pathVideo, validos);
        guardarADLenArchivo(adl, validos, pathUser);
        menuUsuario(adl, usuario, validos, arbol, pathUser, pathVideo, pathpelisVistas);//SE RETORNA AL MENU DEL LOGIN PARA SEGUIR EN LA SESION
        break;
    case 5:
        system("cls");
        adl[posUsuario].listaPelis=borrarTodaLaLista(adl[posUsuario].listaPelis);
        printf("Historial borrado con %cxito. \n",130);
        printf("Volviendo al men%c principal...\n",163);
        system("pause");
        system("cls");
        menuUsuario(adl, usuario, validos, arbol, pathUser, pathVideo, pathpelisVistas);
        break;
    case 6:
        system("cls");
        printf("HISTORIAL DE PELICULAS DEL USUARIO %s\n",adl[posUsuario].usr.nombreUsuario);
        recorrerYmostrar(adl[posUsuario].listaPelis);
        system("pause");
        system("cls");
        menuUsuario(adl, usuario, validos, arbol, pathUser, pathVideo, pathpelisVistas);
        break;
    case 7:
        system("cls");
        printf("Gracias por usar el sistema. Volviendo al men%c principal...\n",163);
        pasarADLaPelisVistas(pathpelisVistas,adl,validos);
        system("pause");
        system("cls");
        menuPrincipal(adl, arbol, validos, pathUser, pathVideo, pathpelisVistas);
        break;
    default:
        printf("Opci%cn inv%clida!\n",162,160);
        system("cls");
        system("pause");
        menuUsuario(adl, usuario, validos, arbol, pathUser, pathVideo, pathpelisVistas);//SE RETORNA AL MENU DEL LOGIN PARA SEGUIR EN LA SESION
        break;
    }
}

void menuPrinteadoAdminPrincipal()
{
    printf("\t\t\t\t\t\t\t\t   ");
    formatoFecha();
    printf("\t\t\t\t\t\t\t\t%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c\n",201,205,205,205,205,205,205,205,205,205,205,205,205,205,205,205,205,205,205,205,205,205,205,205,205,205,205,205,205,205,205,187);
    printf("\t\t\t\t\t\t\t\t%c        PANEL DE CONTROL      %c\n",186,186);
    printf("\t\t\t\t\t\t\t\t%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c\n",200,205,205,205,205,205,205,205,205,205,205,205,205,205,205,205,205,205,205,205,205,205,205,205,205,205,205,205,205,205,205,188);
    printf("\t\t\t\t\t\t\t\t%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c\n",201,205,187,196,196,196,196,196,196,196,196,196,196,196,196,196,196,196,196,196,196,196,196,196,196,196,196,196,196,196,196,191);
    printf("\t\t\t\t\t\t\t\t%c1%c  SUB-MEN%c USUARIOS         %c\n",186,186,233,179);
    printf("\t\t\t\t\t\t\t\t%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c\n",200,205,188,196,196,196,196,196,196,196,196,196,196,196,196,196,196,196,196,196,196,196,196,196,196,196,196,196,196,196,196,217);
    printf("\t\t\t\t\t\t\t\t%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c\n",201,205,187,196,196,196,196,196,196,196,196,196,196,196,196,196,196,196,196,196,196,196,196,196,196,196,196,196,196,196,196,191);
    printf("\t\t\t\t\t\t\t\t%c2%c  SUB-MEN%c PEL%cCULAS        %c\n",186,186,233,214,179);
    printf("\t\t\t\t\t\t\t\t%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c\n",200,205,188,196,196,196,196,196,196,196,196,196,196,196,196,196,196,196,196,196,196,196,196,196,196,196,196,196,196,196,196,217);
    printf("\t\t\t\t\t\t\t\t%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c\n",201,205,187,196,196,196,196,196,196,196,196,196,196,196,196,196,196,196,196,196,196,196,196,196,196,196,196,196,196,196,196,191);
    printf("\t\t\t\t\t\t\t\t%c3%c  SALIR                     %c\n",186,186,179);
    printf("\t\t\t\t\t\t\t\t%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c\n",200,205,188,196,196,196,196,196,196,196,196,196,196,196,196,196,196,196,196,196,196,196,196,196,196,196,196,196,196,196,196,217);
}

void menuAdminPrincipal (arregloUsuarios adl[],nodoArbolPelicula * arbol, char pathUser[], char pathVideo[], int validos, char pathpelisVistas[])
{
    int opcion;
    menuPrinteadoAdminPrincipal();
    printf("Seleccione su opci%cn: ",162);
    scanf("%i",&opcion);

    switch(opcion)
    {
    case 1:
        system("cls");
        menuAdminUsuarios(adl, pathUser, validos, arbol, pathVideo,pathpelisVistas);
        break;
    case 2:
        system("cls");
        menuAdminPeliculas(adl, arbol, pathUser, pathVideo, validos, pathpelisVistas);
        break;
    default:
        system("cls");
        menuPrincipal(adl, arbol, validos, pathUser, pathVideo, pathpelisVistas);
        break;
    }
}

void menuPrinteadoAdminUsuarios()
{
    printf("\t\t\t\t\t\t\t\t   ");
    formatoFecha();
    printf("\t\t\t\t\t\t\t\t%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c\n",201,205,205,205,205,205,205,205,205,205,205,205,205,205,205,205,205,205,205,205,205,205,205,205,205,205,205,205,205,205,205,187);
    printf("\t\t\t\t\t\t\t\t%c PANEL DE CONTROL - USUARIOS  %c\n",186,186);
    printf("\t\t\t\t\t\t\t\t%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c\n",200,205,205,205,205,205,205,205,205,205,205,205,205,205,205,205,205,205,205,205,205,205,205,205,205,205,205,205,205,205,205,188);
    printf("\t\t\t\t\t\t\t\t%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c\n",201,205,187,196,196,196,196,196,196,196,196,196,196,196,196,196,196,196,196,196,196,196,196,196,196,196,196,196,196,196,196,191);
    printf("\t\t\t\t\t\t\t\t%c1%c  DAR DE ALTA UN USUARIO    %c\n",186,186,179);
    printf("\t\t\t\t\t\t\t\t%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c\n",200,205,188,196,196,196,196,196,196,196,196,196,196,196,196,196,196,196,196,196,196,196,196,196,196,196,196,196,196,196,196,217);
    printf("\t\t\t\t\t\t\t\t%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c\n",201,205,187,196,196,196,196,196,196,196,196,196,196,196,196,196,196,196,196,196,196,196,196,196,196,196,196,196,196,196,196,191);
    printf("\t\t\t\t\t\t\t\t%c2%c  DAR DE BAJA UN USUARIO    %c\n",186,186,179);
    printf("\t\t\t\t\t\t\t\t%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c\n",200,205,188,196,196,196,196,196,196,196,196,196,196,196,196,196,196,196,196,196,196,196,196,196,196,196,196,196,196,196,196,217);
    printf("\t\t\t\t\t\t\t\t%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c\n",201,205,187,196,196,196,196,196,196,196,196,196,196,196,196,196,196,196,196,196,196,196,196,196,196,196,196,196,196,196,196,191);
    printf("\t\t\t\t\t\t\t\t%c3%c  MODIFICAR UN USUARIO      %c\n",186,186,179);
    printf("\t\t\t\t\t\t\t\t%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c\n",200,205,188,196,196,196,196,196,196,196,196,196,196,196,196,196,196,196,196,196,196,196,196,196,196,196,196,196,196,196,196,217);
    printf("\t\t\t\t\t\t\t\t%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c\n",201,205,187,196,196,196,196,196,196,196,196,196,196,196,196,196,196,196,196,196,196,196,196,196,196,196,196,196,196,196,196,191);
    printf("\t\t\t\t\t\t\t\t%c4%c  LISTADO DE USUARIOS       %c\n",186,186,179);
    printf("\t\t\t\t\t\t\t\t%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c\n",200,205,188,196,196,196,196,196,196,196,196,196,196,196,196,196,196,196,196,196,196,196,196,196,196,196,196,196,196,196,196,217);
    printf("\t\t\t\t\t\t\t\t%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c\n",201,205,187,196,196,196,196,196,196,196,196,196,196,196,196,196,196,196,196,196,196,196,196,196,196,196,196,196,196,196,196,191);
    printf("\t\t\t\t\t\t\t\t%c5%c  CONSULTAR POR UN USUARIO  %c\n",186,186,179);
    printf("\t\t\t\t\t\t\t\t%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c\n",200,205,188,196,196,196,196,196,196,196,196,196,196,196,196,196,196,196,196,196,196,196,196,196,196,196,196,196,196,196,196,217);
    printf("\t\t\t\t\t\t\t\t%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c\n",201,205,187,196,196,196,196,196,196,196,196,196,196,196,196,196,196,196,196,196,196,196,196,196,196,196,196,196,196,196,196,191);
    printf("\t\t\t\t\t\t\t\t%c6%c  VOLVER AL MEN%c PRINCIPAL  %c\n",186,186,233,179);
    printf("\t\t\t\t\t\t\t\t%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c\n",200,205,188,196,196,196,196,196,196,196,196,196,196,196,196,196,196,196,196,196,196,196,196,196,196,196,196,196,196,196,196,217);
}

void menuAdminUsuarios (arregloUsuarios adl[], char pathUser[], int validos, nodoArbolPelicula * arbol, char pathVideo[],char pathpelisVistas[])
{
    int opcion;
    int IDUsuario;
    int existe;
    int opcionModificacion;
    menuPrinteadoAdminUsuarios();
    printf("Seleccione su opci%cn: ",162);
    scanf("%i",&opcion);

    switch(opcion)
    {
    case 1:
        system("cls");
        validos=altaUsuarioaArreglo(adl, validos, pathUser);
        system("pause");
        system("cls");
        menuAdminUsuarios(adl,pathUser,validos,arbol,pathVideo,pathpelisVistas);
        break;
    case 2:
        system("cls");
        printf("¿Cual usuario desea dar de baja? ID: ");
        scanf("%i",&IDUsuario);
        existe=buscarXIdUsuario(adl, IDUsuario, validos);
        if(existe==-1)
            printf("Ese ID no coincide con ningun usuario.\n");
        else
            modificacionUsuario(adl,existe, 7, 1, arbol, pathUser, pathVideo, validos);
        printf("Volviendo al menu anterior.....\n");
        system("pause");
        system("cls");
        menuAdminUsuarios(adl,pathUser,validos,arbol,pathVideo,pathpelisVistas);
        break;
    case 3:
        system("cls");
        printf("¿Cual usuario desea modificar? ID: ");
        scanf("%i",&IDUsuario);
        existe=buscarXIdUsuario(adl, IDUsuario, validos);
        if(existe==-1)
            printf("Ese ID no coincide con ningun usuario.\n");
        else
        {
            system("cls");
            menuPrinteadoModificacionUsuario();
            printf("Seleccione la opcion: ");
            scanf("%i",&opcionModificacion);
            modificacionUsuario(adl, existe, opcionModificacion, 1, arbol, pathUser, pathVideo, validos);
            guardarADLenArchivo(adl, validos, pathUser);
        }
        printf("Volviendo al menu anterior.....\n");
        system("pause");
        system("cls");
        menuAdminUsuarios(adl,pathUser,validos,arbol,pathVideo,pathpelisVistas);
        break;
    case 4:
        system("cls");
        mostrarUsuarios (adl, validos);
        printf("Volviendo al menu anterior.....\n");
        system("pause");
        system("cls");
        menuAdminUsuarios(adl,pathUser,validos,arbol,pathVideo,pathpelisVistas);
        break;
    case 5:
        system("cls");
        printf("¿Cual usuario desea ver? ID: ");
        scanf("%i", &IDUsuario);
        existe=buscarXIdUsuario(adl, IDUsuario, validos);
        if(existe==-1)
            printf("Ese ID no coincide con ningun usuario.\n");
        else
            mostrarUsuario(adl, existe);
        printf("Volviendo al menu anterior.....\n");
        system("pause");
        system("cls");
        menuAdminUsuarios(adl,pathUser,validos,arbol,pathVideo,pathpelisVistas);
        break;
    case 6:
        printf("Volviendo al menu anterior......\n");
        system("pause");
        system("cls");
        menuAdminPrincipal(adl,arbol,pathUser,pathVideo,validos,pathpelisVistas);
        break;
    }
}

void menuPrinteadoAdminPeliculas()
{
    printf("\t\t\t\t\t\t\t\t   ");
    formatoFecha();
    printf("\t\t\t\t\t\t\t\t%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c\n",201,205,205,205,205,205,205,205,205,205,205,205,205,205,205,205,205,205,205,205,205,205,205,205,205,205,205,205,205,205,205,187);
    printf("\t\t\t\t\t\t\t\t%c PANEL DE CONTROL - PEL%cCULAS %c\n",186,214,186);
    printf("\t\t\t\t\t\t\t\t%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c\n",200,205,205,205,205,205,205,205,205,205,205,205,205,205,205,205,205,205,205,205,205,205,205,205,205,205,205,205,205,205,205,188);
    printf("\t\t\t\t\t\t\t\t%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c\n",201,205,187,196,196,196,196,196,196,196,196,196,196,196,196,196,196,196,196,196,196,196,196,196,196,196,196,196,196,196,196,191);
    printf("\t\t\t\t\t\t\t\t%c1%c  DAR DE ALTA UNA PEL%cCULA  %c\n",186,186,214,179);
    printf("\t\t\t\t\t\t\t\t%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c\n",200,205,188,196,196,196,196,196,196,196,196,196,196,196,196,196,196,196,196,196,196,196,196,196,196,196,196,196,196,196,196,217);
    printf("\t\t\t\t\t\t\t\t%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c\n",201,205,187,196,196,196,196,196,196,196,196,196,196,196,196,196,196,196,196,196,196,196,196,196,196,196,196,196,196,196,196,191);
    printf("\t\t\t\t\t\t\t\t%c2%c  DAR DE BAJA UNA PEL%cCULA  %c\n",186,186,214,179);
    printf("\t\t\t\t\t\t\t\t%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c\n",200,205,188,196,196,196,196,196,196,196,196,196,196,196,196,196,196,196,196,196,196,196,196,196,196,196,196,196,196,196,196,217);
    printf("\t\t\t\t\t\t\t\t%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c\n",201,205,187,196,196,196,196,196,196,196,196,196,196,196,196,196,196,196,196,196,196,196,196,196,196,196,196,196,196,196,196,191);
    printf("\t\t\t\t\t\t\t\t%c3%c  MODIFICAR UNA PEL%cCULA    %c\n",186,186,214,179);
    printf("\t\t\t\t\t\t\t\t%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c\n",200,205,188,196,196,196,196,196,196,196,196,196,196,196,196,196,196,196,196,196,196,196,196,196,196,196,196,196,196,196,196,217);
    printf("\t\t\t\t\t\t\t\t%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c\n",201,205,187,196,196,196,196,196,196,196,196,196,196,196,196,196,196,196,196,196,196,196,196,196,196,196,196,196,196,196,196,191);
    printf("\t\t\t\t\t\t\t\t%c4%c  LISTADO DE PEL%cCULAS      %c\n",186,186,214,179);
    printf("\t\t\t\t\t\t\t\t%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c\n",200,205,188,196,196,196,196,196,196,196,196,196,196,196,196,196,196,196,196,196,196,196,196,196,196,196,196,196,196,196,196,217);
    printf("\t\t\t\t\t\t\t\t%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c\n",201,205,187,196,196,196,196,196,196,196,196,196,196,196,196,196,196,196,196,196,196,196,196,196,196,196,196,196,196,196,196,191);
    printf("\t\t\t\t\t\t\t\t%c5%c  CONSULTAR PEL%cCULA POR ID %c\n",186,186,214,179);
    printf("\t\t\t\t\t\t\t\t%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c\n",200,205,188,196,196,196,196,196,196,196,196,196,196,196,196,196,196,196,196,196,196,196,196,196,196,196,196,196,196,196,196,217);
    printf("\t\t\t\t\t\t\t\t%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c\n",201,205,187,196,196,196,196,196,196,196,196,196,196,196,196,196,196,196,196,196,196,196,196,196,196,196,196,196,196,196,196,191);
    printf("\t\t\t\t\t\t\t\t%c6%c  BORRAR UNA PEL%cCULA       %c\n",186,186,214,179);
    printf("\t\t\t\t\t\t\t\t%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c\n",200,205,188,196,196,196,196,196,196,196,196,196,196,196,196,196,196,196,196,196,196,196,196,196,196,196,196,196,196,196,196,217);
    printf("\t\t\t\t\t\t\t\t%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c\n",201,205,187,196,196,196,196,196,196,196,196,196,196,196,196,196,196,196,196,196,196,196,196,196,196,196,196,196,196,196,196,191);
    printf("\t\t\t\t\t\t\t\t%c7%c  VOLVER AL MEN%c PRINCIPAL  %c\n",186,186,233,179);
    printf("\t\t\t\t\t\t\t\t%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c\n",200,205,188,196,196,196,196,196,196,196,196,196,196,196,196,196,196,196,196,196,196,196,196,196,196,196,196,196,196,196,196,217);

}

void menuAdminPeliculas (arregloUsuarios adl[],nodoArbolPelicula * arbol, char pathUser[], char pathVideo[], int validos, char pathpelisVistas[])
{
    system("cls");
    int opcion;
    int orden;
    int idPeli;
    char rta;
    nodoArbolPelicula * existe=inicArbol();
    stPelicula p;
    menuPrinteadoAdminPeliculas();
    printf("Seleccione su opcion: ");
    scanf("%i",&opcion);

    switch(opcion)
    {
    case 1:
        system("cls");

        printf("Ingrese el nombre de la pelicula: ");
        fflush(stdin);
        gets(p.nombrePelicula);

        printf("Ingrese el anio de estreno: ");
        fflush(stdin);
        scanf("%i",&p.anio);

        printf("Ingrese el director: ");
        fflush(stdin);
        gets(p.director);

        printf("Ingrese el pais de origen: ");
        fflush(stdin);
        gets(p.pais);

        printf("Ingrese el genero: ");
        fflush(stdin);
        gets(p.genero);

        printf("Ingrese su rating (0/+13/+16/+18): ");
        fflush(stdin);
        scanf("%i",&p.pm);

        printf("Ingrese la valoracion IMDB: ");
        fflush(stdin);
        scanf("%i",&p.valoracion);

        p.eliminado=1;

        p.idPelicula=contarNodosArbol(arbol)+1;

        arbol=insertarNodoArbol(arbol, p);
        actualizarPeliculasDeArbol(arbol,pathVideo);
        //CargaPeliculaNuevo(pathVideo, p);

        system("pause");
        system("cls");
        menuAdminPeliculas(adl,arbol,pathUser,pathVideo,validos,pathpelisVistas);
        break;
    case 2:
        system("cls");
        printf("Ingrese el ID de la pelicula a dar de baja: ");
        scanf("%i",&idPeli);
        existe=buscarEnArbol(arbol, idPeli);
        if (existe)
        {
            if(existe->p.eliminado==0)
                existe->p.eliminado=1;
            else if(existe->p.eliminado==1)
                existe->p.eliminado=0;
        }
        else
            printf("La pelicula ingresada no existe en el sistema!\n");
        system("pause");
        system("cls");
        menuAdminPeliculas(adl,arbol,pathUser,pathVideo,validos,pathpelisVistas);
        break;
    case 3:
        system("cls");
        arbol=modificarCampoenArbol(arbol,pathVideo);
        system("pause");
        system("cls");
        menuAdminPeliculas(adl,arbol,pathUser,pathVideo,validos,pathpelisVistas);
        break;
    case 4:
        system("cls");
        printf("Como desea ver el listado? ([1]. PRE-Order / [2]. IN-Order / [3]. POS-Order): ");
        scanf("%i", &orden);

        switch(orden)
        {
        case 1:
            preorder(arbol);
            system("pause");
            system("cls");
            break;
        case 2:
            inorder(arbol);
            system("pause");
            system("cls");
            break;
        case 3:
            postorder(arbol);
            system("pause");
            system("cls");
            break;
        default:
            inorder(arbol);
            system("pause");
            system("cls");
            break;
        }
        menuAdminPeliculas(adl,arbol,pathUser,pathVideo,validos,pathpelisVistas);
        break;
    case 5:
        system("cls");
        printf("¿Cual pelicula desea consultar? ID: ");
        scanf("%i", &idPeli);
        existe=buscarEnArbol(arbol, idPeli);
        if (existe)
            printeoArbol(existe);
        else
        {
            printf("La pelicula no existe!\n");
        }
        system("pause");
        system("cls");
        menuAdminPeliculas(adl,arbol,pathUser,pathVideo,validos,pathpelisVistas);
        break;
    case 6:
        system("cls");
        printf("¿Cual pelicula desea borrar? ID: ");
        scanf("%i", &idPeli);
        existe=buscarEnArbol(arbol, idPeli);
        if (existe)
        {
            printeoArbol(existe);
            printf("\nEsta seguro que quiere borrar la pelicula?y/n \n");
            fflush(stdin);
            scanf("%c",&rta);
            if (rta=='y')
            {
                arbol=borrarNodoArbol(arbol,existe->p.idPelicula);
                actualizarPeliculasDeArbol(arbol,pathVideo);
            }
        }
        else
            printf("La pelicula ingresada no existe!\n");
        system("pause");
        system("cls");
        menuAdminPeliculas(adl,arbol,pathUser,pathVideo,validos,pathpelisVistas);
        break;
    case 7:
        printf("Volviendo al menu principal.....\n");
        system("pause");
        system("cls");
        menuAdminPrincipal(adl,arbol,pathUser,pathVideo,validos,pathpelisVistas);
        break;
    }
}

void menuPrinteadoModificacionUsuario()
{
    printf("\t\t\t\t\t\t\t\t   ");
    formatoFecha();
    printf("\t\t\t\t\t\t\t\t%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c\n",201,205,205,205,205,205,205,205,205,205,205,205,205,205,205,205,205,205,205,205,205,205,205,205,205,205,205,205,205,205,205,187);
    printf("\t\t\t\t\t\t\t\t%c     MODIFICAR AL USUARIO     %c\n",186,186,179);
    printf("\t\t\t\t\t\t\t\t%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c\n",200,205,205,205,205,205,205,205,205,205,205,205,205,205,205,205,205,205,205,205,205,205,205,205,205,205,205,205,205,205,205,188);
    printf("\t\t\t\t\t\t\t\t%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c\n",201,205,187,196,196,196,196,196,196,196,196,196,196,196,196,196,196,196,196,196,196,196,196,196,196,196,196,196,196,196,196,191);
    printf("\t\t\t\t\t\t\t\t%c1%c  NOMBRE DE USUARIO         %c\n",186,186,179);
    printf("\t\t\t\t\t\t\t\t%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c\n",200,205,188,196,196,196,196,196,196,196,196,196,196,196,196,196,196,196,196,196,196,196,196,196,196,196,196,196,196,196,196,217);
    printf("\t\t\t\t\t\t\t\t%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c\n",201,205,187,196,196,196,196,196,196,196,196,196,196,196,196,196,196,196,196,196,196,196,196,196,196,196,196,196,196,196,196,191);
    printf("\t\t\t\t\t\t\t\t%c2%c  CONTRASE%cA                %c\n",186,186,165,179);
    printf("\t\t\t\t\t\t\t\t%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c\n",200,205,188,196,196,196,196,196,196,196,196,196,196,196,196,196,196,196,196,196,196,196,196,196,196,196,196,196,196,196,196,217);
    printf("\t\t\t\t\t\t\t\t%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c\n",201,205,187,196,196,196,196,196,196,196,196,196,196,196,196,196,196,196,196,196,196,196,196,196,196,196,196,196,196,196,196,191);
    printf("\t\t\t\t\t\t\t\t%c3%c  G%cNERO                    %c\n",186,186,144,179);
    printf("\t\t\t\t\t\t\t\t%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c\n",200,205,188,196,196,196,196,196,196,196,196,196,196,196,196,196,196,196,196,196,196,196,196,196,196,196,196,196,196,196,196,217);
    printf("\t\t\t\t\t\t\t\t%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c\n",201,205,187,196,196,196,196,196,196,196,196,196,196,196,196,196,196,196,196,196,196,196,196,196,196,196,196,196,196,196,196,191);
    printf("\t\t\t\t\t\t\t\t%c4%c  A%cO DE NACIMIENTO         %c\n",186,186,165,179);
    printf("\t\t\t\t\t\t\t\t%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c\n",200,205,188,196,196,196,196,196,196,196,196,196,196,196,196,196,196,196,196,196,196,196,196,196,196,196,196,196,196,196,196,217);
    printf("\t\t\t\t\t\t\t\t%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c\n",201,205,187,196,196,196,196,196,196,196,196,196,196,196,196,196,196,196,196,196,196,196,196,196,196,196,196,196,196,196,196,191);
    printf("\t\t\t\t\t\t\t\t%c5%c  PA%cS DE ORIGEN            %c\n",186,186,214,179);
    printf("\t\t\t\t\t\t\t\t%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c\n",200,205,188,196,196,196,196,196,196,196,196,196,196,196,196,196,196,196,196,196,196,196,196,196,196,196,196,196,196,196,196,217);
    printf("\t\t\t\t\t\t\t\t%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c\n",201,205,187,196,196,196,196,196,196,196,196,196,196,196,196,196,196,196,196,196,196,196,196,196,196,196,196,196,196,196,196,191);
    printf("\t\t\t\t\t\t\t\t%c6%c  VOLVER AL MEN%c PRINCIPAL  %c\n",186,186,233,179);
    printf("\t\t\t\t\t\t\t\t%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c\n",200,205,188,196,196,196,196,196,196,196,196,196,196,196,196,196,196,196,196,196,196,196,196,196,196,196,196,196,196,196,196,217);
}

void menuPrinteadoModificacionPeliculas()
{
    printf("\t\t\t\t\t\t\t\t   ");
    formatoFecha();
    printf("\t\t\t\t\t\t\t\t%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c\n",201,205,205,205,205,205,205,205,205,205,205,205,205,205,205,205,205,205,205,205,205,205,205,205,205,205,205,205,205,205,205,187);
    printf("\t\t\t\t\t\t\t\t%c     MODIFICAR LA PELICULA    %c\n",186,186,179);
    printf("\t\t\t\t\t\t\t\t%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c\n",200,205,205,205,205,205,205,205,205,205,205,205,205,205,205,205,205,205,205,205,205,205,205,205,205,205,205,205,205,205,205,188);
    printf("\t\t\t\t\t\t\t\t%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c\n",201,205,187,196,196,196,196,196,196,196,196,196,196,196,196,196,196,196,196,196,196,196,196,196,196,196,196,196,196,196,196,191);
    printf("\t\t\t\t\t\t\t\t%c1%c  T%cTULO DE LA PELICULA      %c\n",186,214,186,179);
    printf("\t\t\t\t\t\t\t\t%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c\n",200,205,188,196,196,196,196,196,196,196,196,196,196,196,196,196,196,196,196,196,196,196,196,196,196,196,196,196,196,196,196,217);
    printf("\t\t\t\t\t\t\t\t%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c\n",201,205,187,196,196,196,196,196,196,196,196,196,196,196,196,196,196,196,196,196,196,196,196,196,196,196,196,196,196,196,196,191);
    printf("\t\t\t\t\t\t\t\t%c2%c  A%cO DE ESTRENO            %c\n",186,186,165,179);
    printf("\t\t\t\t\t\t\t\t%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c\n",200,205,188,196,196,196,196,196,196,196,196,196,196,196,196,196,196,196,196,196,196,196,196,196,196,196,196,196,196,196,196,217);
    printf("\t\t\t\t\t\t\t\t%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c\n",201,205,187,196,196,196,196,196,196,196,196,196,196,196,196,196,196,196,196,196,196,196,196,196,196,196,196,196,196,196,196,191);
    printf("\t\t\t\t\t\t\t\t%c3%c  DIRECTOR                   %c\n",186,186,179);
    printf("\t\t\t\t\t\t\t\t%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c\n",200,205,188,196,196,196,196,196,196,196,196,196,196,196,196,196,196,196,196,196,196,196,196,196,196,196,196,196,196,196,196,217);
    printf("\t\t\t\t\t\t\t\t%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c\n",201,205,187,196,196,196,196,196,196,196,196,196,196,196,196,196,196,196,196,196,196,196,196,196,196,196,196,196,196,196,196,191);
    printf("\t\t\t\t\t\t\t\t%c4%c  G%NERO                     %c\n",186,186,144,179);
    printf("\t\t\t\t\t\t\t\t%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c\n",200,205,188,196,196,196,196,196,196,196,196,196,196,196,196,196,196,196,196,196,196,196,196,196,196,196,196,196,196,196,196,217);
    printf("\t\t\t\t\t\t\t\t%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c\n",201,205,187,196,196,196,196,196,196,196,196,196,196,196,196,196,196,196,196,196,196,196,196,196,196,196,196,196,196,196,196,191);
    printf("\t\t\t\t\t\t\t\t%c5%c  PA%cS DE ORIGEN            %c\n",186,186,214,179);
    printf("\t\t\t\t\t\t\t\t%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c\n",200,205,188,196,196,196,196,196,196,196,196,196,196,196,196,196,196,196,196,196,196,196,196,196,196,196,196,196,196,196,196,217);
    printf("\t\t\t\t\t\t\t\t%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c\n",201,205,187,196,196,196,196,196,196,196,196,196,196,196,196,196,196,196,196,196,196,196,196,196,196,196,196,196,196,196,196,191);
    printf("\t\t\t\t\t\t\t\t%c6%c  RATING                     %c\n",186,186,179);
    printf("\t\t\t\t\t\t\t\t%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c\n",200,205,188,196,196,196,196,196,196,196,196,196,196,196,196,196,196,196,196,196,196,196,196,196,196,196,196,196,196,196,196,217);
    printf("\t\t\t\t\t\t\t\t%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c\n",201,205,187,196,196,196,196,196,196,196,196,196,196,196,196,196,196,196,196,196,196,196,196,196,196,196,196,196,196,196,196,191);
    printf("\t\t\t\t\t\t\t\t%c7%c  VALORACI%cN                 %c\n",186,186,224,179);
    printf("\t\t\t\t\t\t\t\t%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c\n",200,205,188,196,196,196,196,196,196,196,196,196,196,196,196,196,196,196,196,196,196,196,196,196,196,196,196,196,196,196,196,217);
    printf("\t\t\t\t\t\t\t\t%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c\n",201,205,187,196,196,196,196,196,196,196,196,196,196,196,196,196,196,196,196,196,196,196,196,196,196,196,196,196,196,196,196,191);
    printf("\t\t\t\t\t\t\t\t%c8%c  VOLVER AL MEN%c PRINCIPAL  %c\n",186,186,233,179);
    printf("\t\t\t\t\t\t\t\t%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c\n",200,205,188,196,196,196,196,196,196,196,196,196,196,196,196,196,196,196,196,196,196,196,196,196,196,196,196,196,196,196,196,217);

}

void menuPrinteadoColores()
{
    int opciones=0;
    printf("%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c\n",201,205,205,205,205,205,205,205,205,205,205,205,205,205,205,205,205,205,205,205,205,205,205,205,205,205,205,205,205,205,205,205,205,205,205,205,205,205,205,205,205,205,205,205,205,205,205,205,205,205,205,205,205,205,205,205,205,205,205,205,205,205,205,205,205,205,205,205,205,205,205,205,205,205,205,205,205,205,205,205,205,205,187);
    printf("%cBIENVENIDOS AL CAMBIO DE COLORES DE LETRAS PARA MEJOR VISIBILIDAD DEL PROGRAMA   %c\n",186,186);
    printf("%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c\n",200,205,205,205,205,205,205,205,205,205,205,205,205,205,205,205,205,205,205,205,205,205,205,205,205,205,205,205,205,205,205,205,205,205,205,205,205,205,205,205,205,205,205,205,205,205,205,205,205,205,205,205,205,205,205,205,205,205,205,205,205,205,205,205,205,205,205,205,205,205,205,205,205,205,205,205,205,205,205,205,205,205,188);
    SetConsoleTextAttribute(GetStdHandle(STD_OUTPUT_HANDLE), 129);
    printf("%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c\n",201,205,187,196,196,196,196,196,196,196,196,196,196,196,196,196,196,196,196,196,196,196,196,196,196,196,196,196,196,196,196,196,196,196,196,196,196,196,196,191);
    printf("%c0%c  FONDO GRIS & LETRA AZUL           %c\n",186,186,179);
    printf("%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c\n",200,205,188,196,196,196,196,196,196,196,196,196,196,196,196,196,196,196,196,196,196,196,196,196,196,196,196,196,196,196,196,196,196,196,196,196,196,196,196,217);
    SetConsoleTextAttribute(GetStdHandle(STD_OUTPUT_HANDLE), 9);
    printf("%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c\n",201,205,187,196,196,196,196,196,196,196,196,196,196,196,196,196,196,196,196,196,196,196,196,196,196,196,196,196,196,196,196,196,196,196,196,196,196,196,196,191);
    printf("%c1%c  FONDO NEGRO & LETRA AZUL          %c\n",186,186,179);
    printf("%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c\n",200,205,188,196,196,196,196,196,196,196,196,196,196,196,196,196,196,196,196,196,196,196,196,196,196,196,196,196,196,196,196,196,196,196,196,196,196,196,196,217);
    SetConsoleTextAttribute(GetStdHandle(STD_OUTPUT_HANDLE), 132);
    printf("%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c\n",201,205,187,196,196,196,196,196,196,196,196,196,196,196,196,196,196,196,196,196,196,196,196,196,196,196,196,196,196,196,196,196,196,196,196,196,196,196,196,191);
    printf("%c2%c  FONDO GRIS & LETRA ROJA           %c\n",186,186,179);
    printf("%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c\n",200,205,188,196,196,196,196,196,196,196,196,196,196,196,196,196,196,196,196,196,196,196,196,196,196,196,196,196,196,196,196,196,196,196,196,196,196,196,196,217);
    SetConsoleTextAttribute(GetStdHandle(STD_OUTPUT_HANDLE), 12);
    printf("%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c\n",201,205,187,196,196,196,196,196,196,196,196,196,196,196,196,196,196,196,196,196,196,196,196,196,196,196,196,196,196,196,196,196,196,196,196,196,196,196,196,191);
    printf("%c3%c  FONDO NEGRO & LETRA ROJA          %c\n",186,186,179);
    printf("%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c\n",200,205,188,196,196,196,196,196,196,196,196,196,196,196,196,196,196,196,196,196,196,196,196,196,196,196,196,196,196,196,196,196,196,196,196,196,196,196,196,217);
    SetConsoleTextAttribute(GetStdHandle(STD_OUTPUT_HANDLE), 142);
    printf("%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c\n",201,205,187,196,196,196,196,196,196,196,196,196,196,196,196,196,196,196,196,196,196,196,196,196,196,196,196,196,196,196,196,196,196,196,196,196,196,196,196,191);
    printf("%c4%c  FONDO GRIS & LETRA AMARILLA       %c\n",186,186,179);
    printf("%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c\n",200,205,188,196,196,196,196,196,196,196,196,196,196,196,196,196,196,196,196,196,196,196,196,196,196,196,196,196,196,196,196,196,196,196,196,196,196,196,196,217);
    SetConsoleTextAttribute(GetStdHandle(STD_OUTPUT_HANDLE), 14);
    printf("%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c\n",201,205,187,196,196,196,196,196,196,196,196,196,196,196,196,196,196,196,196,196,196,196,196,196,196,196,196,196,196,196,196,196,196,196,196,196,196,196,196,191);
    printf("%c5%c  FONDO NEGRO & LETRA AMARILLA      %c\n",186,186,179);
    printf("%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c\n",200,205,188,196,196,196,196,196,196,196,196,196,196,196,196,196,196,196,196,196,196,196,196,196,196,196,196,196,196,196,196,196,196,196,196,196,196,196,196,217);
    SetConsoleTextAttribute(GetStdHandle(STD_OUTPUT_HANDLE), 138);
    printf("%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c\n",201,205,187,196,196,196,196,196,196,196,196,196,196,196,196,196,196,196,196,196,196,196,196,196,196,196,196,196,196,196,196,196,196,196,196,196,196,196,196,191);
    printf("%c6%c  FONDO GRIS & LETRA VERDE          %c\n",186,186,179);
    printf("%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c\n",200,205,188,196,196,196,196,196,196,196,196,196,196,196,196,196,196,196,196,196,196,196,196,196,196,196,196,196,196,196,196,196,196,196,196,196,196,196,196,217);
    SetConsoleTextAttribute(GetStdHandle(STD_OUTPUT_HANDLE), 2);
    printf("%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c\n",201,205,187,196,196,196,196,196,196,196,196,196,196,196,196,196,196,196,196,196,196,196,196,196,196,196,196,196,196,196,196,196,196,196,196,196,196,196,196,191);
    printf("%c7%c  FONDO NEGRO & LETRAS VERDE        %c\n",186,186,179);
    printf("%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c\n",200,205,188,196,196,196,196,196,196,196,196,196,196,196,196,196,196,196,196,196,196,196,196,196,196,196,196,196,196,196,196,196,196,196,196,196,196,196,196,217);
    SetConsoleTextAttribute(GetStdHandle(STD_OUTPUT_HANDLE), 133);
    printf("%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c\n",201,205,187,196,196,196,196,196,196,196,196,196,196,196,196,196,196,196,196,196,196,196,196,196,196,196,196,196,196,196,196,196,196,196,196,196,196,196,196,191);
    printf("%c8%c  FONDO GRIS & LETRA PURPURA        %c\n",186,186,179);
    printf("%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c\n",200,205,188,196,196,196,196,196,196,196,196,196,196,196,196,196,196,196,196,196,196,196,196,196,196,196,196,196,196,196,196,196,196,196,196,196,196,196,196,217);
    SetConsoleTextAttribute(GetStdHandle(STD_OUTPUT_HANDLE), 5);
    printf("%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c\n",201,205,187,196,196,196,196,196,196,196,196,196,196,196,196,196,196,196,196,196,196,196,196,196,196,196,196,196,196,196,196,196,196,196,196,196,196,196,196,191);
    printf("%c9%c  FONDO NEGRO & LETRA PURPURA       %c\n",186,186,179);
    printf("%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c\n",200,205,188,196,196,196,196,196,196,196,196,196,196,196,196,196,196,196,196,196,196,196,196,196,196,196,196,196,196,196,196,196,196,196,196,196,196,196,196,217);
    SetConsoleTextAttribute(GetStdHandle(STD_OUTPUT_HANDLE), 7);
    printf("\n");
    printf("%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c\n",201,205,205,187,196,196,196,196,196,196,196,196,196,196,196,196,196,196,196,196,196,196,196,196,196,196,196,196,196,196,196,196,196,196,196,196,196,196,196,196,191);
    printf("%c10%c VOLVER AL VALOR PREDETERMINADO     %c\n",186,186,179);
    printf("%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c\n",200,205,205,188,196,196,196,196,196,196,196,196,196,196,196,196,196,196,196,196,196,196,196,196,196,196,196,196,196,196,196,196,196,196,196,196,196,196,196,196,217);
    printf("\nSu opci%cn: ",162);
    scanf("%d",&opciones);
    switch (opciones)
    {
    case 0:
        system("color 81");
        break;
    case 1:
        system("color 09");
        break;
    case 2:
        system("color 84");
        break;
    case 3:
        system("color 0C");
        break;
    case 4:
        system("color 8E");
        break;
    case 5:
        system("color 0E");
        break;
    case 6:
        system("color 8A");
        break;
    case 7:
        system("color 02");
        break;
    case 8:
        system("color 85");
        break;
    case 9:
        system("color 05");
        break;
    case 10:
        system("color 07");
        break;
    }
}

void EfectoCargaMenu()
{
    int i = 8;

    while(i < 101)
    {
        gotoxy(30,22);
        puts("*Cargando su menu, por favor aguarde*\n");
        gotoxy(i-1,24);
        putchar(255);
        gotoxy(i,24);
        printf(" %d %% \n", i);
        gotoxy(i,25);
        putchar(219);
        Sleep(10);
        i++;
    }
}

void formatoFecha()
{
    char buf[MAX_BUF];
    time_t seconds = time(NULL);
    struct tm *now = localtime(&seconds);

    (void) printf("%s, %s %d, %d\n", dias[now->tm_wday], meses[now->tm_mon], now->tm_mday, now->tm_year + 1900);
    (void) strftime(buf, MAX_BUF, "%A, %B %e, %Y", now);
    (void) printf("%s\n", buf);
    return EXIT_SUCCESS;
}
