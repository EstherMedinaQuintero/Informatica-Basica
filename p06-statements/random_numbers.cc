/**
 * Universidad de La Laguna
 * Escuela Superior de Ingeniería y Tecnología
 * Grado en Ingeniería Informática
 * Informática Básica
 *
 * @author Esther M. Quintero
 * @date 09 Nov 2021
 * @brief Programa que, dado un intervalo, devuelve un valor al azar
 */

#include <iostream>
#include <stdlib.h>

int main() {
  std::cout << "Este programa calcula un valor aleatorio entre otros dos dados" << std::endl;
  int primer_numero;
  int segundo_numero;
  std::cout << "Introduzca el primer numero del intervalo: ";
  std::cin >> primer_numero;
  std::cout << "Introduzca el segundo numero del intervalo: ";
  std::cin >> segundo_numero;
  int numero_aleatorio{rand() % segundo_numero + primer_numero};
  std::cout << "Numero aleatorio: " << numero_aleatorio << std::endl;
  return 0;
}