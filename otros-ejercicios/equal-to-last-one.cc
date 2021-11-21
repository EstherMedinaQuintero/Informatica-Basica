/**
 * Universidad de La Laguna
 * Escuela Superior de Ingeniería y Tecnología
 * Grado en Ingeniería Informática
 * Informática Básica
 *
 * @author Esther M. Quintero
 * @date 19 Nov 2021
 * @brief Programa que compara una serie de números con el último y menciona cuántos son iguales a este
 */

#include <iostream>
#include <vector>

int CuantosIgualesAlUltimo(const std::vector<int>& numeros, const int cantidad_numeros) {
  int cuantos_iguales_al_ultimo{0};
  for (int contador{0}; contador < (cantidad_numeros - 1); ++contador) {
    if (numeros[contador] == numeros[(cantidad_numeros - 1)]) {
      ++cuantos_iguales_al_ultimo;
    }
  }
  return cuantos_iguales_al_ultimo;
}

int main() {
  int cantidad_a_introducir{};
  std::cin >> cantidad_a_introducir;
  std::vector<int> numeros_introducidos{};
  for (int contador{0}; contador < cantidad_a_introducir; ++contador) {
    int numero_introducido;
    std::cin >> numero_introducido;
    numeros_introducidos.push_back(numero_introducido);
    //std::cout << "Numero añadido: " << numeros_introducidos[contador] << std::end;
  }
  //std::cout << cuantos_iguales_al_ultimo << std::endl;
  std::cout << CuantosIgualesAlUltimo(numeros_introducidos, cantidad_a_introducir) << std::endl;
  return 0;
}