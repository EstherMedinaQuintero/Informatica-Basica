/**
 * Universidad de La Laguna
 * Escuela Superior de Ingeniería y Tecnología
 * Grado en Ingeniería Informática
 * Informática Básica
 *
 * @author Esther M. Quintero
 * @date 09 Nov 2021
 * @brief Programa que, dada una serie de palabras, indica cuál es la más larga y cuál la más corta
 */

#include <iostream>
#include <string>

int main() {
  std::cout << "Este programa indica que palabra es mas larga y que palabra es mas corta" << std::endl;
  int numero_palabras;
  std::cout << "Introduzca un numero entero que simbolice la cantidad de palabras que desea introducir: ";
  std::cin >> numero_palabras;
  int longitud_minima{1000};
  int longitud_maxima{0};
  std::string palabra_introducida{""};
  std::string palabras_mas_larga{""};
  std::string palabras_mas_corta{""};
  for (int contador{1}; contador <= numero_palabras; ++contador) {
    std::cout << "Introduzca una palabra: ";
    std::cin >> palabra_introducida;
    std::cout << "Palabra introducida: " << palabra_introducida << std::endl;
    if (palabra_introducida.length() < longitud_minima) {
      longitud_minima = palabra_introducida.length();
      palabras_mas_corta = palabra_introducida;
    }
    if (palabra_introducida.length() > longitud_maxima) {
      longitud_maxima = palabra_introducida.length();
      palabras_mas_larga = palabra_introducida;
    }
  }
  std::cout << "La palabra mas corta es: " << palabras_mas_corta << std::endl;
  std::cout << "La palabra mas larga es: " << palabras_mas_larga << std::endl;
  return 0;
}