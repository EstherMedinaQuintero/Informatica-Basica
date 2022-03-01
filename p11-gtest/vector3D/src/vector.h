/**
 * Universidad de La Laguna
 * Escuela Superior de Ingeniería y Tecnología
 * Grado en Ingeniería Informática
 * Informática Básica
 *
 * @author Esther M. Quintero
 * @date Ene 02 2021
 * @brief Clase vector
 */

#ifndef VECTOR_H
#define VECTOR_H

/**
 * @brief Tipo vector
 */
class Vector {
 public:
  Vector() : x_{0.0}, y_{0.0}, z_{0.0} {
    // std::cout << "Ejecutado el constructor por defecto de Vector." << std::endl;
  }       
  Vector(double x, double y, double z) : x_{x}, y_{y}, z_{z} {
    // std::cout << "Ejecutado el constructor con parámetros de Vector." << std::endl;
  }
  double x() const { return x_; } // Getter
  double y() const { return y_; }
  double z() const { return z_; }
  /// Normalizar un vector
  Vector unitario();
  /// Módulo de un vector
  double modulo();
 private:
  double x_; /// Componente x
  double y_; /// Componente y
  double z_; /// Componente z
};

/// Suma de dos vectores
Vector operator+(const Vector& vector1, const Vector& vector2);
/// Resta de dos vectores
Vector operator-(const Vector& vector1, const Vector& vector2);
/// Producto de un número real por un vector
Vector operator*(const Vector& vector, double numero);
Vector operator*(double numero, const Vector& vector);
/// Producto escalar de dos vectores
double operator*(const Vector& vector1, const Vector& vector2);
/// Para imprimir los vectores
std::ostream& operator<< (std::ostream& out, const Vector& vector);
/// Para comparar vectores
bool operator== (const Vector& vector1, const Vector& vector2);
bool operator!= (const Vector& vector1, const Vector& vector2);

#endif