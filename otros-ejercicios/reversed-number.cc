/**
 * Universidad de La Laguna
 * Escuela Superior de Ingeniería y Tecnología
 * Grado en Ingeniería Informática
 * Informática Básica
 *
 * @author Esther M. Quintero
 * @date 16 Nov 2021
 * @brief Este programa, dado un número natural, muestra el número al revés.
 */

#include <iostream>

// @brief Esta función escribe el mensaje inicial con la explicación del programa.
int MensajeInicial() {
  std::cout << "Este programa muestra un numero natural al reves." << std::endl << "\n";
  return 0;
}

int main () {
  //MensajeInicial()
  int numero_introducido{};
  std::cin >> numero_introducido;
  int numero_invertido{0};
  while (numero_introducido > 0) {
    numero_invertido = numero_invertido * 10 + (numero_introducido % 10);
    numero_introducido = numero_introducido / 10;
    if (numero_invertido == 0) {
      std::cout << numero_invertido;
    }
    //std::cout << "-->" << numero_invertido << std::endl;
    //std::cout << "-->" << numero_introducido << std::endl;
  }
  std::cout << numero_invertido;
  std::cout << std::endl;
  return 0;
}
