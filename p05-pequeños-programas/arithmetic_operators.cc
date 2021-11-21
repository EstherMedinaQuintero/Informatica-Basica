/**
 * Universidad de La Laguna
 * Escuela Superior de Ingeniería y Tecnología
 * Grado en Ingeniería Informática
 * Informática Básica
 *
 * @author Esther M. Quintero
 * @date 03 Nov 2021
 * @brief Programa que declara y emplea variables aritméticas
 */

#include <iostream>

int PruebaPuntoFlotante() {
  double variable_prueba{0.1f};
  double suma{0};
  for (int contador{0}; contador < 10; ++contador) {
    suma += variable_prueba;
  }
  double producto{variable_prueba * 10};
  std::cout << "Mediante suma sale: " << suma << std::endl;
  std::cout << "Mediante producto sale: " << producto << std::endl;
  std::cout << "De forma directa sale: " << variable_prueba * 10 << std::endl;
  return 0;  
}

int main () {
  std::cout << "Este programa declara e inicializa variables aritmeticas y opera con ellas." << std::endl;
  int primera_variable{4};
  int segunda_variable{7};
  std::cout << "El resultado de operar " << primera_variable << " + " << segunda_variable << " es " << primera_variable + segunda_variable << std::endl;
  std::cout << "El resultado de operar " << primera_variable << " - " << segunda_variable << " es " << primera_variable - segunda_variable << std::endl;
  std::cout << "El resultado de operar " << primera_variable << " * " << segunda_variable << " es " << primera_variable * segunda_variable << std::endl;
  std::cout << "El resultado de operar " << primera_variable << " / " << segunda_variable << " es " << primera_variable / segunda_variable << std::endl;
  std::cout << "El resultado de operar " << primera_variable << " % " << segunda_variable << " es " << primera_variable % segunda_variable << std::endl;
  std::cout << "El resultado de operar " << primera_variable << " < " << segunda_variable << " es " << (primera_variable < segunda_variable) << std::endl;
  std::cout << "El resultado de operar " << primera_variable << " > " << segunda_variable << " es " << (primera_variable > segunda_variable) << std::endl;
  std::cout << "El resultado de operar " << primera_variable << " <= " << segunda_variable << " es " << (primera_variable <= segunda_variable) << std::endl;
  std::cout << "El resultado de operar " << primera_variable << " >= " << segunda_variable << " es " << (primera_variable >= segunda_variable) << std::endl;
  std::cout << "El resultado de operar " << primera_variable << " == " << segunda_variable << " es " << (primera_variable == segunda_variable) << std::endl;
  // PruebaPuntoFlotante();
  // FLT_EPSILON (diferencia entre flotantes)
  return 0;
}