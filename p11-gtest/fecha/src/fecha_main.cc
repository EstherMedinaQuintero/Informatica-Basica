/**
 * Universidad de La Laguna
 * Escuela Superior de Ingeniería y Tecnología
 * Grado en Ingeniería Informática
 * Informática Básica
 *
 * @author Esther M. Quintero
 * @date Ene 03 2021
 * @brief Programa cliente de la clase fecha
 *
 */

#include <iostream>

#include "fecha.h"
 
int main() {
  std::cout << "Programa cliente de la clase fecha" << std::endl;
  Fecha fecha1{};
  std::cin >> fecha1;
  std::cout << "Imprimir fecha1: " << fecha1 << std::endl;
  Fecha fecha2(3, 1, 2022);
  std::cout << "Imprimir fecha2: " << fecha2 << std::endl;
  Fecha fecha3(40, 4, 2021);
  std::cout << "Imprimir fecha3: " << fecha3 << std::endl;
  std::cout << "Bisiesto: " << EsBisiesto(fecha2) << std::endl;
  std::cout << "fecha1 == fecha2: " << std::endl;
  if (fecha1 == fecha2) {
    std::cout << "true" << std::endl;
  } else {
    std::cout << "false" << std::endl;
  }
  return 0;
}