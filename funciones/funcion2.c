#include <stdio.h>
#include "funciones.h"

void mostrarSistemaEcuaciones(double *M[], int n)
{
    int i,j;
    puts("\n\t\tSistema de ecuaciones: ");
    for (i=0;i<n;i++)
    {
        printf("\t\t\t");
        for(j=0;j<n;j++)
            printf("%c%gx%d\t",M[i][j]>0?'+':8,M[i][j],j+1);
        printf("= %g\n",M[i][n]);
    }

    puts("\n\t\tMatriz aumentada: ");
    for (i=0;i<n;i++)
    {
        printf("\t\t\t|");
        for(j=0;j<=n;j++)
            printf("%3g%c",M[i][j],j==n-1?'|':0);

        printf("|\n");
    }
}
