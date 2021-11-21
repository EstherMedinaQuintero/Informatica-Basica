/**
 * Universidad de La Laguna
 * Escuela Superior de Ingeniería y Tecnología
 * Grado en Ingeniería Informática
 * Informática Básica
 *
 * @author Esther M. Quintero
 * @date 03 Nov 2021
 * @brief Programa que declara e imprime referencias
 */

#include <iostream>

int main () {
  std::cout << "Este programa declara e imprime referencias." << std::endl;
  int primera_variable = 1;
  bool segunda_variable(true);
  double tercera_variable{2.2};
  char cuarta_variable = {'a'};
  int& primera_referencia{primera_variable};
  bool& segunda_referencia{segunda_variable};
  double& tercera_referencia{tercera_variable};
  char& cuarta_referencia{cuarta_variable};
  std::cout << "La primera referencia es: " << primera_referencia << std::endl;
  std::cout << "La segunda referencia es: " << segunda_referencia << std::endl;
  std::cout << "La tercera referencia es: " << tercera_referencia << std::endl;
  std::cout << "La cuarta referencia es: " << cuarta_referencia << std::endl;
  return 0;
}