/**
 * Universidad de La Laguna
 * Escuela Superior de Ingeniería y Tecnología
 * Grado en Ingeniería Informática
 * Informática Básica
 *
 * @author Esther M. Quintero
 * @date 12 Dic 2021
 * @see [https://jutge.org/problems/P75810_en]
 */

#include "cryptocaesar.h"

int main() {
  int numero_introducido;
  std::cin >> numero_introducido;
  for (int contador{0}; contador < numero_introducido; ++contador) {
    std::string mensaje_introducido;
    std::cin >> mensaje_introducido;
    int numero_descodificar{NumeroDescodificar(mensaje_introducido)};
    for (const auto &caracter_actual : mensaje_introducido) {
      if (caracter_actual != '.') {
        std::cout << Descodificar(caracter_actual, numero_descodificar);
      }
    }
    std::cout << std::endl;
  }
  return 0;
}