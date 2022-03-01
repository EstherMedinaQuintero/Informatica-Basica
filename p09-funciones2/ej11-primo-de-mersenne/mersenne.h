/**
 * Universidad de La Laguna
 * Escuela Superior de Ingeniería y Tecnología
 * Grado en Ingeniería Informática
 * Informática Básica
 *
 * @author Esther M. Quintero
 * @date 08 Dic 2021
 * @brief Este programa muestra los n primeros números primos de Mersenne.
 */

#include <iostream>

const std::string kHelpText = "Este programa muestra los n primeros numeros primos de Mersenne.";

void Usage(int argc, char *argv[]);
bool EsPrimo(const int numero);
int ElevarNumero(const int base, const int exponente);
int NumeroMersenne(const int numero);
int MersennePrimo(const int limite);