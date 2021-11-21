/**
 * Universidad de La Laguna
 * Escuela Superior de Ingeniería y Tecnología
 * Grado en Ingeniería Informática
 * Informática Básica
 *
 * @author Esther M. Quintero
 * @date 15 Nov 2021
 * @brief Programa que dados dos números naturales "a" y "b" calula su división entera y el resto.
 */

#include <iostream>

// @brief Esta función escribe el mensaje inicial con la explicación del programa
int MensajeInicial() {
  std::cout << "Este programa pide dos numeros naturales y muestra el resultado de su division y su resto." << std::endl;
  return 0;
}

// @brief Esta función devuelve la división entera entre dos números naturales
// @param primer_numero Es el numerador de la división
// @param segundo_numero Es el denominador de la división
int DivisionEntera(const int primer_numero, const int segundo_numero) {
  return primer_numero / segundo_numero;
}

// @brief Esta función devuelve el resto de la división entre dos números naturales
// @param primer_numero Es el numerador de la división
// @param segundo_numero Es el denominador de la división
int RestoDivision(const int primer_numero, const int segundo_numero) {
  return primer_numero % segundo_numero;
}

int main() {
  //MensajeInicial()
  int primer_numero;
  int segundo_numero;
  std::cin >> primer_numero >> segundo_numero;
  if (segundo_numero <= 0) {
    return 0;
  }
  std::cout << DivisionEntera(primer_numero, segundo_numero) << " " << RestoDivision(primer_numero, segundo_numero) << std::endl;
  return 0;
}