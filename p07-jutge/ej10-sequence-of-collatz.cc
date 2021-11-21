/**
 * Universidad de La Laguna
 * Escuela Superior de Ingeniería y Tecnología
 * Grado en Ingeniería Informática
 * Informática Básica
 *
 * @author Esther M. Quintero
 * @date 15 Nov 2021
 * @brief Programa que muestra cuántos pasos hacen falta para llegar a 1 en la secuencia de Collatz
 */

#include <iostream>

// @brief Esta función escribe el mensaje inicial con la explicación del programa
int MensajeInicial() {
  std::cout << "Este programa muestra cuantos pasos hacen falta para llegar a 1 en la secuencia de Collatz" << std::endl;
  return 0;
}

// @brief Esta función devuelve la cantidad de pasos que se necesitan para acabar la secuencia de Collatz
// @param numero Es el número al que se le aplica la secuencia
int CantidadPasosCollatz(int numero) {
  int contador_pasos{0};
  while (numero != 1) {
    if (numero % 2 == 0) {
      numero /= 2;
      ++contador_pasos;
    } else {
      numero *= 3;
      ++numero;
      ++contador_pasos;
    }
  }
  return contador_pasos;
}

int main() {
  int numero_introducido;
  while (std::cin >> numero_introducido) {
    std::cout << CantidadPasosCollatz(numero_introducido) << std::endl;
  }
  return 0;
}