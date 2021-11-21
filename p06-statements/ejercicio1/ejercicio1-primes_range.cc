/**
 * Universidad de La Laguna
 * Escuela Superior de Ingeniería y Tecnología
 * Grado en Ingeniería Informática
 * Informática Básica
 *
 * @author Esther M. Quintero
 * @date 09 Nov 2021
 * @brief Programa que dados dos números naturales imprime todos los números primos entre ellos.
 */

#include <iostream>

// @brief Esta función comprueba si un número es primo o no
// @param numero Es el número a comprobar
bool EsPrimo(const int& numero) {
  if (numero == 0 || numero == 4) {
    return false; 
  } else if (numero == 1) {
    return true;
  }
  for (int contador{2}; contador < numero / 2; contador++) {
    if (numero % contador == 0) {
      return false;
    }
  }
  return true;
}

int main() {
  std::cout << "Este programa calcula los numeros primos que hay entre dos numeros naturales" << std::endl;
  int primer_numero;
  std::cout << "Escriba el primer numero natural: ";
  std::cin >> primer_numero;
  int segundo_numero;
  std::cout << "Escriba el segundo numero natural: ";
  std::cin >> segundo_numero;
  std::cout << "Numeros primos: ";
  for (int contador{primer_numero}; contador <= segundo_numero; ++contador) {
    if (EsPrimo(contador)) {
      std::cout << contador << " ";
    }
  }
  std::cout << std::endl;
  return 0;
}