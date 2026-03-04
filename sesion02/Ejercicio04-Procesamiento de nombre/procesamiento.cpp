#include <iostream>
#include "procesamiento.h"

using namespace std;

string pedirNombre() {
    string nombre;
    cout << "Ingrese su nombre completo: " ;
    cin.ignore();
    getline(cin, nombre);
    return nombre;
}

string obtenerPrimerNombre(string nombreCompleto) {
    string primerNombre = "";

    for (int i = 0; i < nombreCompleto.length(); i++) {
        if (nombreCompleto[i] == ' ') {
            break;
        }
        primerNombre += nombreCompleto[i];
    }

    return primerNombre;
}

string obtenerPrimerApellido(string nombreCompleto) {
    string primerApellido = "";
    int contadorEspacios = 0;

    for (int i = 0; i < nombreCompleto.length(); i++) {

        if (nombreCompleto[i] == ' ') {
            contadorEspacios++;
            continue;
        }

        if (contadorEspacios == 1) {
            primerApellido += nombreCompleto[i];
        }

        if (contadorEspacios == 2) {
            break;
        }
    }

    return primerApellido;
}

int contarVocales(string nombreCompleto) {
    int contador = 0;

    for (int i = 0; i < nombreCompleto.length(); i++) {
        char letra = nombreCompleto[i];

        if (letra == 'a' || letra == 'e' || letra == 'i' || letra == 'o' || letra == 'u' ||
            letra == 'A' || letra == 'E' || letra == 'I' || letra == 'O' || letra == 'U') {
            contador++;
        }
    }

    return contador;
}

string aMayusculas(string nombreCompleto) {

    for (int i = 0; i < nombreCompleto.length(); i++) {

        if (nombreCompleto[i] >= 'a' && nombreCompleto[i] <= 'z') {
            nombreCompleto[i] = nombreCompleto[i] - 32;
        }
    }

    return nombreCompleto;
}

int obtenerLongitud(string nombreCompleto) {
    return nombreCompleto.length();
}

string solicitarNombre()
{
    return string();
}

string obtenerPrimerNombre(const string& nombreCompleto)
{
    return string();
}

string obtenerPrimerApellido(const string& nombreCompleto)
{
    return string();
}

int contarVocales(const string& nombreCompleto)
{
    return 0;
}

string aMayusculas(const string& nombreCompleto)
{
    return string();
}

int obtenerLongitud(const string& nombreCompleto)
{
    return 0;
}
