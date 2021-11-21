/**
 * Universidad de La Laguna
 * Escuela Superior de Ingeniería y Tecnología
 * Grado en Ingeniería Informática
 * Informática Básica
 *
 * @author Esther M. Quintero
 * @date 16 Nov 2021
 * @brief Este programa, dado un número natural, muestra todos los números entre 0 y ese natural.
 */

#include <iostream>
#include <vector>
#include <algorithm>

// @brief Esta función escribe el mensaje inicial con la explicación del programa.
int MensajeInicial() {
  std::cout << "Este programa muestra todos los numeros entre 0 y un numero natural dado." << std::endl << "\n";
  return 0;
}

int main () {
  //MEnsajeInicial()
  int numero_introducido;
  std::cin >> numero_introducido;
  if (numero_introducido >= 0) {
    for (int contador{0}; contador <= numero_introducido; ++contador) {
      std::cout << contador << std::endl;
    }
  }

  return 0;
}