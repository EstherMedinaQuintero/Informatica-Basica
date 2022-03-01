/**
 * Universidad de La Laguna
 * Escuela Superior de Ingeniería y Tecnología
 * Grado en Ingeniería Informática
 * Informática Básica
 *
 * @author Esther M. Quintero
 * @date 12 Dic 2021
 * @brief Este programa, dado un fichero de texto que se pasa por parámetro,
 *        copia el fichero de texto en otro, también pasado por parámetro.
 */

#include "my_diff.h"

/** Función main.
 *  @param[in] argc Número de parámetros
 *  @param[in] argv Vector con los parámetros
 */
int main(int argc, char* argv[]) {
  Usage(argc, argv);
  ComparaFicheros(argv[1], argv[2]);
  return 0;
}