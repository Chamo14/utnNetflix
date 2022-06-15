#ifndef USUARIOS_H_INCLUDED
#define USUARIOS_H_INCLUDED
#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#include <windows.h>

typedef struct
{
    int admin;
    int IdUsuario;
    char nombreUsuario[30];
    int pass[2][5];
    int testigo[2][2];
    int anioNacimiento;
    char genero;
    char pais[20];
    int peliculasVistas[30];
    int canVistas;
    int eliminado;
} stUsuario;


void cargaunusuario(char PatchUser[]);
int validacionUsuario(char PatchUser[],stUsuario Usuario,int validos);
void mostrarunUsuario(stUsuario Usuario[],int pos);
void mostrarUsuarioArchivo(char PatchUser[]);
void BajaUsuario(char PatchUser[],stUsuario Usuario[],int validos,int pos);
void CargaArchivosEstructura(char PatchUser[],stUsuario Usuario[],int validos);
int BuscarUsuarioxxID(stUsuario Usuarios[],int id,int validos);
int BuscarUsuarioxNombre(stUsuario Usuario[],int validos,char nombre[]);
int CantidadValida(char PatchUser[]);
void ActualizarArchivo(char PatchUser[],stUsuario Usuario[],int validos);
void cargaIDpelisausuario(stUsuario Usuario[],int pos,int pospeli);
void mostrarIDpelisausuario(stUsuario Usuario[],int pos);
void passW(char palabra[]);


#endif // USUARIOS_H_INCLUDED
