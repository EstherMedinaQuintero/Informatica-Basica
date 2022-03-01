/**
 * Universidad de La Laguna
 * Escuela Superior de Ingeniería y Tecnología
 * Grado en Ingeniería Informática
 * Informática Básica
 *
 * @author Esther M. Quintero
 * @date Ene 02 2021
 * @brief Programa cliente de la clase vector
 *
 */

#include <iostream>

#include "vector.h"
 
int main() {
  std::cout << "Programa cliente de la clase vector" << std::endl;
  Vector vector1(1.0, 2.0, 3.0);
	std::cout << "Primer vector: " << vector1 << std::endl;
  Vector vector2{vector1};
	std::cout << "Segundo vector: " << vector2 << std::endl;
  Vector vector3;
	std::cout << "Tercer vector: " << vector3 << std::endl;
  vector3 = vector1 + vector2;       // vector3.operator=(operator+(vector1, vector2))
  std::cout << "Suma de vectores: " << vector3 << std::endl;
  double escalar = vector1 * vector2;      // calls operator*(vector1, vector2)
	std::cout << "Producto escalar de dos vectores: " << escalar << std::endl;
  std::cout << "Vector por escalar: " << vector1 * 2.0 << std::endl;
	std::cout << "Unitario de un vector: " << vector1.unitario() << std::endl;
	std::cout << "Modulo de un vector: " << vector1.modulo() << std::endl;
  return 0;
}

