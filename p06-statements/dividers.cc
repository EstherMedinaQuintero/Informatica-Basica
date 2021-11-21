/**
 * Universidad de La Laguna
 * Escuela Superior de Ingeniería y Tecnología
 * Grado en Ingeniería Informática
 * Informática Básica
 *
 * @author Esther M. Quintero
 * @date 07 Nov 2021
 * @brief Programa que imprime los divisores de un número
 */

#include <iostream>

int main() {
  std::cout << "Este programa solicita un numero e imprime todos sus divisores." << std::endl;
  int numero_introducido;
  std::cout << "Introduzca un numero entero: ";
  std::cin >> numero_introducido;
  std::cout << "Sus divisores son " << 1 << " ";
  for (int contador{2}; contador <= numero_introducido / 2; ++contador) {
    if (numero_introducido % contador == 0) {
      std::cout << contador << " ";
    }
  }
  std::cout << numero_introducido << std::endl;
  return 0;
}