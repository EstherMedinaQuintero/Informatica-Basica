/**
 * Universidad de La Laguna
 * Escuela Superior de Ingeniería y Tecnología
 * Grado en Ingeniería Informática
 * Informática Básica
 *
 * @author Esther M. Quintero
 * @date 06 Dic 2021
 * @brief Este programa muestra el mínimo, el máximo y la media de una secuencia de números.
 * @see [https://jutge.org/problems/P17179_en]
 */

#include "statistical_measures.h"

int main() {
  double cantidad_numeros;
  while (std::cin >> cantidad_numeros) {
    std::vector<double> secuencia;
    double numero_introducido;
    while (std::cin.peek() != '\n') {
      for (int contador{0}; contador < int(cantidad_numeros); ++contador) {
        std::cin >> numero_introducido;
        secuencia.push_back(numero_introducido);
      }
      std::cout.setf(std::ios::fixed);
      std::cout.precision(4);
      std::cout << Minimo(cantidad_numeros, secuencia) << " ";
      std::cout << Maximo(cantidad_numeros, secuencia) << " ";
      std::cout << Average(cantidad_numeros, secuencia) << std::endl;
    }
  }
  return 0;
}