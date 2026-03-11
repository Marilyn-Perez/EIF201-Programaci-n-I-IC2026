#include <iostream>
#include "Control.h"

using namespace std;

int main()
{
    int cantidad;
    cout << "Cantidad de paquetes: ";
    cin >> cantidad;

    double* pesos = crearRegistro(cantidad);
    ingresarPesos(pesos, cantidad);

    double total = calcularPesoTotal(pesos, cantidad);
    double promedio = total / cantidad;

    cout << "Peso total: " << total << endl;
    cout << "Promedio de peso: " << promedio << endl;

    double limite;
    cout << "Ingrese el limite de peso permitido: " << endl;
    cin >> limite;

    int sobreLimite = contarSobreLimite(pesos, cantidad, limite);

    cout << "Paquetes que superan el limite: " << sobreLimite << endl;


    const double* mayor = buscarMasPesado(pesos, cantidad);

    cout << "El paquete de mayor peso es de: " << *mayor << " kg" << endl;

    delete[] pesos;

    return 0;
}