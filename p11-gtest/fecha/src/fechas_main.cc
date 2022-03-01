/**
 * Universidad de La Laguna
 * Escuela Superior de Ingeniería y Tecnología
 * Grado en Ingeniería Informática
 * Informática Básica
 *
 * @author Esther M. Quintero
 * @date Ene 03 2021
 * @brief Programa cliente que toma parámetros
 *
 */

#include <iostream>
#include <string>
#include <fstream>

#include "fecha.h"

/** Función main.
 *  @param[in] argc Número de parámetros
 *  @param[in] argv Vector con los parámetros
 */
int main(int argc, char* argv[]) {
  Usage(argc, argv);
  int numero_introducido{std::stoi(argv[2])};
  std::string nombre_fichero_salida{argv[3]};
  std::ofstream fichero_salida{nombre_fichero_salida};
  auto fecha{StringAFecha(argv[1])};
  for (int contador{0}; contador < numero_introducido; ++contador) {
    fecha += 1;
    fichero_salida << fecha << std::endl;
  }
  return 0;
}