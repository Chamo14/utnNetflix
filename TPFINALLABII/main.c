#include <stdio.h>
#include <stdlib.h>
#include "menuPrincilal.h"
#include <time.h>

int main()
{
    SetConsoleTitle("UTN-etflix 2: Recargado");

    stUsuario Usuario[300];
    stPelicula peliculas[100];

    char pathUser[30]="Usuarios.dat";
    char pathPelisVistas[30]="PelisVistas.dat";
    char pathVideo[30]="Peliculas.dat";

    arregloUsuarios *adl;

    int total=CantidadValida(pathUser);
    cargarPeliculasaEstructura(pathVideo,peliculas);
    adl=(arregloUsuarios*)malloc(total*sizeof(arregloUsuarios));

    nodoArbolPelicula *arbol=inicArbol();
    arbol=pasarArchivoaArbol(arbol,pathVideo);
    cargarADL(adl,total,pathUser);
    //printearRegistro(pathPelisVistas);
    pasarPeliculasVistasADL(pathPelisVistas,adl,arbol,total);
  //  mostrarUsuarios(adl,total);
    menuPrincipal(adl, arbol, total, pathUser, pathVideo, pathPelisVistas);

    return 0;
}
