/**
 * Universidad de La Laguna
 * Escuela Superior de Ingeniería y Tecnología
 * Grado en Ingeniería Informática
 * Informática Básica
 *
 * @author Esther M. Quintero
 * @date 08 Dic 2021
 * @brief Este programa comprueba si un número es de Armstrong.
 */

#include <iostream>

const std::string kHelpText = "Este programa comprueba si un numero es de Armstrong.";

void Usage(int argc, char *argv[]);
int CantidadDeDigitos(const int numero);
int ElevarNumero(const int base, const int exponente);
bool EsDeArmstrong(const int numero);
int ImprimeSolucion(const bool solucion, const int numero);