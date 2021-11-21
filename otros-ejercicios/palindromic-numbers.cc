/**
 * Universidad de La Laguna
 * Escuela Superior de Ingeniería y Tecnología
 * Grado en Ingeniería Informática
 * Informática Básica
 *
 * @author Esther M. Quintero
 * @date 19 Nov 2021
 * @brief Programa que muestra un número palindrómico.
 */

#include <iostream>
#include <cstring>
#include <algorithm>

// @brief Esta función comprueba si un número es primo o no
// @param numero Es el número a comprobar
bool EsPrimo(const int& numero) {
  if (numero == 0 || numero == 1 || numero == 4) {
    return false; 
  } 
  for (int contador{2}; contador < (numero / 2); contador++) {
    if (numero % contador == 0) {
      return false;
    }
  }
  return true;
}

// @brief Esta función comprueba si un número es palíndromo
// @param numero Es el número que comprueba
bool EsPalindromo(const int& numero) {
  std::string cadena_numero{std::to_string(numero)};
  std::string invertido(cadena_numero.rbegin(), cadena_numero.rend());
  return (cadena_numero == invertido);
}

int main() {
  int numero_introducido;
  while (std::cin >> numero_introducido) {
    bool condicion{true};
    int posicion_palindroma{0};
    for (int contador{1}; condicion; ++contador) {
      if ((contador % 2 != 0) and (contador % 11 != 0) and !(1000 <= contador <= 1999) and !(100000 <= contador <= 199999) and !(10000000 <= contador <= 19999999)) {
        if ((EsPrimo(contador)) && (EsPalindromo(contador))) {
          ++posicion_palindroma;
        }
        if (posicion_palindroma == numero_introducido) {
          std::cout << contador << std::endl;
          condicion = false;
        }
      }
    }
  }
  return 0;
}

