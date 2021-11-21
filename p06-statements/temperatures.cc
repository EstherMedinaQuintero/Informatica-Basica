/**
 * Universidad de La Laguna
 * Escuela Superior de Ingeniería y Tecnología
 * Grado en Ingeniería Informática
 * Informática Básica
 *
 * @author Esther M. Quintero
 * @date 07 Nov 2021
 * @brief Programa que, dada una temperatura, indica si hace calor, frío o si se está bien
 */

#include <iostream>

int HaceCalor(const int& temperatura) {
  if (temperatura < 10) {
    std::cout << "Hace frío. ";
  } else if (temperatura > 30) {
    std::cout << "Hace calor. ";
  } else {
    std::cout << "Se está bien. ";
  }
  return 0;
}

int HierveCongela(const int& temperatura) {
  if (temperatura <= 0) {
    std::cout << "El agua se congelaría." << std::endl;
  } else if (temperatura >= 100) {
    std::cout << "El agua herviría." << std::endl;
  } else {
    std::cout << std::endl;
  }
  return 0;
}

int main() {
  std::cout << "Este programa indica si hace calor (+30º), frio (-10º) o si se esta bien" << std::endl;
  int temperatura;
  std::cout << "Introduzca un numero entero: ";
  std::cin >> temperatura;
  std::cout << "A " << temperatura << " grados: ";
  HaceCalor(temperatura);
  HierveCongela(temperatura);
  return 0;
}