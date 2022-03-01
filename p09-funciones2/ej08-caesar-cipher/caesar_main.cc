/**
 * Universidad de La Laguna
 * Escuela Superior de Ingeniería y Tecnología
 * Grado en Ingeniería Informática
 * Informática Básica
 *
 * @author Esther M. Quintero
 * @date 06 Dic 2021
 * @brief Este programa cifra en el código César.
 * @see [https://jutge.org/problems/P33371_en]
 */

#include "caesar_cipher.h"

int main() {
  int numero_introducido;
  while (std::cin >> numero_introducido) {
    char letra_introducida;
    std::cin >> letra_introducida;
    while (letra_introducida != '.') {
      std::cout << Codificar(letra_introducida, numero_introducido);
      std::cin >> letra_introducida;
    }
    std::cout << std::endl;
  }
  return 0;
}