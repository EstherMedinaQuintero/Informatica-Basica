/**
 * Universidad de La Laguna
 * Escuela Superior de Ingeniería y Tecnología
 * Grado en Ingeniería Informática
 * Informática Básica
 *
 * @author Esther M. Quintero
 * @date Ene 02 2021
 * @brief Clase ComputeInt
 */

#include <iostream>

#ifndef COMPUTE_H
#define COMPUTE_H

class ComputeInt {
 public:
  int Factorial(int numero);
  int SumSerie(int limite);
  bool EsArmstrong(int numero);
  bool EsPerfecto(int numero);
  bool EsPrimo(int numero);
  bool EsPrimoPerfecto(int numero);
  bool EstaBalanceado(int numero);
  bool SonPrimosRelativos(int numero1, int numero2);
};

#endif