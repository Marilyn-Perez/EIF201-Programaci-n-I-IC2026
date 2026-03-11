<<<<<<< HEAD
#include <iostream>
#include "Inversion.h"

using namespace std;

void leerArreglo(int arr[], int Tam) {
    for (int i = 0; i < Tam; i++)
    {
        cout << "Ingrese el elemento [" << i << "]: ";
        cin >> arr[i];
    }
}

void mostrarArreglo(int arr[], int Tam)
{
    for (int i = 0; i < Tam; i++)
    {
        cout << arr[i] << " ";
    }
    cout << endl;
}

void invertirArreglo(int original[], int invertido[], int Tam)
{
    for (int i = 0; i < Tam; i++)
    {
        invertido[i] = original[Tam - 1 - i];
    }
=======
#include <iostream>
#include "Inversion.h"

using namespace std;

void leerArreglo(int arr[], int Tam) {
    for (int i = 0; i < Tam; i++)
    {
        cout << "Ingrese el elemento [" << i << "]: ";
        cin >> arr[i];
    }
}

void mostrarArreglo(int arr[], int Tam)
{
    for (int i = 0; i < Tam; i++)
    {
        cout << arr[i] << " ";
    }
    cout << endl;
}

void invertirArreglo(int original[], int invertido[], int Tam)
{
    for (int i = 0; i < Tam; i++)
    {
        invertido[i] = original[Tam - 1 - i];
    }
>>>>>>> f12428701991a65845232044ac4d8a922f9f1765
}