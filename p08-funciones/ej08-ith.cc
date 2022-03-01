/**
 * Universidad de La Laguna
 * Escuela Superior de Ingeniería y Tecnología
 * Grado en Ingeniería Informática
 * Informática Básica
 *
 * @author Esther M. Quintero
 * @date 22 Nov 2021
 * @brief Programa indica el número que está en la posición pedida.
 */

#include <iostream>

/**
 * @brief Esta función escribe el mensaje inicial con la explicación del programa.
 */
int MensajeInicial() {
  std::cout << "Este programa indica el numero que esta en la posicion pedida." << std::endl;
  return 0;
}

int main() {
  // MensajeInicial()
  int posicion_pedida;
  int numero_introducido;
  std::cin >> posicion_pedida;
  for (int contador{0}; contador < posicion_pedida; ++contador) {
    std::cin >> numero_introducido;
  }
  std::cout << "At the position " << posicion_pedida << " there is a(n) " << numero_introducido << "." << std::endl;
  return 0;
}