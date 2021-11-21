/**
 * Universidad de La Laguna
 * Escuela Superior de Ingeniería y Tecnología
 * Grado en Ingeniería Informática
 * Informática Básica
 *
 * @author Esther M. Quintero
 * @date 28 Oct 2021
 * @brief Programa que calcula la hipotenusa de un triángulo rectángulo
 */

#include <iostream>
#include <cmath>

int main () {
  std::cout << "Este programa calcula la hipotenusa de un triángulo rectángulo." << std::endl;
  double longitud_cateto_contiguo{0};
  std::cout << "Introduzca la longitud del cateto contiguo: ";
  std::cin >> longitud_cateto_contiguo;
  double longitud_cateto_opuesto{0};
  std::cout << "Introduzca la longitud del cateto opuesto: ";
  std::cin >> longitud_cateto_opuesto;
  double longitud_hipotenhusa{sqrt(longitud_cateto_contiguo*longitud_cateto_contiguo + longitud_cateto_opuesto*longitud_cateto_opuesto)};
  std::cout << "La hipotenusa del triángulo es " << longitud_hipotenhusa << std::endl;
  return 0;
}