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

int main() {
  int cantidad_numeros;
  while (std::cin >> cantidad_numeros) {
    std::vector<int> secuencia;
    for (int contador{0}; contador < cantidad_numeros; ++contador) {
      int numero_introducido;
      std::cin >> numero_introducido;
      secuencia.push_back(numero_introducido);
    }
    std::cout << MaximaCantidadIzquierda(secuencia) << " " << MaximaCantidadDerecha(secuencia) << std::endl;
  }
  return 0;
}