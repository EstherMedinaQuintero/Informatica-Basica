/**
 * Universidad de La Laguna
 * Escuela Superior de Ingeniería y Tecnología
 * Grado en Ingeniería Informática
 * Informática Básica
 *
 * @author Esther M. Quintero
 * @date 04 Nov 2021
 * @brief Programa que toma como entradas un par de números enteros a, b y para cada par calcula a^b.
 */

#include <iostream>
#include <cmath>

int main () {
  std::cout << "Este programa pide dos numeros enteros y calcula la potencia primero^(segundo)." << std::endl;
  int primer_numero{0};
  int segundo_numero{0};
  std::cout << "Introduzca un numero entero: ";
  std::cin >> primer_numero;
  std::cout << "Introduzca otro numero entero: ";
  std::cin >> segundo_numero;
  std::cout << "Entrada    Salida" << std::endl;
  std::cout << primer_numero << "  " << segundo_numero << "         " << pow(primer_numero, segundo_numero) << std::endl;
  return 0;
}