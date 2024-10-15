#include<iostream>
#include "binaria.h"
using namespace std;

int busquedaBinaria(int arr[], int izquierda, int derecha, int x) 
{
    while (izquierda <= derecha) 
    {
        int mitad = izquierda + (derecha - izquierda) / 2;

        // Verifica si el elemento está en la mitad
        if (arr[mitad] == x)
            return mitad;

        // Si el elemento es mayor, se ignora la mitad izquierda
        if (arr[mitad] < x)
            izquierda = mitad + 1;

        // Si el elemento es menor, se ignora la mitad derecha
        else
            derecha = mitad - 1;
    }

    // El elemento no está presente
    return -1;
}

