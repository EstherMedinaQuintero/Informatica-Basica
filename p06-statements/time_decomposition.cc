/**
 * Universidad de La Laguna
 * Escuela Superior de Ingeniería y Tecnología
 * Grado en Ingeniería Informática
 * Informática Básica
 *
 * @author Esther M. Quintero
 * @date 07 Nov 2021
 * @brief Programa que dado un número natural imprime el número de horas, minutos y segundos
 */

#include <iostream>

int main() {
  std::cout << "Este programa muestra el numero de horas, minutos y segundos que corresponden a una cantidad." << std::endl;
  int numero_introducido;
  std::cout << "Introduzca un numero natural positivo: ";
  std::cin >> numero_introducido;
  int horas{numero_introducido / 3600};
  int minutos{(numero_introducido - horas * 3600) / 60};
  int segundos{numero_introducido - (horas * 3600 + minutos * 60)};
  std::cout << numero_introducido << " segundos son: " << horas << "h " << minutos << "min " << segundos << "s." << std::endl;
  return 0;
}