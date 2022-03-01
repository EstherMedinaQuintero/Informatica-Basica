/**
 * Universidad de La Laguna
 * Escuela Superior de Ingeniería y Tecnología
 * Grado en Ingeniería Informática
 * Informática Básica
 *
 * @author Esther M. Quintero
 * @date 09 Dic 2021
 * @brief Este programa devuelve la suma de los divisores de un número
 * @see [https://jutge.org/problems/P95972_en]
 */

#include <iostream>

/** 
 *  @brief Esta función suma los divisores de un número.
 *  @param x: Número del que suma los divisores.
 *  @return Devuelve la suma de los divisores.
 */
int sum_divisors(int x) {
  int suma{0};
  int contador;
  for (contador = 1; (contador * contador) < x; contador++) {
    if (x % contador == 0) {
      suma += contador;
    }
  }
  for ( ; contador >= 1; contador--) {
    if ((x % contador == 0) and (x / contador != contador - 1)) {
      suma += x / contador;
    }
  }
  return suma;
}

// Esto no lo pide jutge.
int main() {
  int numero_introducido;
  std::cin >> numero_introducido;
  std ::cout << sum_divisors(numero_introducido) << std::endl;
  return 0;
}

