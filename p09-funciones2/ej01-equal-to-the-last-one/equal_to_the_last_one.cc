/**
 * Universidad de La Laguna
 * Escuela Superior de Ingeniería y Tecnología
 * Grado en Ingeniería Informática
 * Informática Básica
 *
 * @author Esther M. Quintero
 * @date 03 Dic 2021
 * @brief Este programa primero lee un número que le indicará cuántos números se van a introducir a continuación. 
 *        Luego, de esa secuencia de números, va a indicar cuántos son iguales al último, sin contar ese.
 * @see [https://jutge.org/problems/P14130_en]
 */

#include "equal_to_the_last_one.h"

/** 
 *  @brief Esta función compara todos los números de una secuencia con el último.
 *  @param secuencia: Vector de números enteros.
 *  @return Devuelve la cantidad de números que son iguales al último.
 */
int CompararConUltimo(const std::vector<int>& secuencia) {
  const int kLongitud{int(secuencia.size())};
  const int kUltimo{secuencia[kLongitud - 1]};
  int cuantos_iguales{0};
  for (int contador{0}; contador < (kLongitud - 1); ++contador) {
    if (secuencia[contador] == kUltimo) {
      ++cuantos_iguales;
    }
  }
  return cuantos_iguales;
}