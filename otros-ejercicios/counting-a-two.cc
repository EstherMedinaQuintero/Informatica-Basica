/**
 * Universidad de La Laguna
 * Escuela Superior de Ingeniería y Tecnología
 * Grado en Ingeniería Informática
 * Informática Básica
 *
 * @author Esther M. Quintero
 * @date 18 Nov 2021
 * @brief Programa que cuenta la cantidad de 'a' que hay en un string.
 */

#include <iostream>
#include <cstring>

// @brief Esta función escribe el mensaje inicial con la explicación del programa
int MensajeInicial() {
  std::cout << "Este programa cuenta la cantidad de 'a' que hay en un string." << std::endl << "\n";
  return 0;
}

int main() {
  //MensajeInicial()
  char letra_introducida{' '};
  int contador{0};
  while (letra_introducida != '.') {
    std::cin >> letra_introducida;
    if (letra_introducida == 'a') {
      ++contador;
    }
  }
  std::cout << contador << std::endl;
  return 0;
}