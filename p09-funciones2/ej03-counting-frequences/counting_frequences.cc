/**
 * Universidad de La Laguna
 * Escuela Superior de Ingeniería y Tecnología
 * Grado en Ingeniería Informática
 * Informática Básica
 *
 * @author Esther M. Quintero
 * @date 05 Dic 2021
 * @brief Este programa indica cuántas veces se repite un número natural
 *        comprendido entre 1000000000 y 1000001000.
 * @see [https://jutge.org/problems/P63414_en]
 */

#include "counting_frequences.h"

/** 
 *  @brief Esta función suma en la posición que corresponde para saber cuántas veces
 *         se repiten los números que va introduciendo el usuario.
 *  @param secuencia: Vector de 1001 posiciones con un 0.
 */
int LeerDatos(std::vector<int>& secuencia) {
  int tamanio;
  std::cin >> tamanio;
  int numero_introducido;
  for (int contador{0}; contador < tamanio; ++contador) {
    std::cin >> numero_introducido;
    ++secuencia[numero_introducido%100000];
  }
  return 0;
}

/** 
 *  @brief Esta función imprime las posiciones que no tienen un 0.
 *  @param secuencia: Vector de números de 1001 posiciones.
 */
int ImprimirDatos(const std::vector<int>& secuencia) {
  for (int contador{0}; contador < 1001; ++contador) {
    if (secuencia[contador] != 0) {
      std::cout << 1000000000 + contador << " : " << secuencia[contador] << std::endl;
    }
  }
  return 0;
}