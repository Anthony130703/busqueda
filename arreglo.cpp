#include <iostream>
#include <stdlib.h> //FUNCIONA NEW Y DELETE
#include "binaria.h"
#include "ordenamiento.h"
using namespace std;

int main() 
{
    int n, elemento;
    cout << "Cuantos elementos deseas ingresar? ";
    cin >> n;

    int* numeros= new int[n];  

    cout << "Ingresa " << n << " numeros:\n";
    for (int i = 0; i < n; ++i) {
        cin >> numeros[i];
    }
    cout<<"El arreglo es: ";
     for (int i = 0; i < n; ++i) {
        cout << numeros[i] << " ";
    }
    cout << endl;

    // ORDENANDO EL ARREGLO CON EL METODO QUICKSORT
    quickSort(numeros, 0, n-1);

    cout << "Los numeros ordenados son: ";
    for (int i = 0; i < n; ++i) {
        cout << numeros[i] << " ";
    }
    cout << endl;
    
    //IMPLEMENTANDO LA BUSQUEDA BINARIA
    cout<<"Ingrese el elemento a buscar: ";
    cin >> elemento;

    int resultado = busquedaBinaria(numeros, 0, n - 1, elemento);

    if (resultado != -1) {
        cout << "Elemento encontrado en el indice: " << resultado << endl;
    } else {
        cout << "Elemento no encontrado en el arreglo." << endl;
    }

    return 0;
}
