#include <stdio.h>
#include "funciones.h"

void ingresarCoeficientes(double *M[], int n)
{
    int i,j;

    puts("\n\tIngrese los coeficientes.");
    for (i=0;i<n;i++)
    {
        printf("\nEcuacion %d\n",i+1);
        for(j=0;j<n;j++) {
            printf("X%d: ",j+1);
            scanf("%lf",&M[i][j]);
        }
    }
    puts("\n\tIngrese cada uno de los terminos independientes.");

    for (i=0;i<n;i++)
    {
        printf("C%d: ",i+1);
        scanf("%lf",&M[i][n]);
    }
}
