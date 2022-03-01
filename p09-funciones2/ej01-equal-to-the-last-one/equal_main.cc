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

int main() {
  int cantidad_numeros;
  std::cin >> cantidad_numeros;
  std::vector<int> secuencia_numeros{};
  for (int contador{0}; contador < cantidad_numeros; ++contador) {
    int numero_introducido;
    std::cin >> numero_introducido;
    secuencia_numeros.push_back(numero_introducido);
  }
  std::cout << CompararConUltimo(secuencia_numeros) << std::endl;
  return 0;
}
