/**
 * Universidad de La Laguna
 * Escuela Superior de Ingeniería y Tecnología
 * Grado en Ingeniería Informática
 * Informática Básica
 *
 * @author Esther M. Quintero
 * @date 03 Dic 2021
 * @see [https://jutge.org/problems/P11725_en]
 */

#include "sequential_search.h"

int main() {
  const int numero{1};
  const std::vector<int> secuencia{1, 2, 3, 4};
  std::cout << Existe(numero, secuencia) << std::endl;
  return 0;
}