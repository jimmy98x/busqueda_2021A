#include <stdio.h>
#include <stdlib.h>

#define N 10

void leeArreglo(int arr[N]);
int buscaMenor(int arr[N], int *p);

int main()
{
    int arreglo[N], menor, pos;

    leeArreglo(arreglo);  //Parametros reales
    menor = buscaMenor(arreglo, &pos);

    printf("El numero menor es: %d\n", menor);
    printf("Se encuentra en la posicion: %d\n", pos);

    return 0;
}

int buscaMenor(int arr[N], int *p)
{
    int i;
    int menor = arr[0];

    for(i=0; i<N; i++)
    {
        if(arr[i] < menor)
        {
            menor = arr[i];
            *p = i;
        }

    }
    return menor;
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
