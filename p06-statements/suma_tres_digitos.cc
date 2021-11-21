/**
 * Universidad de La Laguna
 * Escuela Superior de Ingeniería y Tecnología
 * Grado en Ingeniería Informática
 * Informática Básica
 *
 * @author Esther M. Quintero
 * @date 07 Nov 2021
 * @brief Programa que suma los tres últimos dígitos de un número
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

int SumaTresUltimos(const std::vector<int>& digitos) {
  int suma{0};
  std::vector<int>::size_type cantidad_digitos{digitos.size()};
  if (cantidad_digitos >= 3) {
    suma += digitos[0] + digitos[1] + digitos[2];
  } else if (cantidad_digitos = 2) {
    suma += digitos[0] + digitos[1];
  } else {
    suma += digitos[0];
  }
  return suma;
}

int main() {
  std::cout << "Este programa muestra la suma de los tres ultimos digitos de un numero entero natural" << std::endl;
  int numero_introducido;
  std::cout << "Introduzca un numero entero natural: ";
  std::cin >> numero_introducido;
  std::vector<int> digitos{VectorDeDigitos(numero_introducido)};
  std::cout << "La suma de sus tres ultimos digitos es: " << SumaTresUltimos(digitos) << std::endl;
  return 0;
}