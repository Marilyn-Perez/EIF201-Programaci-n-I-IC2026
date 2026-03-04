#include "estadisticas.h"

int valorMayor(int arr[]) {
	int mayor = arr[0];
	for (int i = 1; i < MAX_SIZE; i++) {
		if (arr[i] > mayor) {
			mayor = arr[i];
		}
		
	} return mayor;
}
int valorMenor(int arr[]) {
	int menor = arr[0];
	for (int i = 1; i < MAX_SIZE; i++) {
		if (arr[i] < menor) {
			menor = arr[i];
		}
	} return menor;
}
int sumaElementos(int arr[]) {
	int suma = 0;
	for (int i = 0; i < MAX_SIZE; i++) {
		suma += arr[i] ;
	}
	return suma;
}
double promedio(int arr[]) {
	return (double)sumaElementos(arr) / MAX_SIZE;
}