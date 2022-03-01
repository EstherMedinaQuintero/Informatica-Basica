/**
 * Universidad de La Laguna
 * Escuela Superior de Ingeniería y Tecnología
 * Grado en Ingeniería Informática
 * Informática Básica
 *
 * @author Esther M. Quintero
 * @date 12 Dic 2021
 * @brief Este programa, dado un fichero de texto que se pasa por parámetro,
 *        rota las vocales minúsculas que encuentra. Cambia a por e, e por i, 
 *        i por o, o por u, u por a.
 */

#include <iostream>
#include <string>
#include <fstream>

const std::string kHelpText = "Este programa rueda las vocales de un fichero.";

void Usage(int argc, char *argv[]);
int RuedaVocales(const std::string& nombre_fichero);
bool EsVocalMinuscula(const char letra);