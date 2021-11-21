/**
 * Universidad de La Laguna
 * Escuela Superior de Ingeniería y Tecnología
 * Grado en Ingeniería Informática
 * Informática Básica
 *
 * @author Esther M. Quintero
 * @date 28 Oct 2021
 * @brief Programa que imprime en pantalla los caracteres asociados a código ASCII
 */

#include <iostream>

int main () {
  std::cout << "Este programa imprime en pantalla los caracteres asociados a código ASCII." << std::endl;
  std::cout << "Código  Carácter" << std::endl;
  for (int contador{32}; contador <= 126; ++contador) {
    std::cout << contador << "        " << static_cast<char>(contador) << std::endl;
  }
  return 0;
}