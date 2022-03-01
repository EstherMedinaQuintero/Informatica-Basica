/**
 * Universidad de La Laguna
 * Escuela Superior de Ingeniería y Tecnología
 * Grado en Ingeniería Informática
 * Informática Básica
 *
 * @author Esther M. Quintero
 * @date 06 Dic 2021
 * @see [https://jutge.org/problems/P26492_en]
 */

#include <iostream>

/** 
 *  @brief Esta función comprueba si un número está balanceado.
 *  @param n: Número a comprobar.
 *  @return Devuelve true si lo está y false si no.
 */
bool is_balanced(int n) {
  int suma_pares{0}, suma_impares{0}, digito{0}, copia_n{n}, contador{1};
  while (copia_n > 0) {
    digito = copia_n % 10;
    copia_n = copia_n / 10;
    if (contador % 2 == 0) {
      suma_impares += digito;
    } else {
      suma_pares += digito;
    }
    ++contador;
  }
  if (suma_pares == suma_impares) {
    return true;
  } else {
    return false;
  }
}

int main() {
  int numero_introducido;
  std::cin >> numero_introducido;
  std::cout << is_balanced(numero_introducido) << std::endl;
  return 0;
}