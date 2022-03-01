/**
 * Universidad de La Laguna
 * Escuela Superior de Ingeniería y Tecnología
 * Grado en Ingeniería Informática
 * Informática Básica
 *
 * @author Esther M. Quintero
 * @date 12 Dic 2021
 * @brief Este programa, dado un fichero de texto que se pasa por parámetro,
 *        imprime la palabra con mayor número de vocales y la palabra con mayor
 *        número de consonantes (independientemente de si se trata de mayúsculas
 *        o minúsculas).
 */

#include <iostream>
#include <fstream>
#include <string>

const std::string kHelpText = "Este programa muestra la palabra con mayor numero de vocales y la palabra con mayor numero de consonantes.";

void Usage(int argc, char *argv[]);
bool EsVocal(const char letra);
int CuentaConsonantes(const std::string& palabra);
int CuentaVocales(const std::string& palabra);
int PalabraConMasConsonantes(const std::string& linea, std::string& mas_consonantes_anterior);
int PalabraConMasVocales(const std::string& linea, std::string& mas_vocales_anterior);