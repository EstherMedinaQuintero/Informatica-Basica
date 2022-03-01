/**
 * Universidad de La Laguna
 * Escuela Superior de Ingeniería y Tecnología
 * Grado en Ingeniería Informática
 * Informática Básica
 *
 * @author Esther M. Quintero
 * @date 03 Dic 2021
 * @see [https://jutge.org/problems/P14130_en]
 */

#include <iostream>
#include <vector>

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