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

#include <iostream>
#include <vector>

using namespace std;

/** 
 *  @brief Esta función comprueba si un número está en un vector.
 *  @param x: Vector de números enteros.
 *  @param v: Número entero que va a revisar si está.
 *  @return Devuelve true si está y false si no.
 */
bool exists(int x, const vector<int>& v) {
  for (int contador{0}; contador < v.size(); ++contador) {
    if (v[contador] == x) {
      return true;
    }
  }
  return false;
}