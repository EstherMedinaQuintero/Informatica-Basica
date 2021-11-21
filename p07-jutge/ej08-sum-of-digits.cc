/**
 * Universidad de La Laguna
 * Escuela Superior de Ingeniería y Tecnología
 * Grado en Ingeniería Informática
 * Informática Básica
 *
 * @author Esther M. Quintero
 * @date 15 Nov 2021
 * @brief Programa que suma los dígitos de un número
 */

#include <iostream>
#include <vector>

// @brief Esta función escribe el mensaje inicial con la explicación del programa
int MensajeInicial() {
  std::cout << "Este programa suma los dígitos de un número." << std::endl << "\n";
  return 0;
}

// @brief Esta función crea un vector con los dígitos de un número
// @param numero Es la número que divide en dígitos
std::vector<int> VectorDeDigitos(const int numero) {
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

// @brief Esta función devuelve la suma de los elementos de un vector de dígitos
// @param digitos Es el vector de dígitos
int SumaDigitos(const std::vector<int>& digitos) {
  int suma{0};
  int cantidad_digitos{int(digitos.size())};
  for (int contador{0}; contador < cantidad_digitos; ++contador) {
    suma += digitos[contador];
  }
  return suma;
}

int main() {
  //MensajeInicial()
  int numero_introducido;
  while (std::cin >> numero_introducido) {
    std::vector<int> digitos{VectorDeDigitos(numero_introducido)};
    std::cout << "The sum of the digits of " << numero_introducido << " is " << SumaDigitos(digitos) << "." << std::endl;
  }
  return 0;
}