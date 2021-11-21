/**
 * Universidad de La Laguna
 * Escuela Superior de Ingeniería y Tecnología
 * Grado en Ingeniería Informática
 * Informática Básica
 *
 * @author Esther M. Quintero
 * @date 03 Nov 2021
 * @brief Programa que imprime en pantalla la tabla de la verdad de los operadores lógicos de C++
 */

#include <iostream>

int LineaTablaVerdad(bool primera_variable, bool segunda_variable) {
  std::cout << primera_variable << "  " << !primera_variable << "   " << segunda_variable << "   " << (primera_variable && segunda_variable) << "     " << (primera_variable || segunda_variable) << std::endl;
  return 0;
}

int main () {
  std::cout << "Este programa imprime la tabla de la verdad de los operadores logicos de C++." << std::endl;
  std::cout << "P  !P  Q  P&&Q  P||Q" << std::endl;
  bool primera_variable{true};
  bool segunda_variable{true};
  LineaTablaVerdad(primera_variable, segunda_variable);
  segunda_variable = false;
  LineaTablaVerdad(primera_variable, segunda_variable);
  primera_variable = false;
  segunda_variable = true;
  LineaTablaVerdad(primera_variable, segunda_variable);
  segunda_variable = false;
  LineaTablaVerdad(primera_variable, segunda_variable);
  return 0;
}