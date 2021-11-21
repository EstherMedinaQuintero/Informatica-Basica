/**
 * Universidad de La Laguna
 * Escuela Superior de Ingeniería y Tecnología
 * Grado en Ingeniería Informática
 * Informática Básica
 *
 * @author Esther M. Quintero
 * @date 04 Nov 2021
 * @brief Programa que solicita un número entero n e imprime el resultado de la suma: 1^2+2^2+3^2+ … + n^2
 */

#include <iostream>

int main () {
  std::cout << "Este programa muestra la suma de n numeros al cuadrado." << std::endl;
  int numero_introducido{0};
  std::cout << "Introduzca el numero entero hasta el que desea sumar: ";
  std::cin >> numero_introducido;
  std::cout << "Entrada  Salida" << std::endl;
  int suma{0};
  for (int contador{0}; contador <= numero_introducido; ++contador) {
    suma += contador * contador;
    std::cout << "  " << contador << "          " << suma << std::endl;
  };
  return 0;
}