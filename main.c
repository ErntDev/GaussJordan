/*
Elaborado por  :Ernesto G.M.
Carrera        :Ingeniería en Tecnologías Computacionales
*/
#include <stdio.h>
#include <stdlib.h>
#include "funciones/funciones.h"

int main()
{
    double **M;    //Guardar los coeficientes del sistema de ecuaciones
    int i,j,n;

    puts("Programa para resolver un sistema de ecuaciones algebraicas lineales simultaneas");
    puts("\t\t   por el metodo de Gauss-Jordan");

    do
    {
        printf("\nNumero de ecuaciones [2-10]: ");
        scanf("%d",&n);
    } while (n<2 || n>10);

    M=(double**)calloc(n,sizeof(double*));

    for (i=0;i<n;i++)
        M[i]=(double*)calloc(n+1,sizeof(double));

    ingresarCoeficientes(M,n);
    mostrarSistemaEcuaciones(M,n);
    gaussJordan(M,n);

    puts("\n\n\tMatriz Identidad");
    for (i=0;i<n;i++)
    {
        printf("\t\t|");
        for(j=0;j<=n;j++)
            printf("%5g%c",M[i][j],j==n-1?'|':0);

        printf("|\n");
    }

    puts("\n\tRaices del sistema de ecuaciones: ");
    for (i=0;i<n;i++)
    {
        for(j=0;j<=n;j++)
        {
            if (M[i][j]!=0 && M[i][j]!=1)
                printf("\tX%d = %lf\n",i+1,M[i][j]);
        }
    }


    return 0;
}
