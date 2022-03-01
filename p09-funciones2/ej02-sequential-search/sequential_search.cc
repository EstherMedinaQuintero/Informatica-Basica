/**
 * Universidad de La Laguna
 * Escuela Superior de Ingeniería y Tecnología
 * Grado en Ingeniería Informática
 * Informática Básica
 *
 * @author Esther M. Quintero
 * @date 03 Dic 2021
 * @see [https://jutge.org/problems/P11725_en]
 */

#include "sequential_search.h"

/** 
 *  @brief Esta función comprueba si un número está en un vector.
 *  @param secuencia: Vector de números enteros.
 *  @param numero: Número entero que va a revisar si está.
 *  @return Devuelve true si está y false si no.
 */
bool Existe(int numero, const std::vector<int>& secuencia) {
  for (int contador{0}; contador < int(secuencia.size()); ++contador) {
    if (secuencia[contador] == numero) {
      return true;
    }
  }
  return false;
}