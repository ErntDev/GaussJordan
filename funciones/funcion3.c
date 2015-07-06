#include <stdio.h>
#include "funciones.h"

void gaussJordan(double *M[], int n)
{
    int i,j,k;
    int pivote=0;
    double a,coef;

    for (i=0;i<n;i++)
    {
        a=M[i][pivote];
        //Normalizar
        for (j=0;j<=n;j++)
            M[i][j]=M[i][j]/a;

        //Eliminar. Convertir ceros
        for (j=0;j<n;j++)
        {
            if (j==i)
                continue;
            coef=M[j][pivote];
            for (k=0;k<=n;k++)
                M[j][k]=M[j][k]-coef*M[i][k];
        }
        pivote++;
    }
}
