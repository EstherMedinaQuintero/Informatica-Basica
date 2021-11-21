/**
 * Universidad de La Laguna
 * Escuela Superior de Ingeniería y Tecnología
 * Grado en Ingeniería Informática
 * Informática Básica
 *
 * @author Esther M. Quintero
 * @date 09 Nov 2021
 * @brief Programa que lee un número natural (n) e imprime un cuadrado de asteriscos (nxn)
 */

#include <iostream>

int main() {
  std::cout << "Este programa imprime un cuadrado de asteriscos." << std::endl;
  int numero_introducido;
  std::cout << "Escriba un numero natural: ";
  std::cin >> numero_introducido;
  for (int contador_filas{0}; contador_filas < numero_introducido; ++contador_filas) {
    for (int contador_columnas{0}; contador_columnas < numero_introducido; ++contador_columnas) {
      std::cout << ' ' << '*' << ' ';
    }
    std::cout << std::endl;
  }
  return 0;
}
