/**
 * Universidad de La Laguna
 * Escuela Superior de Ingeniería y Tecnología
 * Grado en Ingeniería Informática
 * Informática Básica
 *
 * @author Esther M. Quintero
 * @date 09 Nov 2021
 * @brief Programa que entrega la secuencia de Collatz de un número entero
 */

#include <iostream>

int main() {
  std::cout << "Este programa entrega la secuencia de Collatz de un número entero" << std::endl;
  int numero_introducido;
  std::cout << "Introduzca un numero entero: ";
  std::cin >> numero_introducido;
  std::cout << numero_introducido << " ";
  while (numero_introducido != 1) {
    if (numero_introducido % 2 == 0) {
      numero_introducido /= 2;
      std::cout << numero_introducido << " ";
    } else {
      numero_introducido *= 3;
      ++numero_introducido;
      std::cout << numero_introducido << " ";
    }
  }
  std::cout << std::endl;
  return 0;
}