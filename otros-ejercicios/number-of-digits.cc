/**
 * Universidad de La Laguna
 * Escuela Superior de Ingeniería y Tecnología
 * Grado en Ingeniería Informática
 * Informática Básica
 *
 * @author Esther M. Quintero
 * @date 16 Nov 2021
 * @brief Este programa, dado un número natural, muestra el número de dígitos que tiene.
 */

#include <iostream>
#include <cstring>

// @brief Esta función escribe el mensaje inicial con la explicación del programa.
int MensajeInicial() {
  std::cout << "Este programa muestra un numero de digitos de un numero natural." << std::endl << "\n";
  return 0;
}

int main () {
  //MensajeInicial()
  std::string numero_introducido;
  std::cin >> numero_introducido;
  std::cout << "The number of digits of " << numero_introducido << " is " << numero_introducido.length() << "." << std::endl;
  return 0;
}