#include <iostream>
#include <stdlib.h> //FUNCIONA NEW Y DELETE
#include "binaria.h"
#include "ordenamiento.h"
using namespace std;

int main() 
{
    int elemento;
    int numeros[7] = {1, 24, 56, 5, 80, 40, 46 };  

    
    // ORDENANDO EL ARREGLO CON EL METODO QUICKSORT
    quickSort(numeros, 0, 6);

    cout << "Los numeros ordenados son: ";
    for (int i = 0; i < 7; ++i) {
        cout << numeros[i] << " ";
    }
    cout << endl;
    
    //IMPLEMENTANDO LA BUSQUEDA BINARIA
    cout<<"Ingrese el elemento a buscar: ";
    cin >> elemento;

    int resultado = busquedaBinaria(numeros, 0, 5, elemento);

    if (resultado != -1) {
        cout << "Elemento encontrado en el indice: " << resultado << endl;
    } else {
        cout << "Elemento no encontrado en el arreglo." << endl;
    }

    return 0;
}
