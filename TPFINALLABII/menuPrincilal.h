#ifndef MENUPRINCILAL_H_INCLUDED
#define MENUPRINCILAL_H_INCLUDED
#include <string.h>
#include <stdio.h>
#include <stdlib.h>
#include <conio.h>
#include <windows.h>
#include <time.h>
#include <ctype.h>
#include "gotoxy.h"
#include "usuarios.h"
#include "peliculas.h"
#include "listaEnlazada.h"
#include "ArbolesTDA.h"
#include "TDAARREGLO.h"
#include "peliculasVistas.h"
#define MAX_BUF 50
#define ESC 27


void menuPrinteadoPrincipal();
void menuPrincipal(arregloUsuarios adl[], nodoArbolPelicula * arbol, int validos, char pathUser[], char pathVideo[], char pathpelisVistas[]);
void menuPrinteadoUsuario(char usuario[]);
void menuUsuario(arregloUsuarios adl[], char usuario[], int validos, nodoArbolPelicula * arbol, char pathUser[], char pathVideo[], char pathpelisVistas[]);
void menuPrinteadoAdminPrincipal();
void menuAdminPrincipal (arregloUsuarios adl[],nodoArbolPelicula * arbol, char pathUser[], char pathVideo[], int validos, char pathpelisVistas[]);
void menuPrinteadoAdminUsuarios();
void menuAdminUsuarios (arregloUsuarios adl[], char pathUser[], int validos, nodoArbolPelicula * arbol, char pathVideo[],char pathpelisVistas[]);
void menuPrinteadoAdminPeliculas();
void menuAdminPeliculas (arregloUsuarios adl[],nodoArbolPelicula * arbol, char pathUser[], char pathVideo[], int validos, char pathpelisVistas[]);
void menuPrinteadoModificacionUsuario();
void menuPrinteadoModificacionPeliculas();
void menuPrinteadoColores();
void EfectoCargaMenu();
void formatoFecha();

#endif // MENUPRINCILAL_H_INCLUDED
