#ifndef TDAARREGLO_H_INCLUDED
#define TDAARREGLO_H_INCLUDED
#include <stdlib.h>
#include <stdio.h>
#include "usuarios.h"
#include "listaEnlazada.h"
#include "ArbolesTDA.h"

typedef struct
{
    stUsuario usr;
    nodoListaPelicula * listaPelis;
} arregloUsuarios;

typedef struct
{
    int idAutoincremental;
    int idUsuario;
    int idPelicula;
} stPelisVistas;

typedef struct
{
    char palabra[11];
} AuxiliarPassword;

int redimensionarADL(arregloUsuarios *adl,int validos);
void guardarEnADL(arregloUsuarios adl[],int validos,stUsuario dato);
void cargarADL (arregloUsuarios adl[],int validos,char path[]);
int altaUsuarioaArreglo(arregloUsuarios adl[], int validos, char pathUser[]);
int buscarUsuarioxNombreADL(arregloUsuarios adl[],char dato[],int dimension);
int buscarXIdUsuario(arregloUsuarios adl[], int dato, int validos);
void mostrarUsuarios (arregloUsuarios adl[], int validos);
void limpiarArregloDeListas(arregloUsuarios adl[], int validos);
void viendopeli(nodoArbolPelicula *arbol);
void agregarPeliculaToUsuario(arregloUsuarios adl[],int pos,int validos,nodoArbolPelicula *arbol);
void modificacionUsuario(arregloUsuarios adl[], int pos, int subopcion, int admin, nodoArbolPelicula * arbol, char pathUser[], char pathVideo[], int validos);
void mostrarUsuario(arregloUsuarios adl[], int pos);
void guardarADLenArchivo(arregloUsuarios adl[],int dimension,char pathUser[]);
void pasarAdlEnArchi(arregloUsuarios adl[],int dimension,FILE *archivo);
AuxiliarPassword showPswdFile (arregloUsuarios adl[], int pos);

///PARTE DE PELICULAS VISTAS

int contarPelisVistas(char path[]);//OK
void pasarPeliculasVistasADL(char path[],arregloUsuarios adl[],nodoArbolPelicula *arbol,int validos);//OK
void pasarADLaPelisVistas(char path[],arregloUsuarios adl[],int dimension);//OK
void printearRegistro(char path[]);///revisar
void guardarPeliVista(stPelisVistas peli,int validos,int idUsuario, int idPelicula);//OK
#endif // TDAARREGLO_H_INCLUDED
