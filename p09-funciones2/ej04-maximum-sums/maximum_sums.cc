/**
 * Universidad de La Laguna
 * Escuela Superior de Ingeniería y Tecnología
 * Grado en Ingeniería Informática
 * Informática Básica
 *
 * @author Esther M. Quintero
 * @date 05 Dic 2021
 * @brief Este programa dada una secuencia de números, muestra la máxima cantidad que se
 *        puede obtener sumando por ambos lados.
 * @see [https://jutge.org/problems/P20262_en]
 */

#include "maximum_sums.h"

/** 
 *  @brief Esta función va sumando desde la izquierda hasta la derecha.
 *  @param secuencia: Vector de números.
 *  @return Devuelve la mayor cantidad que se puede sumar desde la izquierda.
 */
int MaximaCantidadIzquierda(std::vector<int>& secuencia) {
  int suma{0};
  int suma_maxima{0};
  for (int contador{0}; contador < int(secuencia.size()); ++contador) {
    suma += secuencia[contador];
    if (suma >= suma_maxima) {
      suma_maxima = suma;
    }
  }
  return suma_maxima;
}

/** 
 *  @brief Esta función va sumando desde la derecha hasta la izquierda.
 *  @param secuencia: Vector de números.
 *  @return Devuelve la mayor cantidad que se puede sumar desde la derecha.
 */
int MaximaCantidadDerecha(std::vector<int>& secuencia) {
  int suma{0};
  int suma_maxima{0};
  for (int contador{int(secuencia.size() - 1)}; contador >= 0; --contador) {
    suma += secuencia[contador];
    if (suma >= suma_maxima) {
      suma_maxima = suma;
    }
  }
  return suma_maxima;
}