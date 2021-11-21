/**
 * Universidad de La Laguna
 * Escuela Superior de Ingeniería y Tecnología
 * Grado en Ingeniería Informática
 * Informática Básica
 *
 * @author Esther M. Quintero
 * @date 15 Nov 2021
 * @brief Programa que cuenta la cantidad de 'a' que hay en un string.
 */

#include <iostream>
#include <cstring>

// @brief Esta función escribe el mensaje inicial con la explicación del programa
int MensajeInicial() {
  std::cout << "Este programa cuenta la cantidad de 'a' que hay en un string." << std::endl << "\n";
  return 0;
}

// @brief Esta función devuelve la cantidad de 'a' que hay en un string
// @param mensaje Es el string que revisa
int CantidadDeA(const std::string& mensaje) {
  int cantidad_de_a{0};
  const char kLetraA{'a'};
  for (int contador{0}; contador < int(mensaje.length()); ++contador) {
    if (mensaje[contador] == kLetraA) {
      ++cantidad_de_a;
    }
  }
  return cantidad_de_a;
}

int main() {
  //MensajeInicial()
  std::string mensaje_introducido;
  std::getline(std::cin, mensaje_introducido);
  std::cout << CantidadDeA(mensaje_introducido) << std::endl;
  return 0;
}