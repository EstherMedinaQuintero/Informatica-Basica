/**
 * Universidad de La Laguna
 * Escuela Superior de Ingeniería y Tecnología
 * Grado en Ingeniería Informática
 * Informática Básica
 *
 * @author Esther M. Quintero
 * @date 26 Oct 2021
 * @brief Programa que calcula la media de 3 calificaciones
 */

#include <iostream>

int main () {
  
  std::cout << "Este programa calcula la media entre tres calificaciones introducidas por el usuario." << std::endl;
  
  float primera_calificacion{0.0};
  std::cout << "Introduzca la primera calificacion (debe ser un valor entre 0 y 10): ";
  std::cin >> primera_calificacion;
  float segunda_calificacion{0.0};
  std::cout << "Introduzca la segunda calificacion (debe ser un valor entre 0 y 10): ";
  std::cin >> segunda_calificacion;
  float tercera_calificacion{0.0};
  std::cout << "Introduzca la tercera calificacion (debe ser un valor entre 0 y 10): ";
  std::cin >> tercera_calificacion;

  float media_calificaciones{(primera_calificacion + segunda_calificacion + tercera_calificacion)/3};
  std::cout << "La media es " << media_calificaciones << std::endl;

  return 0;
}