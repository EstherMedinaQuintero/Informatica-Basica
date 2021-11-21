/**
 * Universidad de La Laguna
 * Escuela Superior de Ingeniería y Tecnología
 * Grado en Ingeniería Informática
 * Informática Básica
 *
 * @author Esther M. Quintero
 * @date 19 Nov 2021
 * @brief Programa que muestra el n-ésimo número armónico.
 */

#include <iostream>
#include <iomanip>

// @brief Esta función escribe el mensaje inicial con la explicación del programa
int MensajeInicial() {
  std::cout << "Este programa muestra el n-esimo numero armonico." << std::endl;
  return 0;
}

// @brief Esta función devuelve un número armónico
// @param interaciones Hasta donde quiere llegar de la serie armónica
double SerieArmonica(const int iteraciones) {
  double numero_armonico{0};
  for (int contador{1}; contador <= iteraciones; ++contador) {
    numero_armonico += 1.0 / double(contador);
  }
  return numero_armonico;
}

int main() {
  // MensajeInicial()
  int numero_introducido{};
  std::cin >> numero_introducido;
  std::cout << std::fixed << std::setprecision(4) << SerieArmonica(numero_introducido) << std::endl;
  return 0;
}