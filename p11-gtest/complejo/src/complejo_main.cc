/**
 * Universidad de La Laguna
 * Escuela Superior de Ingeniería y Tecnología
 * Grado en Ingeniería Informática
 * Informática Básica
 *
 * @author Esther M. Quintero
 * @date Ene 04 2021
 * @brief Programa cliente de la clase complejo
 *
 */

#include <iostream>

#include "complejo.h"
 
int main() {
  std::cout << "Programa cliente de la clase vector" << std::endl;
  Complejo complejo1;
  std::cout << "Primer complejo: " << complejo1 << std::endl;
  Complejo complejo2{1, 1};
  std::cout << "Segundo complejo: " << complejo2 << std::endl;
  Complejo complejo3{8, -3};
  std::cout << "Tercer complejo: " << complejo3 << std::endl;
  std::cout << "1 == 2: "; 
  if (complejo1 == complejo2) std::cout << "SI" << std::endl; 
  else std::cout << "NO" << std::endl;
  Complejo complejo4{complejo3 / -2};
  std::cout << "División: " << complejo4 << std::endl;
  Complejo complejo5{complejo2 * 4};
  std::cout << "Multiplicación: " << complejo5 << std::endl;
  Complejo complejo;
  std::cin >> complejo;
  std::cout << "Entrada: " << complejo << std::endl; 
  Complejo conjugado2{Conjugado(complejo2)};
  std::cout << "Conjugado: " << conjugado2 << std::endl;
  std::cout << "Valor abs: " << valorabs(complejo2) << std::endl;
  return 0;
}

