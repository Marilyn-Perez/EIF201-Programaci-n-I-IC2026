#pragma once
#ifndef procesamiento_h
#define procesamiento_h

#include <string>

std::string solicitarNombre();
std::string obtenerPrimerNombre(const std::string& nombreCompleto);
std::string obtenerPrimerApellido(const std::string& nombreCompleto);
int contarVocales(const std::string& nombreCompleto);
std::string aMayusculas(const std::string& nombreCompleto);
int obtenerLongitud(const std::string& nombreCompleto);

#endif