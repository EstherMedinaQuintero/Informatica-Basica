/**
 * Universidad de La Laguna
 * Escuela Superior de Ingeniería y Tecnología
 * Grado en Ingeniería Informática
 * Informática Básica
 *
 * @author Esther M. Quintero
 * @date 03 Nov 2021
 * @brief Programa que muestra cómo funciona la evaluación de circuito corto
 */

#include <iostream>

int main () {
  std::cout << "Este programa muestra cómo funciona la evaluación de circuito corto." << std::endl;
  int variable{1};
  bool comparacion_and{variable == 0 && ++variable};
  std::cout << "El resultado de comparar con and da " << comparacion_and << " y la variable: " << variable << std::endl;
  std::cout << "Podemos ver que ni se molesto en realizar la segunda accion." << std::endl;
  bool comparacion_or{variable == 1 || ++variable};
  std::cout << "El resultado de comparar con or da " << comparacion_or << " y la variable: " << variable << std::endl;
  std::cout << "Aqui tampoco realiza la segunda accion." << std::endl;
  return 0;
}