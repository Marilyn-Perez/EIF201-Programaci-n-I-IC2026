#include <iostream>
#include "estadisticas.h"

using  namespace std;

int main()
{
    int Num[MAX_SIZE];

    cout << "Ingrese 10 numeros enteros: " << endl;
    for (int i = 0; i < MAX_SIZE; i++) {
        cout << "Numero " << i + 1 << " : ";
        cin >> Num[i];
    }

    cout << "El numero de mayor valor es: " << valorMayor(Num) << endl;

    cout << "El numero de menor valor es: " << valorMenor(Num) << endl;

    cout << "La suma de todos los elementos es de: " << sumaElementos(Num) << endl;

    cout << "El promedio es de: " << promedio(Num) << endl;
}