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

#include "statistical_measures.h"

/** 
 *  @brief Esta función calcula el máximo de una secuencia.
 *  @param cantidad_numeros: Longitud de la secuencia.
 *  @param secuencia: Vector de números.
 *  @return Devuelve el máximo.
 */
double Maximo(const double cantidad_numeros, const std::vector<double>& secuencia) {
  double maximo{secuencia[0]};
  for (int contador{1}; contador < cantidad_numeros; ++contador) {
    if (maximo < secuencia[contador]) {
      maximo = secuencia[contador];
    }
  }
  return maximo;
}

/** 
 *  @brief Esta función calcula el mínimo de una secuencia.
 *  @param cantidad_numeros: Longitud de la secuencia.
 *  @param secuencia: Vector de números.
 *  @return Devuelve el mínimo.
 */
double Minimo(const double cantidad_numeros, const std::vector<double>& secuencia) {
  double minimo{secuencia[0]};
  for (int contador{1}; contador < cantidad_numeros; ++contador) {
    if (minimo > secuencia[contador]) {
      minimo = secuencia[contador];
    }
  }
  return minimo;
}

/** 
 *  @brief Esta función calcula la media de una secuencia.
 *  @param cantidad_numeros: Longitud de la secuencia.
 *  @param secuencia: Vector de números.
 *  @return Devuelve la media.
 */
double Average(const double cantidad_numeros, const std::vector<double>& secuencia) {
  double suma{0};
  for (int contador{0}; contador < int(cantidad_numeros); ++contador) {
    suma += secuencia[contador];
  }
  return suma / cantidad_numeros;
}