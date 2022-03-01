/**
 * Universidad de La Laguna
 * Escuela Superior de Ingeniería y Tecnología
 * Grado en Ingeniería Informática
 * Informática Básica
 *
 * @author Esther M. Quintero
 * @date 12 Dic 2021
 * @brief Este programa, dado un fichero de texto que se pasa por parámetro,
 *        copia el fichero de texto en otro pero añade al principio de cada
 *        línea el número de la misma.
 */

#include <iostream>
#include <string>
#include <fstream>

const std::string kHelpText = "Este programa copia un fichero en otro y le numera las lineas.";

void Usage(int argc, char *argv[]);
int CopiaFicheroNumerado(const std::string& nombre_fichero_entrada, const std::string& nombre_fichero_salida);