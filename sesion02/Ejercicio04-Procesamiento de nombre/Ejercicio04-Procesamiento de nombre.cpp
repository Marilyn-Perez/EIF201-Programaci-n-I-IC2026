<<<<<<< HEAD
#include <iostream>
#include <string>
#include "procesamiento.h"

using namespace std;

int main() {

    string nombreIngresado = solicitarNombre();


    cout << "-- - Resultados del Procesamiento-- - " << endl;

    cout << "El primer nombre extraido de la cadena: " << obtenerPrimerNombre(nombreIngresado) << endl;

    cout << "El primer apellido extraido de la cadena: " << obtenerPrimerApellido(nombreIngresado) << endl;

    cout << "La cantidad total de vocales: " << contarVocales(nombreIngresado) << endl;

    cout << "El nombre completo en mayusculas: " << aMayusculas(nombreIngresado) << endl;

    cout << "La longitud total del nombre: " << obtenerLongitud(nombreIngresado) << " caracteres" << endl;

    return 0;
=======
#include <iostream>
#include <string>
#include "procesamiento.h"

using namespace std;

int main() {

    string nombreIngresado = solicitarNombre();


    cout << "-- - Resultados del Procesamiento-- - " << endl;

    cout << "El primer nombre extraido de la cadena: " << obtenerPrimerNombre(nombreIngresado) << endl;

    cout << "El primer apellido extraido de la cadena: " << obtenerPrimerApellido(nombreIngresado) << endl;

    cout << "La cantidad total de vocales: " << contarVocales(nombreIngresado) << endl;

    cout << "El nombre completo en mayusculas: " << aMayusculas(nombreIngresado) << endl;

    cout << "La longitud total del nombre: " << obtenerLongitud(nombreIngresado) << " caracteres" << endl;

    return 0;
>>>>>>> f12428701991a65845232044ac4d8a922f9f1765
}