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

#include "sum_of_fractions.h"

/** 
 *  @brief Esta función va sumando términos de la serie hasta que el denominador supera el límite.
 *  @param primer_numero: Primer término del denominador.
 *  @param limite: El máximo al que puede llegar el denominador.
 *  @param numero_a_sumar: Número que se le va sumando al denominador.
 *  @return Devuelve el mayor término de la serie que cumple con la condición.
 */
double Fraccion(int primer_numero, int limite, int numero_a_sumar) {
  double suma{0.0};
  int contador{0};
  while ((primer_numero + contador * numero_a_sumar) <= limite) {
    suma += 1.0 / double(primer_numero + contador * numero_a_sumar);
    ++contador;
  }
  return suma;
}