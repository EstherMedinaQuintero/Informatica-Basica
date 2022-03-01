/**
 * Universidad de La Laguna
 * Escuela Superior de Ingeniería y Tecnología
 * Grado en Ingeniería Informática
 * Informática Básica
 *
 * @author Esther M. Quintero
 * @date 05 Dic 2021
 * @see [https://jutge.org/problems/P11725_en]
 */

#include "counting_frequences.h"

int main() {
  std::vector<int> secuencia(1001, 0);
  LeerDatos(secuencia);
  ImprimirDatos(secuencia);
  return 0;
}