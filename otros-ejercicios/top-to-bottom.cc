/**
 * Universidad de La Laguna
 * Escuela Superior de Ingeniería y Tecnología
 * Grado en Ingeniería Informática
 * Informática Básica
 *
 * @author Esther M. Quintero
 * @date 18 Nov 2021
 * @brief Este programa, dados dos números naturales, muestra los que están en medio en orden decreciente.
 */

#include <iostream>

// @brief Esta función escribe el mensaje inicial con la explicación del programa.
int MensajeInicial() {
  std::cout << "Este programa muestra los numeros que estan entre dos naturales en orden decreciente." << std::endl << "\n";
  return 0;
}

int ColocarMenorPrimero(int& primer_numero, int& segundo_numero) {
  int numero_provisional{primer_numero};
  if (segundo_numero < primer_numero) {
    primer_numero = segundo_numero;
    segundo_numero = numero_provisional;
  }
  return 0;
}

int ImrpimirNumerosDecreciente(const int primer_numero, const int segundo_numero) {
  for (int contador{segundo_numero}; contador >= primer_numero; --contador) {
    std::cout << contador << std::endl;
  }
  return 0;
}

int main () {
  int primer_numero, segundo_numero;
  std::cin >> primer_numero >> segundo_numero;
  ColocarMenorPrimero(primer_numero, segundo_numero);
  ImrpimirNumerosDecreciente(primer_numero, segundo_numero);
  return 0;
}