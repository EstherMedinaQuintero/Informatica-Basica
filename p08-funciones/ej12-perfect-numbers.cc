/**
 * Universidad de La Laguna
 * Escuela Superior de Ingeniería y Tecnología
 * Grado en Ingeniería Informática
 * Informática Básica
 *
 * @author Esther M. Quintero
 * @date 25 Nov 2021
 * @brief Programa que comprueba si número es perfecto.
 */

#include <iostream>

/**
 * @brief Esta función escribe el mensaje inicial con la explicación del programa.
 */
int MensajeInicial() {
  std::cout << "Este programa comprueba si un numero es perfecto." << std::endl;
  return 0;
}

/**
 * @brief Esta función comprueba si un número es perfecto. 
 * @param numero El número que va a comprobar.
 * @return true Si es perfecto
 * @return false Si no es perfecto.
 */
bool is_perfect(int numero) {
  if (numero == 0) {
    return false;
  }
  int suma{0};
  int contador;
  for (contador = 1; (contador * contador) < numero; contador++) {
    if (numero % contador == 0) {
      suma += contador;
    }
  }
  for ( ; contador >= 1; contador--) {
    if ((numero % contador == 0) and (numero / contador != contador - 1)) {
      suma += numero / contador;
    }
  }
  suma -= numero;
  return (suma == numero);
}

int main() {
  // MensajeInicial()
  int numero_introducido{};
  std::cin >> numero_introducido;
  std::cout << is_perfect(numero_introducido) << std::endl;
  return 0;
}

