/**
 * Universidad de La Laguna
 * Escuela Superior de Ingeniería y Tecnología
 * Grado en Ingeniería Informática
 * Informática Básica
 *
 * @author Esther M. Quintero
 * @date 06 Dic 2021
 * @brief Este programa muestra el mínimo, el máximo y la media de una secuencia de números.
 * @see [https://jutge.org/problems/P17179_en]
 */

#include <iostream>
#include <vector>

double Maximo(const double cantidad_numeros, const std::vector<double>& secuencia);
double Minimo(const double cantidad_numeros, const std::vector<double>& secuencia);
double Average(const double cantidad_numeros, const std::vector<double>& secuencia);