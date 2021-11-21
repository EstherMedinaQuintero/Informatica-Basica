/**
 * Universidad de La Laguna
 * Escuela Superior de Ingeniería y Tecnología
 * Grado en Ingeniería Informática
 * Informática Básica
 *
 * @author Esther M. Quintero
 * @date 16 Nov 2021
 * @brief Este programa, dados n dígitos entre 1 y 9 distintos, encuentra los múltiplos de 7 que se pueden formar con esos dígitos.
 */

#include <iostream>
#include <vector>
#include <algorithm>

// @brief Esta función escribe el mensaje inicial con la explicación del programa.
int MensajeInicial() {
  std::cout << "Este programa encuentra los multiplos de 7 que se pueden formar con n digtos." << std::endl << "\n";
  return 0;
}

int main() {
  //MensajeInicial
  int cantidad_numeros;
  std::cin >> cantidad_numeros;
  std::vector<int> numeros_introducidos{};
  for (int contador{1}; contador <= cantidad_numeros; ++contador) {
    int numero_introducido;
    std::cin >> numero_introducido;
    if ((find(numeros_introducidos.begin(), numeros_introducidos.end(), numero_introducido)) != numeros_introducidos.end()) {
      return 0;
    }
    numeros_introducidos.push_back(numero_introducido);
  }
  return 0;
}