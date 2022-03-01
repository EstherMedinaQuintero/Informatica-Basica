/**
 * Universidad de La Laguna
 * Escuela Superior de Ingeniería y Tecnología
 * Grado en Ingeniería Informática
 * Informática Básica
 *
 * @author Esther M. Quintero
 * @date 22 Nov 2021
 * @brief Programa que comprueba si una serie de paréntesis están bien cerrados.
 */

#include <iostream>
#include <cstring>

/**
 * @brief Esta función escribe el mensaje inicial con la explicación del programa.
 */
int MensajeInicial() {
  std::cout << "Este programa indica si un string tiene una a o no." << std::endl;
  return 0;
}

/**
 * @brief Comprueba si el nuevo paréntesis es abierto.
 * @param nuevo_parentesis: Paréntesis que comprueba.
 * @return Devuelve 1 si es abierto y 0 si no.
 */
int CuentaParentesisAbiertos(const char nuevo_parentesis) {
  int letra{nuevo_parentesis};
  if (letra == '(') {
    return 1;
  } else {
    return 0;
  }
}

/**
 * @brief Comprueba si el nuevo paréntesis es cerrado.
 * @param nuevo_parentesis: Paréntesis que comprueba.
 * @return Devuelve 1 si es cerrado y 0 si no.
 */
int CuentaParentesisCerrados(const char nuevo_parentesis) {
  int letra{nuevo_parentesis};
  if (letra == ')') {
    return 1;
  } else {
    return 0;
  }
}

/**
 * @brief Imprime la solución (si los paréntesis están bien cerrados o no).
 * @param bien_cerrados: Booleano que indica si están bien cerrados o no.
 * @return No devuelve nada.
 */
void ImprimeSolucion(const bool bien_cerrados) {
  if (bien_cerrados == true) {
    std::cout << "yes" << std::endl;
  } else {
    std::cout << "no" << std::endl;
  }
}

int main() {
  // MensajeInicial()
  int parentesis_abiertos{0};
  int parentesis_cerrados{0};
  bool estan_bien_cerrados{true};
  char ultima_letra_introducida;
  while (std::cin.peek() != '\n') {
    char nueva_letra;
    std::cin >> nueva_letra;
    ultima_letra_introducida = nueva_letra;
    if (nueva_letra == ')' && parentesis_abiertos == parentesis_cerrados) {
      estan_bien_cerrados = false;
    }
    parentesis_abiertos += CuentaParentesisAbiertos(nueva_letra);
    parentesis_cerrados += CuentaParentesisCerrados(nueva_letra);
  }
  if (ultima_letra_introducida == '(' || parentesis_abiertos != parentesis_cerrados) {
    estan_bien_cerrados = false;
  }
  ImprimeSolucion(estan_bien_cerrados);
  return 0;
}