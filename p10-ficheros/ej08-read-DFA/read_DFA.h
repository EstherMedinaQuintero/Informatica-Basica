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

#include <iostream>
#include <string>
#include <fstream>
#include <vector>

const std::string kHelpText = "Este programa lee un fichero con especificacion sobre un automata finito determinista.";

void Usage(int argc, char *argv[]);
int ImprimeCardinal(const std::string nombre_fichero);
int ImprimeFuncionTransicion(const std::string nombre_fichero);