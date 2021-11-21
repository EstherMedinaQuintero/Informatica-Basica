/**
 * Universidad de La Laguna
 * Escuela Superior de Ingeniería y Tecnología
 * Grado en Ingeniería Informática
 * Informática Básica
 *
 * @author Esther M. Quintero
 * @date 26 Oct 2021
 * @brief Programa que calcula el area y el perimetro de un cuadrado
 */

#include <iostream>

int main () {
  
  std::cout << "Este programa calcula el area y el perimetro de un cuadrado a partir de la longitud de uno de sus lados." << std::endl;
  
  float longitud_lado{0};
  std::cout << "Introduzca la longitud del lado del cuadrado (debe ser una cantidad positiva): ";
  std::cin >> longitud_lado;
  float area_cuadrado{longitud_lado * longitud_lado};
  std::cout << "El area del cuadrado es " << area_cuadrado << std::endl;
  float perimetro_cuadrado{4 * longitud_lado};
  std::cout << "El perimetro del cuadrado es " << perimetro_cuadrado << std::endl;

  return 0;
}