/**
 * Universidad de La Laguna
 * Escuela Superior de Ingeniería y Tecnología
 * Grado en Ingeniería Informática
 * Informática Básica
 *
 * @author Esther M. Quintero
 * @date 19 Nov 2021
 * @brief Programa imprime todos los números que hay en un intervalo
 */

#include <iostream>

// @brief Esta función escribe el mensaje inicial con la explicación del programa
int MensajeInicial() {
  std::cout << "Este programa imprime todos los numeros que hay en un intervalo." << std::endl;
  return 0;
}

// @brief 
// @param
int MuestraIntervalo(const int primer_numero, const int segundo_numero) {
  if (primer_numero <= segundo_numero) {
    for (int contador{primer_numero}; contador < segundo_numero; ++contador) {
      std::cout << contador << ",";
    }
    std::cout << segundo_numero << std::endl;
  } else {
    std::cout << std::endl;
  }
  return 0;
}

int main() {
  // MensajeInicial()
  int primer_numero, segundo_numero;
  std::cin >> primer_numero >> segundo_numero;
  MuestraIntervalo(primer_numero, segundo_numero);
  return 0;
}