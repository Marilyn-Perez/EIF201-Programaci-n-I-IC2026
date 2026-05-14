#ifndef NODOLOCUTOR_H
#define NODOLOCUTOR_H

#include <iostream>
#include <string>

using namespace std;

namespace EIF201 {

	struct NodoLocutor {
		std::string nombre;
		int turnosAsignados;
		NodoLocutor* siguiente;

		NodoLocutor(const std::string& n)
			: nombre(n), siguiente(nullptr), turnosAsignados(0) {

			cout << "[NodoLocutor creado: " << n << "]" << endl;
		}
		~NodoLocutor() {
			cout << "[NodoLocutor destruido: " << nombre << "]" << endl;
		}

	};

}

#endif