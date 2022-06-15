#ifndef ARBOLESTDA_H_INCLUDED
#define ARBOLESTDA_H_INCLUDED
#include <stdio.h>
#include <string.h>
#include <stdlib.h>
#include "peliculas.h"
//TDA ARBOLES
//PROTOTIPOS DE FUNCIONES BASICAS DEL TDA
//ESTRUCTURA ARBOL
typedef struct
{
    stPelicula p;
    struct nodoArbolPelicula * izq;
    struct nodoArbolPelicula * der;
}nodoArbolPelicula;

typedef struct
{
    stPelicula p;
    int flag;
} peliculaAux;



nodoArbolPelicula * inicArbol();
nodoArbolPelicula * crearNodoArbol(stPelicula peli);
nodoArbolPelicula * buscarEnArbol(nodoArbolPelicula *arbol,int id);
nodoArbolPelicula * insertarNodoArbol(nodoArbolPelicula*arbol,stPelicula peli);
void printeoArbol(nodoArbolPelicula *arbol);
void preorder(nodoArbolPelicula *arbol);
void inorder(nodoArbolPelicula *arbol);
void postorder(nodoArbolPelicula *arbol);
nodoArbolPelicula * insertarRaizArchitoPeli(nodoArbolPelicula *arbol,char patch[]);
nodoArbolPelicula * pasarArchivoaArbol(nodoArbolPelicula *arbol,char patch[]);
nodoArbolPelicula * desordenarArreglo(char path[],stPelicula arreglo[],int validos,nodoArbolPelicula *arbol);
void pasarArbolToArchivo(nodoArbolPelicula *arbol,FILE *archivo);
void actualizarPeliculasDeArbol(nodoArbolPelicula *arbol,char path[]);
int buscarxIdEnArbol(nodoArbolPelicula *arbol);
void mostrarArbolCompleto(nodoArbolPelicula *arbol,int cont);//funcion auxiliar que se uso para la verificacion del arbol en su carga
nodoArbolPelicula * borrarNodoArbol (nodoArbolPelicula * arbol, int dato);
nodoArbolPelicula * NMD (nodoArbolPelicula * arbol);
nodoArbolPelicula * NMI (nodoArbolPelicula * arbol);
int contarNodosArbol(nodoArbolPelicula *arbol);//funcion auxiliar que se uso para la verificacion del arbol en su carga
nodoArbolPelicula * modificarCampoenArbol(nodoArbolPelicula *arbol,char pathvideo[]);
void ListadoSimplePeliculasInOrder(nodoArbolPelicula * arbol);

#endif // ARBOLESTDA_H_INCLUDED

