/**
 * Universidad de La Laguna
 * Escuela Superior de Ingeniería y Tecnología
 * Grado en Ingeniería Informática
 * Informática Básica
 *
 * @author Esther M. Quintero
 * @date 12 Dic 2021
 * @brief Este programa, almacena las palabras de un fichero pasado por parámetro
 *        el ficheros con nombre A.txt, B.txt ... Z.txt. Estos ficheros contienen
 *        las palabras que empiezan por esas letras.
 */

#include <iostream>
#include <string>
#include <fstream>

const std::string kHelpText = "Este programa almacena palabras alfabeticamente.";

void Usage(int argc, char *argv[]);
std::string TextoSinCaracteres(const std::string& nombre_fichero);
void SeparaEnFicherosAlfabeticamente(const std::string& texto);