/**
 * Universidad de La Laguna
 * Escuela Superior de Ingeniería y Tecnología
 * Grado en Ingeniería Informática
 * Informática Básica
 *
 * @author Esther M. Quintero
 * @date 05 Dic 2021
 * @brief Este programa, dados tres números (a, b y k), calcula el resultado de hacer 
 *        1/a + 1/(a+k) + 1/(a+2k)... hasta que el denominador sea menor o igual a b.
 * @see [https://jutge.org/problems/P76024_en]
 */

#include <iostream>
#include <iomanip>

double Fraccion(int primer_numero, int limite, int numero_a_sumar);