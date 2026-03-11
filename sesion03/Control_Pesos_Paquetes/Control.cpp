#include<iostream>
#include "Control.h"

double* crearRegistro(int cantidad){
	double* pesos = new double[cantidad];
return pesos;
}

void ingresarPesos(double* pesos, int cantidad) {
	for (int i = 0; i < cantidad; i++) {
		std::cout << "Ingrese el peso del paquete " << i + 1 << "en Kg: " << std::endl;
		std::cin >> pesos[i];

	}
}

double calcularPesoTotal(const double* pesos, int cantidad) {
	double total = 0;
	for (int i = 0; i < cantidad; i++) {
		total += pesos[i];
	}
	return total;
}

int contarSobreLimite(const double* pesos, int cantidad, double limite) {
	int contador = 0;
	for (int i = 0; i < cantidad; i++) {
		if (pesos[i] > limite) {
			contador++;
		}
	}
	return contador;
}

const double* buscarMasPesado(const double* pesos, int cantidad) {
	int mayor = 0;
	for (int i = 1; i < cantidad; i++) {
		if (pesos[i] > pesos[mayor]) {
			mayor = i;
		}
	}
	return &pesos[mayor];
}