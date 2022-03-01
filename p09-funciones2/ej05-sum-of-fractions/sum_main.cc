/**
 * Universidad de La Laguna
 * Escuela Superior de Ingeniería y Tecnología
 * Grado en Ingeniería Informática
 * Informática Básica
 *
 * @author Esther M. Quintero
 * @date 05 Dic 2021
 * @brief Este programa, dados tres números (a, b y k), calcula el resultado de hacer 
 *        1/a + 1/(a+k) + 1/(a+2k)... hasta que el denominador sea menor o igual a b.
 * @see [https://jutge.org/problems/P76024_en]
 */

#include "sum_of_fractions.h"

int main() {
  int primer_numero, limite, numero_a_sumar;
  while (std::cin >> primer_numero >> limite >> numero_a_sumar) {
    std::cout.setf(std::ios::fixed);
    std::cout.precision(4);
    std::cout << std::fixed << std::setprecision(4) << Fraccion(primer_numero, limite, numero_a_sumar) << std::endl;
  }
  return 0;
}