/**
 * Universidad de La Laguna
 * Escuela Superior de Ingeniería y Tecnología
 * Grado en Ingeniería Informática
 * Informática Básica
 *
 * @author Esther M. Quintero
 * @date 22 Nov 2021
 * @brief Programa que muestra el valor del polinomio de Taylor n de la función e^x.
 */

#include <iostream>
#include <iomanip>

/**
 * @brief Esta función escribe el mensaje inicial con la explicación del programa.
 */
int MensajeInicial() {
  std::cout << "Este programa muestra el valor del polinomio de Taylor n de la funcion e^x." << std::endl;
  return 0;
}

/**
 * @brief Esta función calcula un término del polinomio de Taylor de la exponencial.
 * @param numero: Valor de la de la exponencial.
 * @return Devuelve el valor aproximado mediante Taylor.
 */
double AproximacionExponencial(const int numero) {
  double suma{0.0};
  double factorial{1.0};
  for(int contador{1}; contador <= numero; ++contador) {
    suma += 1 / (factorial);
    factorial *= double(contador);
  }
  return suma;
}

int main() {
  // MensajeInicial()
  int numero_introducido;
  while (std::cin >> numero_introducido) {
    std::cout << "With " << numero_introducido << " term(s) we get ";
    std::cout << std::fixed << std::setprecision(10) << AproximacionExponencial(numero_introducido) << "." << std::endl;
  }
  return 0;
}