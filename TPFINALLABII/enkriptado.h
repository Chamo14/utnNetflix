#include <time.h>

void pasar_pswd_matriz (int dos, int cinco, char contrasenia[],  int matriz_contrasenia[dos][cinco]);
///convierte en matriz de enteros el array de caracteres (contraseña)
void mostrar_matriz (int fila, int columna, int matrix[fila][columna]);
///muestra por pantalla cualquier matriz
int calcular_determinante (int fila, int columna, int matrix[fila][columna]);
///calcula el determinante para validar la inversion del archivo
void encriptar_matriz (int dos, int cinco,int matriz_encriptadora[dos][dos], int matriz_contrasenia[dos][cinco], int matriz_encriptada[dos][cinco]);
///multiplica la matriz contrasenia por la matriz testigo de cada usuario
void crear_matriz_encriptadora (int dos, int matriz_encriptadora[dos][dos]);
///con una semilla, crea una matriz testigo random inversible
void invertir_matriz (int dos, int cinco,int matriz_encriptadora [dos][dos]);
///realiza operacion para invertir matriz

void desencriptar_matriz (int dos, int cinco,int matriz_encriptadora[dos][dos], int matriz_encriptada [dos][cinco], int matriz_desencriptada[dos][cinco]);
///con la matriz testigo y la matriz encriptada, calcula la inversa y desencripta la matriz contrasenia de cada usuario
void multiplicar_matrices (int dos, int cinco,int matriz_multiplo1[dos][dos], int matriz_multiplo2 [dos][cinco], int matriz_resultado[dos][cinco]);
///realiza la operacion de multiplicar matrices entre una de 2x2 y una de 2x5 (el resultado es una de 2x5)
int calcular_compatibilidad (int dos, int cinco, int matriz_encriptada[dos][cinco], int matriz_encriptadora [dos][dos], char contrasenia_ingreasda[]);
///desencripta la matriz contrasenia, y la compara con una contrasenia ingresada convertida en matriz, retorna flag 1 si es valido
void cpyMatr (int filas, int columnas , int destino[filas][columnas], int origen [filas][columnas]);
///copia una matriz en otra, para poder trabajar y guardarlas en auxiliares
