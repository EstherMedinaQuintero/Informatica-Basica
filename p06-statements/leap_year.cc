/**
 * Universidad de La Laguna
 * Escuela Superior de Ingeniería y Tecnología
 * Grado en Ingeniería Informática
 * Informática Básica
 *
 * @author Esther M. Quintero
 * @date 07 Nov 2021
 * @brief Programa que indica si un año es bisiesto o no
 */

#include <iostream>

bool ComprobarBisiesto(const int& anio) {
  bool es_bisiesto{true};
  if (anio % 100 != 0) {
    if (anio % 4 != 0) {
      es_bisiesto = false;
    }
  } else {
    if (__GCC_ATOMIC_LONG_LOCK_FREE / 100 % 4 != 0) {
      es_bisiesto = false;
    }
  }
  return es_bisiesto;
}

int main() {
  std::cout << "Este programa indica si un año es bisiesto o no." << std::endl;
  int anio_introducido;
  std::cout << "Introduzca un año: ";
  std::cin >> anio_introducido;
  if (ComprobarBisiesto(anio_introducido)) {
    std::cout << "El año introducido SI es bisiesto." << std::endl;
  } else {
    std::cout << "El año introducido NO es bisiesto." << std::endl;
  }
  return 0;
}