#pragma once
#ifndef MATRIZ_H
#define MATRIZ_H

const int Filas = 3;
const int Cols = 3;

void leerMatriz(int matriz[Filas][Cols]);
void imprimirMatriz(int matriz[Filas][Cols]);
void sumaFilas(int matriz[Filas][Cols]);
void sumaColumnas(int matriz[Filas][Cols]);
void sumaDiagonal(int matriz[Filas][Cols]);

#endif