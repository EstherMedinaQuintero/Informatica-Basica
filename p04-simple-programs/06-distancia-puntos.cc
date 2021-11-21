/**
 * Universidad de La Laguna
 * Escuela Superior de Ingeniería y Tecnología
 * Grado en Ingeniería Informática
 * Informática Básica
 *
 * @author Esther M. Quintero
 * @date 26 Oct 2021
 * @brief Programa que calcula la distancia entre dos puntos
 */

#include <iostream>
#include <cmath>

int main () {
  
  std::cout << "Este programa calcula la distancia entre dos puntos dados por el usuario." << std::endl;
  
  float primera_coordenada_a{0};
  std::cout << "Introduzca la primera coordenada (x) del primer punto (A): ";
  std::cin >> primera_coordenada_a;
  float segunda_coordenada_a{0};
  std::cout << "Introduzca la segunda coordenada (y) del primer punto (A): ";
  std::cin >> segunda_coordenada_a;
  float tercera_coordenada_a{0};
  std::cout << "Introduzca la primera coordenada (z) del primer punto (A): ";
  std::cin >> tercera_coordenada_a;

  float primera_coordenada_b{0};
  std::cout << "Introduzca la primera coordenada (x) del segundo punto (B): ";
  std::cin >> primera_coordenada_b;
  float segunda_coordenada_b{0};
  std::cout << "Introduzca la segunda coordenada (y) del segundo punto (B): ";
  std::cin >> segunda_coordenada_b;
  float tercera_coordenada_b{0};
  std::cout << "Introduzca la primera coordenada (z) del segundo punto (B): ";
  std::cin >> tercera_coordenada_b;

  double distancia_entre_puntos{sqrt((primera_coordenada_b-primera_coordenada_a) + (segunda_coordenada_b-segunda_coordenada_a) + (tercera_coordenada_b-tercera_coordenada_a))};
  std::cout << "La distancia entre los puntos es " << distancia_entre_puntos << std::endl;

  return 0;
}