/**
 * Universidad de La Laguna
 * Escuela Superior de Ingeniería y Tecnología
 * Grado en Ingeniería Informática
 * Informática Básica
 *
 * @author Esther M. Quintero
 * @date 12 Dic 2021
 * @brief Este programa, dados dos ficheros de texto que se pasan por parámetro,
 *        los compara. Si tienen alguna diferenc.
 */

#include <iostream>
#include <string>
#include <fstream>

const std::string kHelpText = "Este programa compara dos ficheros.";

void Usage(int argc, char *argv[]);
int ComparaFicheros(const std::string& nombre_primer_fichero, const std::string& nombre_segundo_fichero);