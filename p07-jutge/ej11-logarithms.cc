/**
 * Universidad de La Laguna
 * Escuela Superior de Ingeniería y Tecnología
 * Grado en Ingeniería Informática
 * Informática Básica
 *
 * @author Esther M. Quintero
 * @date 18 Nov 2021
 * @brief Programa que calcula logaritmos en distintas bases
 */

#include <iostream>
#include <cmath>

// @brief Esta función escribe el mensaje inicial con la explicación del programa
int MensajeInicial() {
  std::cout << "Este programa pide dos numeros naturales y muestra el resultado de su division y su resto." << std::endl;
  return 0;
}

// @brief Esta canción calcula cuántas veces hay que elevar un número para que el exponente llegue al máximo.
// @param base Es la base que vamos a ir elevando
// @param Es el número al que queremos llegar elevando
int CuantasVecesHayQueElevar(const int base, const int maximo) {
  int exponente{0};
  int numero_elevado{base};
  for (int contador{0}; numero_elevado <= maximo; ++contador) {
    numero_elevado *= base;
    ++exponente;
  }
  return exponente;
}

int main() {
  // MensajeInicial()
  int base_introducida, resultado_introducido;
  while (std::cin >> base_introducida >> resultado_introducido) {
    if ((base_introducida >= 2) && (resultado_introducido >= 1)) {
      std::cout << CuantasVecesHayQueElevar(base_introducida, resultado_introducido) << std::endl;
    }
  }
  return 0;
}