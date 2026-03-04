#include <iostream>
#include "Inversion.h"

using namespace std;

int main()
{
    int arreglo[TamanioMax];
    int arregloInvertido[TamanioMax];
    int tam;

    do
    {
        cout << "Ingrese el tamanio del arreglo (max 20): ";
        cin >> tam;
    } while (tam <= 0 || tam > TamanioMax);

    leerArreglo(arreglo, tam);

    invertirArreglo(arreglo, arregloInvertido, tam);

    cout << "Arreglo original: " << endl;
    mostrarArreglo(arreglo, tam);

    cout << "Arreglo invertido: ";
    mostrarArreglo(arregloInvertido, tam);

    return 0;
}

