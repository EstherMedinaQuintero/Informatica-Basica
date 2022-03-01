/**
 * Universidad de La Laguna
 * Escuela Superior de Ingeniería y Tecnología
 * Grado en Ingeniería Informática
 * Informática Básica
 *
 * @author Esther M. Qunum_typeero
 * @date Ene 04 2021
 * @brief Clase Complejo
 */

#include <iostream>

#ifndef COMPLEJO_H
#define COMPLEJO_H

using num_type = int;

/**
 * @brief Clase Complejo
 */
class Complejo {
 private:
  num_type real_{};
  num_type imaginario_{};
 public:
  Complejo() : real_{0}, imaginario_{0} {
    // std::cout << "Ejecutado el constructor por defecto de Complejo." << std::endl;
  }
  Complejo(num_type real, num_type imaginario) : real_{real}, imaginario_{imaginario} {
    // std::cout << "Ejecutado el constructor con parámetros de Complejo." << std::endl;
  }
  num_type real() const { return real_; }
  num_type imaginario() const { return imaginario_; }
  void setReal(num_type real) { real_ = real; }
  void setImaginario(num_type imaginario) { imaginario_ = imaginario; }
  /// Operador entrada
  friend std::istream& operator>> (std::istream& in, Complejo& complejo);
};

/// Representar complejos
std::ostream& operator<< (std::ostream& out, const Complejo& complejo);
/// Suma de dos complejos
Complejo operator+(const Complejo& complejo, const Complejo& complejo2);
/// Resta de dos complejos
Complejo operator-(const Complejo& complejo, const Complejo& complejo2);
/// Producto de un número entero por un complejo
Complejo operator*(const Complejo& complejo, num_type numero);
Complejo operator*(num_type numero, const Complejo& complejo);
/// Producto de dos complejos
Complejo operator*(const Complejo& complejo1, const Complejo& complejo2);
/// Para comparar complejos
bool operator==(const Complejo& complejo1, const Complejo& complejo2);
bool operator!=(const Complejo& complejo1, const Complejo& complejo2);
/// División entre un complejo y un número
Complejo operator/(const Complejo& complejo, num_type numero);
/// Conjugado
Complejo Conjugado(const Complejo& complejo);
/// Valor absoluto
double valorabs(const Complejo& complejo);

#endif