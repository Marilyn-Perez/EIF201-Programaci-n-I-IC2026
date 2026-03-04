#include <iostream>
//#include <iomanip>
#include "operacion.h"

using namespace std;

void leerMatriz(int matriz[Filas][Cols])
{
    for (int i = 0; i < Filas; i++)
    {
        for (int j = 0; j < Cols; j++)
        {
            cout << "Ingrese un elemento [" << i << "][" << j << "]: ";
            cin >> matriz[i][j];
        }
    }
}

void imprimirMatriz(int matriz[Filas][Cols])
{
    cout << "La Matriz ingresada: " << endl;

    for (int i = 0; i < Filas; i++)
    {
        for (int j = 0; j < Cols; j++)
        {
            cout << matriz[i][j] << " ";
        }
        cout << endl;
    }
}

void sumaFilas(int matriz[Filas][Cols])
{
    for (int i = 0; i < Filas; i++)
    {
        int suma = 0;
        for (int j = 0; j < Cols; j++)
        {
            suma += matriz[i][j];
        }
        cout << "La suma de la fila es de:  " << i << ": " << suma << endl;
    }
}

void sumaColumnas(int matriz[Filas][Cols])
{
    for (int j = 0; j < Cols; j++)
    {
        int suma = 0;
        for (int i = 0; i < Filas; i++)
        {
            suma += matriz[i][j];
        }
        cout << "La suma de la columna es: " << j << ": " << suma << endl;
    }
}

void sumaDiagonal(int matriz[Filas][Cols])
{
    int suma = 0;
    for (int i = 0; i < Filas; i++)
    {
        suma += matriz[i][i];
    }

    cout << "La suma de la diagonal principal es de: " << suma << endl;
}