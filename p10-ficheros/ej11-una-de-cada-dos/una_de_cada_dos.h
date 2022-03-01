/**
 * Universidad de La Laguna
 * Escuela Superior de Ingeniería y Tecnología
 * Grado en Ingeniería Informática
 * Informática Básica
 *
 * @author Esther M. Quintero
 * @date 16 Dic 2021
 * @brief Este programa toma como parámetro de entrada un fichero de texto y escribe
 *        en un fichero de salida una de cada dos palabras del fichero de entrada.
 */

#include <iostream>
#include <string>
#include <fstream>

std::string ExtraeTextoFichero(const std::string& nombre_fichero);
std::string QuitaUnaDeCadaDosPalabras(const std::string& texto);