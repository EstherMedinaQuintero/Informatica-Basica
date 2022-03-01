/**
 * Universidad de La Laguna
 * Escuela Superior de Ingeniería y Tecnología
 * Grado en Ingeniería Informática
 * Informática Básica
 *
 * @author Esther M. Quintero
 * @date 06 Dic 2021
 * @brief Este programa indica el máximo de una secuencia de números.
 * @see [https://jutge.org/problems/P71753_en]
 */

#include "maximum_of_each_sequence.h"

int main() {
  int cantidad_numeros;
  while (std::cin >> cantidad_numeros) {
    std::cout << Maximo(cantidad_numeros) << std::endl;
  }
  return 0;
}