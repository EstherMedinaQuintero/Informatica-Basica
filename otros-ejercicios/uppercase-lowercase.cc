/**
 * Universidad de La Laguna
 * Escuela Superior de Ingeniería y Tecnología
 * Grado en Ingeniería Informática
 * Informática Básica
 *
 * @author Esther M. Quintero
 * @date 16 Nov 2021
 * @brief Programa que lee una letra y devuelve mayus o minus
 */

#include <iostream>
#include <cctype>

// @brief Esta función escribe el mensaje inicial con la explicación del programa.
int MensajeInicial() {
  std::cout << "Este programa lee una letra y devuelve mayus o minus" << std::endl << "\n";
  return 0;
}

// @brief Esta función devuelve true si una letra es mayúscula
bool EsMayuscula(const char letra) {
  if (islower(letra)) {
    return false;
  } 
  return true;
}

int main () {
  //MensajeInicial()
  char letra_introducida;
  std::cin >> letra_introducida;
  if (EsMayuscula(letra_introducida)) {
    std::cout << static_cast<char>(tolower(letra_introducida)) << std::endl;
  } else {
    std::cout << static_cast<char>(toupper(letra_introducida)) << std::endl;
  }
  return 0;
}