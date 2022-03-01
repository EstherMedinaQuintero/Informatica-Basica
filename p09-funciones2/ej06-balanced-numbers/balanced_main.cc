/**
 * Universidad de La Laguna
 * Escuela Superior de Ingeniería y Tecnología
 * Grado en Ingeniería Informática
 * Informática Básica
 *
 * @author Esther M. Quintero
 * @date 06 Dic 2021
 * @brief Este programa indica si un número está balanceado. Se dice que un número está balanceado
 *        si la suma de los dígitos de las posiciones pares es igual a la suma de los dígitos de
 *        las posiciones impares.
 * @see [https://jutge.org/problems/P26492_en]
 */

#include "balanced_numbers.h"

int main() {
  int numero_introducido;
  std::cin >> numero_introducido;
  std::cout << is_balanced(numero_introducido) << std::endl;
  return 0;
}