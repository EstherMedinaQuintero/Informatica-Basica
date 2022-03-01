/**
 * Universidad de La Laguna
 * Escuela Superior de Ingeniería y Tecnología
 * Grado en Ingeniería Informática
 * Informática Básica
 *
 * @author Esther M. Quintero
 * @date 13 Dic 2021
 * @brief Este programa lee un fichero con especificación sobre un autómata finito
 *        determinista e imprime por pantalla las características del mismo.
 */

#include "read_DFA.h"

/** Función main.
 *  @param[in] argc Número de parámetros
 *  @param[in] argv Vector con los parámetros
 */
int main(int argc, char* argv[]) {
  Usage(argc, argv);
  const std::string kNombreFichero{argv[1]};
  ImprimeCardinal(kNombreFichero);
  ImprimeFuncionTransicion(kNombreFichero);
  return 0;
}