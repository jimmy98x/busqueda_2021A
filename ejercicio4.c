#include <stdio.h>
#include <stdlib.h>

#define N 3
#define M 3

void leeArreglo(int arr[N][M]);
int buscaMenor(int arr[N][M], int *r, int *c);

int main()
{
    int arreglo[N][M], menor[M], ren, col, i;
    leeArreglo(arreglo);  //Parametros reales
    menor[M] = buscaMenor(arreglo, &ren, &col);

    for(i=0; i<N; i++)
    {
        printf("El numero menor del renglon %d es: %d\n", i, menor[i]);
        printf("Se encuentra en la posicion: [%d],[%d]\n", ren, col);

    }

    return 0;
}

int buscaMenor(int arr[N][M], int *r, int *c)
{
    int i, j;
    int menor[0];

    for(i=0; i<N; i++)
    {
        for(j=0; j<M; i++)
        {
            if(arr[i][j] < menor)
            {
                 menor[i] = arr[i][j];
                 *r = i;
                 *c = j;
            }
        }
        return menor[i];

    }
}

void leeArreglo(int arr[N][M])  //Parametros formales
{
    int i, j;

    for(i=0; i<N; i++)
    {
        for(j=0; j<M; j++)
        {
            printf("Arreglo[%d][%d]: ", i,j);
            scanf("%d", &arr[i][j]);
        }

    }
}
