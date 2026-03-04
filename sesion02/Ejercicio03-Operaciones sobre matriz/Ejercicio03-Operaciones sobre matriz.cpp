#include <iostream>
#include "operacion.h"

using namespace std;

int main()
{
    int matriz[Filas][Cols];

    leerMatriz(matriz);

    imprimirMatriz(matriz);

    cout << endl;
    sumaFilas(matriz);
    sumaColumnas(matriz);
    sumaDiagonal(matriz);

    return 0;
}