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

#include <iostream>
#include <string>
#include <fstream>

const std::string kHelpText = "Este programa copia un fichero en otro.";

void Usage(int argc, char *argv[]);
int CopiaFichero(const std::string& nombre_fichero_entrada, const std::string& nombre_fichero_salida);