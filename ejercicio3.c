#include <stdio.h>
#include <stdlib.h>

#define N 10

void leeArreglo(int arr[N]);
int buscaMayor(int arr[N], int *p);

int main()
{
    int arreglo[N], mayor, pos;

    leeArreglo(arreglo);  //Parametros reales
    mayor = buscaMayor(arreglo, &pos);

    printf("El numero mayor es: %d\n", mayor);
    printf("Se encuentra en la posicion: %d\n", pos);

    return 0;
}

int buscaMayor(int arr[N], int *p)
{
    int i;
    int m = arr[0];

    for(i=0; i<N; i++)
    {
        if(arr[i] > m)
        {
            m = arr[i];
            *p = i;
        }

    }
    return m;
}

void leeArreglo(int arr[N])  //Parametros formales
{
    int i;

    for(i=0; i<N; i++)
    {
        printf("Arreglo[%d]: ", i);
        scanf("%d", &arr[i]);
    }
}
