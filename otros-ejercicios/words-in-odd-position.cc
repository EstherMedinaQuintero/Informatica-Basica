/**
 * Universidad de La Laguna
 * Escuela Superior de Ingeniería y Tecnología
 * Grado en Ingeniería Informática
 * Informática Básica
 *
 * @author Esther M. Quintero
 * @date 19 Nov 2021
 * @brief Programa que muestra (en orden inverso) las palabras que están en una posición impar
 */

#include <iostream>
#include <cstring>
#include <vector>

int main() {
  std::string palabra_introducida;
  std::vector<std::string> palabras_posicion_impar;
  int posicion{1};
  while(getline(std::cin, palabra_introducida)) {
    if (palabra_introducida == ".") {
      break;
    }
    if (posicion % 2 != 0) {
      palabras_posicion_impar.push_back(palabra_introducida);
    }
    ++posicion;
  }
  if (palabras_posicion_impar.size() < 1) {
    return 0;
  }
  for (int contador{int(palabras_posicion_impar.size() - 1)}; contador >= 0; --contador) {
    std::cout << palabras_posicion_impar[contador] << std::endl;
  }
  return 0;
}