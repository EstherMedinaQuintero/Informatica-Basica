/**
 * Universidad de La Laguna
 * Escuela Superior de Ingeniería y Tecnología
 * Grado en Ingeniería Informática
 * Informática Básica
 *
 * @author Esther M. Quintero
 * @date 19 Nov 2021
 * @brief Programa que indica si un año es bisiesto o no
 */

#include <iostream>

// @brief Esta función escribe el mensaje inicial con la explicación del programa
int MensajeInicial() {
  std::cout << "Este programa indica si un anio es bisiesto o no." << std::endl;
  return 0;
}

bool ComprobarBisiesto(const int& anio) {
  if ((anio % 4 == 0) and (anio % 100 != 0)) {
    return true;
  } 
  if ((anio % 100 == 0) and ((anio / 100) % 4 == 0 )) {
    return true;
  }
  return false;
}

int main() {
  // MensajeInicial()
  int anio_introducido;
  std::cin >> anio_introducido;
  if (ComprobarBisiesto(anio_introducido)) {
    std::cout << "YES" << std::endl;
  } else {
    std::cout << "NO" << std::endl;
  }
  return 0;
}