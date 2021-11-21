/**
 * Universidad de La Laguna
 * Escuela Superior de Ingeniería y Tecnología
 * Grado en Ingeniería Informática
 * Informática Básica
 *
 * @author Esther M. Quintero
 * @date 17 Nov 2021
 * @brief Programa que solicita un número entero n e imprime el resultado de la suma: 1^2+2^2+3^2+ … + n^2
 */

#include <iostream>

// @brief Esta función escribe el mensaje inicial con la explicación del programa.
int MensajeInicial() {
  std::cout << "Este programa que compara dos letras alfabeticamente." << std::endl << "\n";
  return 0;
}

int main () {
  int numero_introducido{0};
  std::cin >> numero_introducido;
  int suma{0};
  for (int contador{0}; contador <= numero_introducido; ++contador) {
    suma += contador * contador;
  }
  std::cout << suma << std::endl;
  return 0;
}