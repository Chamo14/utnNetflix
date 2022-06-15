#ifndef PELICULAS_H_INCLUDED
#define PELICULAS_H_INCLUDED
#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#include "usuarios.h"
//-----------------------------------------------------
//ESTRUCTURAS DE PELICULAS
//-----------------------------------------------------
typedef struct
{
    int idPelicula;
    char nombrePelicula[30];
    char director[20];
    char genero[20];
    char pais[20];
    int anio;
    int valoracion;
    int pm;
    int eliminado;
} stPelicula;


//-#################################################
//-                PARTE PELICULAS
//-#################################################
void CargaPeliculaNuevo (char PathVideo[], stPelicula p);
int contar(char PatchVideo[]);
int contartodo(char PatchVideo[]);
void buscarXnombre(char PatchVideo[]);
int buscarPos(stPelicula peli[],char abuscar[],int validos);
void mostrarunapeliculaVERT(char ArchivoPeliculas[],int pos);
void EliminacionLogica(stPelicula pelis[],int pos);
void AltaLogica(stPelicula pelis[],int pos);
void AltaBaja();
void modificar(char PatchVideo[],stPelicula pelis[],int cant);
int DeArchivoToArrglo(char PatchVideo[],stPelicula pelis[],int cant);
int buscarPosNum(stPelicula pelis[],int validos,int num);
void modificacion(stPelicula pelis[],int pos);
void mostrarpeliculas(char PatchVideo[]);
void mostrarunapeliculaHOR(stPelicula a);
void submenuMostrarPelisPrinteado();
void printfmodbaja();
void SubmenuModificacionPelis();
void cargarPeliculasaEstructura(char PatchVideo[],stPelicula Peliculas[]);
void actualizar(char PatchVideo[],stPelicula pelis[],int validos);
void OrdenarTitulosXsel(stPelicula pelis[],int validos);
int EncontrarMenorTitulo(stPelicula pelis[],int validos,int pos);
void ordenarGeneroXins(stPelicula pelis[],int validos);
void insertar(stPelicula pelis[],int u,stPelicula dato);
int cantidadrepetidasVistas(stUsuario usuario[]);
void mostrarArreglo(stPelicula pelis[],int pos);
void ordenarIDXsel(stPelicula pelis[],int validos);
int encontrarMenorId(stPelicula pelis[],int validos,int pos);


#endif // PELICULAS_H_INCLUDED
