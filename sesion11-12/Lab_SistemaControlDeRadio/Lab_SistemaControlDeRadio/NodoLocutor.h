#ifndef NODOLOCUTOR_H
#define NODOLOCUTOR_H

#include <iostream>
#include <string>

using namespace std;

namespace EIF201 {

	struct NodoLocutor {
		std::string nombre;
		NodoLocutor* siguiente;

		NodoLocutor(const std::string& n)
			: nombre(n), siguiente(nullptr) {
			cout << "[NodoLocutor creado: " << n << "]" << endl;
		}
		~NodoLocutor() {
			cout << "[NodoLocutor destruido: " << nombre << "]" << endl;
		}
	};

}

#endif