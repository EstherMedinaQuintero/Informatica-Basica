/**
 * Universidad de La Laguna
 * Escuela Superior de Ingeniería y Tecnología
 * Grado en Ingeniería Informática
 * Informática Básica
 *
 * @author Esther M. Quintero
 * @date Ene 02 2021
 * @brief Implementación de la clase vector
 */

#include <iostream>
#include <cmath>

#include "vector.h"

/**
 * @brief Suma de dos vectores
 * @param[in] vector1: referencia (constante) al primer sumando
 * @param[in] vector2: referencia (constante) al segundo sumando
 */
Vector operator+(const Vector& vector1, const Vector& vector2) {
  Vector resultado{vector1.x() + vector2.x(), vector1.y() + vector2.y(), vector1.z() + vector2.z()};
  return resultado;
}

/**
 * @brief Resto de dos vectores
 * @param[in] vector1: referencia (constante) al primer vector
 * @param[in] vector2: referencia (constante) al segundo vector
 */
Vector operator-(const Vector& vector1, const Vector& vector2) {
  Vector resultado{vector1.x() - vector2.x(), vector1.y() - vector2.y(), vector1.z() - vector2.z()};
  return resultado;
}

/**
 * @brief Multiplicación de un vector por un escalar
 * @param[in] vector: referencia (constante) al primer sumando
 * @param[in] numero: escalar
 */
Vector operator*(const Vector& vector, double numero) {
  Vector resultado{numero * vector.x(), numero * vector.y(), numero * vector.z()};
  return resultado;
}

/**
 * @brief Multiplicación de un vector por un escalar
 * @param[in] numero: escalar
 * @param[in] vector: referencia (constante) al primer sumando
 */
Vector operator*(double numero, const Vector& vector) {
  return operator*(vector, numero);
}

/**
 * @brief Producto escalar de dos vectores
 * @param[in] vector1: referencia (constante) al primer vector
 * @param[in] vector2: referencia (constante) al segundo vector
 */
double operator*(const Vector& vector1, const Vector& vector2) {
  return (vector1.x() * vector2.x() + vector1.y() * vector2.y() + vector1.z() * vector2.z());
}

/**
 * @brief Módulo de un vector
 * @param[in] vector: referencia (constante) al vector
 */
double Vector::modulo() {
  return (sqrt(x_ * x_ + y_ * y_ + z_ * z_));
}

/**
 * @brief Vector unitario de un vector
 * @param[in] vector: referencia (constante) al vector
 */
Vector Vector::unitario() {
  double mod{(*this).modulo()};
  Vector resultado{(x_ / mod), (y_ / mod), (z_ / mod)};
  return resultado;
}

/**
 * @brief Para imprimir vectores
 * @param[in] vector: referencia (constante) al vector
 */
std::ostream& operator<< (std::ostream& out, const Vector& vector) {
  out << vector.x() << "i + " << vector.y() << "j + " << vector.z() << "k"; 
  return out;
}

/**
 * @brief Compara si dos vectores son iguales
 * @param[in] vector1: referencia (constante) al primer vector
 * @param[in] vector2: referencia (constante) al segundo vector
 */
bool operator== (const Vector& vector1, const Vector& vector2) {
  return (vector1.x() == vector2.x() && vector1.y() == vector2.y() && vector1.z() == vector2.z());
}

/**
 * @brief Compara si dos vectores no son iguales
 * @param[in] vector1: referencia (constante) al primer vector
 * @param[in] vector2: referencia (constante) al segundo vector
 */
bool operator!= (const Vector& vector1, const Vector& vector2) {
  return !operator==(vector1, vector2);
}