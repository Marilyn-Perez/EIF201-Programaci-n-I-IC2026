#include <iostream>

using namespace std;

//Datos de prueba
//int datos[6] = {10, 30, 50, 20, 40, 60};

//Tarea A: imprima todos los elementos usando *(arr + i)
void imprimirTodo(int* arr, int n) {
        for (int i = 0; i < n; i++) {
            cout << *(arr + i) << " ";
        }
        cout << endl;
}


//Tarea B: retorne el valor maximo usando aritmetica de punteros
int encontrarMaximo(int* arr, int n) {
    int max = *arr;

    for (int i = 1; i < n; i++) {
        if (*(arr + i) > max) {
            max = *(arr + i);
        }
    }
    return max;
}

//Tarea C: invierta el arreglo in-place usando dos punteros, uno al inicio, otro al final
void invertir(int* arr, int n) {
    int* izq = arr;
    int* der = arr + (n - 1);

    while (izq < der) {
        int temp = *izq;
        *izq = *der;
        *der = temp;
        izq++;

    }


}

int main()
{
    int datos[6] = { 10, 30, 50, 20, 40, 60 };
    imprimirTodo(datos, 6); //esperando: 10, 30, 50, 20, 40, 60
    cout << encontrarMaximo(datos, 6) << endl; //esperando: 60
    invertir(datos, 6);
    imprimirTodo(datos, 6); //esperando 60, 40, 20, 50, 30, 10
    return 0;
}

