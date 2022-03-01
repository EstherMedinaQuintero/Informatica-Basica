/**
 * Universidad de La Laguna
 * Escuela Superior de Ingeniería y Tecnología
 * Grado en Ingeniería Informática
 * Informática Básica
 *
 * @author Esther M. Quintero
 * @date 06 Dic 2021
 * @see [https://jutge.org/problems/P71753_en]
 */

#include <iostream>

/** 
 *  @brief Esta función devuelve el máximo de una secuencia que recibirá.
 *  @param cantidad_numeros: Cantidad de números de la secuencia.
 *  @return Devuelve el máximo.
 */
int Maximo(int cantidad_numeros) {
  int maximo;
  std::cin >> maximo;
  int numero_introducido;
  for (int contador{0}; contador < cantidad_numeros - 1; ++contador) {
    std::cin >> numero_introducido;
    if (numero_introducido > maximo) {
      maximo = numero_introducido;
    }
  }
  return maximo;
}

int main() {
  int cantidad_numeros;
  while (std::cin >> cantidad_numeros) {
    std::cout << Maximo(cantidad_numeros) << std::endl;
  }
  return 0;
}