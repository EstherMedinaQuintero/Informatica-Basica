/**
 * Universidad de La Laguna
 * Escuela Superior de Ingeniería y Tecnología
 * Grado en Ingeniería Informática
 * Informática Básica
 *
 * @author Esther M. Quintero
 * @date 03 Nov 2021
 * @brief Programa que muestra la cantidad de memoria que ocupada cada tipo de datos
 */

#include <iostream>

int main () {
  std::cout << "Este programa muestra la cantidad de memoria que ocupada cada tipo de datos." << std::endl;
  std::cout << "El tipo de datos bool se representa usando " << sizeof(bool) << " bytes." << std::endl;
  std::cout << "El tipo de datos char se representa usando " << sizeof(char) << " bytes." << std::endl;
  std::cout << "El tipo de datos short se representa usando " << sizeof(short) << " bytes." << std::endl;
  std::cout << "El tipo de datos int se representa usando " << sizeof(int) << " bytes." << std::endl;
  std::cout << "El tipo de datos float se representa usando " << sizeof(float) << " bytes." << std::endl;
  std::cout << "El tipo de datos long se representa usando " << sizeof(long) << " bytes." << std::endl;
  std::cout << "El tipo de datos double se representa usando " << sizeof(double) << " bytes." << std::endl;
  return 0;
}