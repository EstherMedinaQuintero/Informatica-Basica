/**
 * Universidad de La Laguna
 * Escuela Superior de Ingeniería y Tecnología
 * Grado en Ingeniería Informática
 * Informática Básica
 *
 * @author Esther M. Quintero
 * @date 19 Nov 2021
 * @brief Programa que lee y escribe tres palabras en orden inverso.
 */

#include <iostream>
#include <cstring>

// @brief Esta función escribe el mensaje inicial con la explicación del programa
int MensajeInicial() {
  std::cout << "Este programa lee y escribe tres palabras en orden inverso." << std::endl;
  return 0;
}

int main() {
  // MensajeInicial()
  std::string primera_palabra, segunda_palabra, tercera_palabra;
  std::cin >> primera_palabra >> segunda_palabra >> tercera_palabra;
  std::cout << tercera_palabra << " " << segunda_palabra << " " << primera_palabra << std::endl;
  return 0;
}