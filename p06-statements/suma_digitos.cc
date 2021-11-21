/**
 * Universidad de La Laguna
 * Escuela Superior de Ingeniería y Tecnología
 * Grado en Ingeniería Informática
 * Informática Básica
 *
 * @author Esther M. Quintero
 * @date 07 Nov 2021
 * @brief Programa que suma los dígitos de un número
 */

#include <iostream>
#include <vector>

std::vector<int> VectorDeDigitos(const int& numero) {
  const int kDivisor{10};
  int copia_numero{numero};
  std::vector<int> digitos = {};
  while (copia_numero) {
    int digito{copia_numero % kDivisor};
    digitos.push_back(digito);
    copia_numero /= kDivisor;
  }
  return digitos;
}

int SumaDigitos(const std::vector<int>& digitos) {
  int suma{0};
  std::vector<int>::size_type cantidad_digitos{digitos.size()};
  for (int contador{0}; contador < cantidad_digitos; ++contador) {
    suma += digitos[contador];
  }
  return suma;
}

int main() {
  std::cout << "Este programa muestra la suma de los digitos de un numero entero natural" << std::endl;
  int numero_introducido;
  std::cout << "Introduzca un numero entero natural: ";
  std::cin >> numero_introducido;
  std::vector<int> digitos{VectorDeDigitos(numero_introducido)};
  std::cout << "La suma de sus digitos es: " << SumaDigitos(digitos) << std::endl;
  return 0;
}