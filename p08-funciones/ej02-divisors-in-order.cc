/**
 * Universidad de La Laguna
 * Escuela Superior de Ingeniería y Tecnología
 * Grado en Ingeniería Informática
 * Informática Básica
 *
 * @author Esther M. Quintero
 * @date 21 Nov 2021
 * @brief Programa que muestra los divisores de un número introducido.
 */

#include <iostream>

/**
 * @brief Esta función escribe el mensaje inicial con la explicación del programa.
 */
int MensajeInicial() {
  std::cout << "Este programa muestra los divisores de un numero." << std::endl;
  return 0;
}

/**
 * @brief Esta función muestra los divisores de un número en order creciente.
 * @param numero: Es el número del que queremos buscar divisores.
 * @return No devuelve nada.
 */
int Divisores(const int numero) {
  int contador;
  for (contador = 1; (contador * contador) < numero; contador++) {
    if (numero % contador == 0) {
      std::cout << " " << contador;
    }
  }
  for ( ; contador >= 1; contador--) {
    if ((numero % contador == 0) and (numero / contador != contador - 1)) {
      std::cout << " " << numero / contador;
    }
  }
  return 0;
}

int main() {
  // MensajeInicial()
  int numero_introducido;
  while (std::cin >> numero_introducido) {
    std::cout << "divisors of " << numero_introducido << ":";
    Divisores(numero_introducido);
    std::cout << std::endl;
  }
  return 0;
}