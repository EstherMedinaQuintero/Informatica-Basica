/**
 * Universidad de La Laguna
 * Escuela Superior de Ingeniería y Tecnología
 * Grado en Ingeniería Informática
 * Informática Básica
 *
 * @author Esther M. Quintero
 * @date 12 Dic 2021
 * @brief Este programa, dado un fichero de texto que se pasa por parámetro,
 *        borra las líneas en blanco que contenga.
 */

#include <iostream>
#include <string>
#include <fstream>

const std::string kHelpText = "Este programa borra las lineas vacias de un fichero.";

void Usage(int argc, char *argv[]);
int BorraLineasVacias(const std::string& nombre_fichero);