#ifndef LISTAENLAZADA_H_INCLUDED
#define LISTAENLAZADA_H_INCLUDED
#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#include "peliculas.h"

typedef struct
{
    stPelicula p;
    struct nodoListaPelicula * sig;
} nodoListaPelicula;

///DECLARACION DE FUNCIONES:

///FUNCIONES BASICAS PARA EL MANEJO DE LISTAS:
nodoListaPelicula * inicLista();
nodoListaPelicula * crearNodo(stPelicula p);
nodoListaPelicula * buscarNodo(int id, nodoListaPelicula * lista);
nodoListaPelicula * borrarNodo(int id, nodoListaPelicula * lista);
nodoListaPelicula * agregarPpio(nodoListaPelicula * lista, nodoListaPelicula * nuevoNodo);
nodoListaPelicula * buscarUltimo(nodoListaPelicula * lista);
nodoListaPelicula * agregarFinal(nodoListaPelicula * lista, nodoListaPelicula* nuevoNodo);
nodoListaPelicula * agregarEnOrden(nodoListaPelicula * lista, nodoListaPelicula * nuevoNodo);
nodoListaPelicula * borrarTodaLaLista(nodoListaPelicula * lista);
void mostrarNodo(nodoListaPelicula * aux);
void recorrerYmostrar(nodoListaPelicula * lista);
nodoListaPelicula * eliminaUltimoNodo(nodoListaPelicula * lista);
nodoListaPelicula * eliminaPrimerNodo(nodoListaPelicula * lista);
int contarNodosLista(nodoListaPelicula *lista);

#endif // LISTAENLAZADA_H_INCLUDED
