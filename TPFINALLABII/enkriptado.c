#include "enkriptado.h"

void mostrar_matriz (int fila, int columna, int matrix[fila][columna])
{
    int i;
    int u;
    int aux;
    for (i=0; i<fila; i++)
    {
        for (u=0; u<columna; u++)
        {
            aux=matrix[i][u];
            printf("[%d] ", matrix[i][u]);

        }
        printf("\n");

    }

}

void multiplicar_matrices (int dos, int cinco,int matriz_multiplo1[dos][dos], int matriz_multiplo2 [dos][cinco], int matriz_resultado[dos][cinco])
{

    int i=0;
    int u;
    int q=1;
    for (u=0; u<cinco; u++)
    {
        matriz_resultado[i][u]=(matriz_multiplo1[i][i]*matriz_multiplo2[i][u])+(matriz_multiplo1[i][q]*matriz_multiplo2[q][u]);

        matriz_resultado[q][u]=(matriz_multiplo1[q][i]*matriz_multiplo2[i][u])+(matriz_multiplo1[q][q]*matriz_multiplo2[q][u]);
    }

}


void pasar_pswd_matriz (int dos, int cinco, char contrasenia[],  int matriz_contrasenia[dos][cinco])
{
    int j=0;
    int i;
    int u;


    for (i=0; i<2; i++)
    {
        for (u=0; u<5; u++)
        {
            matriz_contrasenia[i][u]=(int)contrasenia[j];


            j++;

        }
    }

}

int calcular_determinante (int fila, int columna, int matrix[fila][columna])
{
    int determinante=0;
    determinante =((matrix[0][0]* matrix[1][1]) - (matrix[1][0]*matrix[0][1]));

    return determinante;

}

void encriptar_matriz (int dos, int cinco,int matriz_encriptadora[dos][dos], int matriz_contrasenia[dos][cinco], int matriz_encriptada[dos][cinco])
{
    multiplicar_matrices(2, 5, matriz_encriptadora, matriz_contrasenia, matriz_encriptada);
}

void desencriptar_matriz (int dos, int cinco,int matriz_encriptadora[dos][dos], int matriz_encriptada [dos][cinco], int matriz_desencriptada[dos][cinco])
{
    int auxEncriptadora[2][2];
    cpyMatr(2, 2, auxEncriptadora, matriz_encriptadora);
    invertir_matriz(2, 2, auxEncriptadora);

    multiplicar_matrices(2, 5, auxEncriptadora, matriz_encriptada, matriz_desencriptada);
}

void crear_matriz_encriptadora (int dos,int matriz_encriptadora[dos][dos])
{
    srand(time(NULL));

    do
    {
        int a= rand()%100;

        matriz_encriptadora[0][0]=a;
        matriz_encriptadora[0][1]=a-1;
        matriz_encriptadora[1][0]=a+1;
        matriz_encriptadora[1][1]=a;
    }
    while (calcular_determinante(2, 2, matriz_encriptadora)==0);

}

void invertir_matriz (int dos, int cinco,int matriz_encriptadora [dos][dos])
{
    int determinante=calcular_determinante(2, 2, matriz_encriptadora);
    int m00=matriz_encriptadora[0][0];
    int m01=matriz_encriptadora[0][1];

    matriz_encriptadora[0][0]=(matriz_encriptadora[1][1])/determinante;
    matriz_encriptadora[0][1]=-1*(m01)/determinante;
    matriz_encriptadora[1][0]=-1*(matriz_encriptadora[1][0])/determinante;
    matriz_encriptadora[1][1]=(m00)/determinante;

}

int calcular_compatibilidad (int dos, int cinco, int matriz_encriptada[dos][cinco], int matriz_encriptadora [dos][dos], char contrasenia_ingreasda[])
{
    int i;
    int u;
    int j=0;
    int flag=0;
    int matriz_pswd_ingresada [2][5];
    int matriz_desencriptada[2][5];
    pasar_pswd_matriz(2, 5, contrasenia_ingreasda, matriz_pswd_ingresada);
    ///crea la matriz de la contrasenia ingresada
    desencriptar_matriz(2, 5, matriz_encriptadora, matriz_encriptada, matriz_desencriptada);
    ///desencripta la matriz de la contrasenia del usuario
    for (i=0; i<dos; i++)
    {
        for (u=0; u<cinco; u++)
        {
            if (matriz_desencriptada[i][u]==matriz_pswd_ingresada[i][u])
                j++;
        }
    }
    if (j==10)
    {
        flag=1;
    }
    return flag;
}

void cpyMatr (int filas, int columnas, int destino[filas][columnas], int origen [filas][columnas])
{
    int i, u;
    for (i=0; i<filas; i++)
    {
        for (u=0; u<columnas; u++)
        {
            destino[i][u]=origen[i][u];
        }

    }
}
