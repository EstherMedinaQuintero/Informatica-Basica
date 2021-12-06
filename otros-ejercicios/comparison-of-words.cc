/**
 * Universidad de La Laguna
 * Escuela Superior de Ingeniería y Tecnología
 * Grado en Ingeniería Informática
 * Informática Básica
 *
 * @author Esther M. Quintero
 * @date 17 Nov 2021
 * @brief Programa que compara dos letras alfabéticamente
 */

#include <iostream>
#include <cstring>

// @brief Esta función escribe el mensaje inicial con la explicación del programa.
int MensajeInicial() {
  std::cout << "Este programa que compara dos letras alfabeticamente." << std::endl << "\n";
  return 0;
}

int main () {
  //MensajeInicial()
  std::string primera_palabra, segunda_palabra;
  std::cin >> primera_palabra >> segunda_palabra;
  if (primera_palabra == segunda_palabra) {
    std::cout << primera_palabra << " = " << segunda_palabra << std::endl;
  } else if (primera_palabra < segunda_palabra) {
    std::cout << primera_palabra << " < " << segunda_palabra << std::endl;
  } else {
    std::cout << primera_palabra << " > " << segunda_palabra << std::endl;
  }
  return 0;
}