#include <stdio.h>
#include <stdlib.h>

#define N 10

void leeArreglo(int arr[N]);
int pedirNumeroBuscar();
int buscaArreglo(int arr[N], int numero);

int main()
{
    int arreglo[N];
    int numeroBuscar;
    int encontro;

    leeArreglo(arreglo);  //Parametros reales
    numeroBuscar = pedirNumeroBuscar();

    encontro = buscaArreglo(arreglo, numeroBuscar);
    if(encontro != -1)
        printf("Encontro el numero en la posicion %d\n", encontro);
    else
        printf("El numero no existe dentro del arreglo");

    return 0;
}

int buscaArreglo(int arr[N], int numero)
{
    int i, pos = -1;

    for(i=0; i<N && pos == -1; i++)
    {
        if(arr[i]==numero)
            pos = i;
    }
    return pos;
}

int pedirNumeroBuscar()
{
    int numeroUsuario;

    printf("Dame el numero a buscar: ");
    scanf("%d", &numeroUsuario);

    return numeroUsuario;
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
