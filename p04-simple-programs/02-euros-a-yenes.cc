/**
 * Universidad de La Laguna
 * Escuela Superior de Ingeniería y Tecnología
 * Grado en Ingeniería Informática
 * Informática Básica
 *
 * @author Esther M. Quintero
 * @date 26 Oct 2021
 * @brief Programa que convierte euros en yenes
 */

#include <iostream>

int main () {
  
  std::cout << "Este programa pasa una cantidad dada de euros a yenes." << std::endl;

  const float kYenEnEuros{0.0075};
  float cantidad_euros{0.0};
  std::cout << "Introduzca la cantidad de euros que desea convertir: ";
  std::cin >> cantidad_euros;
  float cantidad_yenes{cantidad_euros / kYenEnEuros};
  std::cout << cantidad_euros << " euros son " << cantidad_yenes << " yenes." << std::endl;

  return 0;
}