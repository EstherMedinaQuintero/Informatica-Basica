/**
 * Universidad de La Laguna
 * Escuela Superior de Ingeniería y Tecnología
 * Grado en Ingeniería Informática
 * Informática Básica
 *
 * @author Esther M. Quintero
 * @date 22 Nov 2021
 * @brief Programa indica la posición del primer número par.
 */

#include <iostream>

/**
 * @brief Esta función escribe el mensaje inicial con la explicación del programa.
 */
int MensajeInicial() {
  std::cout << "Este programa indica la posicion del primer numero par." << std::endl;
  return 0;
}

int main() {
  // MensajeInicial()
  int contador_posicion{1};
  int numero_introducido;
  while (std::cin.peek() != '\n') {
    std::cin >> numero_introducido;
    if (numero_introducido % 2 == 0) {
      std::cout << contador_posicion << std::endl;
      break;
    } else {
      ++contador_posicion;
    }
  }
  return 0;
}