/**
 * Universidad de La Laguna
 * Escuela Superior de Ingeniería y Tecnología
 * Grado en Ingeniería Informática
 * Informática Básica
 *
 * @author Esther M. Quintero
 * @date 17 Nov 2021
 * @brief Programa que dado un número natural imprime el número de horas, minutos y segundos
 */

#include <iostream>

// @brief Esta función escribe el mensaje inicial con la explicación del programa.
int MensajeInicial() {
  std::cout << "Este dado un número natural imprime el número de horas, minutos y segundos." << std::endl << "\n";
  return 0;
}

int main() {
  //MensajeInicial()
  int numero_introducido;
  std::cin >> numero_introducido;
  int horas{numero_introducido / 3600};
  int minutos{(numero_introducido - horas * 3600) / 60};
  int segundos{numero_introducido - (horas * 3600 + minutos * 60)};
  std::cout << horas << " " << minutos << " " << segundos << std::endl;
  return 0;
}