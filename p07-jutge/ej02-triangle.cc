/**
 * Universidad de La Laguna
 * Escuela Superior de Ingeniería y Tecnología
 * Grado en Ingeniería Informática
 * Informática Básica
 *
 * @author Esther M. Quintero
 * @date 15 Nov 2021
 * @brief Este programa, dado un número natural, imprime un triángulo de asteriscos.
 */

#include <iostream>

// @brief Esta función escribe el mensaje inicial con la explicación del programa
int MensajeInicial() {
  std::cout << "Este programa toma un numero natural e imprime un triangulo de asteriscos de ese tamaño." << std::endl
            << "\n";
  return 0;
}

// @brief Esta función enseña el triángulo de TrianguloDeAsteriscos
// @param tamanio_triangulo Es el tamaño de la última fila del triángulo
int TrianguloDeAsteriscos(const int tamanio_triangulo) {
  for (int contador{1}; contador <= tamanio_triangulo; ++contador) {
    for (int otro_contador{1}; otro_contador <= contador; ++otro_contador) {
      std::cout << "*";
    }
    std::cout << std::endl;
  }
  return 0;
}

int main() {
  //MensajeInicial()
  int tamanio_triangulo;
  std::cin >> tamanio_triangulo;
  TrianguloDeAsteriscos(tamanio_triangulo);
  return 0;
}