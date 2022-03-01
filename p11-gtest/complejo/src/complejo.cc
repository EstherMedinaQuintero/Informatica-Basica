/**
 * Universidad de La Laguna
 * Escuela Superior de Ingeniería y Tecnología
 * Grado en Ingeniería Informática
 * Informática Básica
 *
 * @author Esther M. Quintero
 * @date Ene 04 2021
 * @brief Implementación de la clase complejo
 */

#include <iostream>
#include <cmath>

#include "complejo.h"

/**
 * @brief Suma de dos complejos
 * @param[in] complejo1: referencia (constante) al primer complejo.
 * @param[in] complejo2: referencia (constante) al segundo complejo.
 */
Complejo operator+(const Complejo& complejo1, const Complejo& complejo2) {
  return Complejo{complejo1.real() + complejo2.real(), complejo1.imaginario() + complejo2.imaginario()};
}

/**
 * @brief Resta de dos complejos
 * @param[in] complejo1: referencia (constante) al primer complejo.
 * @param[in] complejo2: referencia (constante) al segundo complejo.
 */
Complejo operator-(const Complejo& complejo1, const Complejo& complejo2) {
  return Complejo{complejo1.real() - complejo2.real(), complejo1.imaginario() - complejo2.imaginario()};
}

/**
 * @brief Multiplicación de un complejo por un número
 * @param[in] complejo: referencia (constante) al complejo.
 * @param[in] numero: número por el que se multiplica.
 */
Complejo operator*(const Complejo& complejo, num_type numero) {
  return Complejo{complejo.real() * numero, complejo.imaginario() * numero};
}

/**
 * @brief Multiplicación de un complejo por un número
 * @param[in] numero: número por el que se multiplica.
 * @param[in] complejo: referencia (constante) al complejo.
 */
Complejo operator*(num_type numero, const Complejo& complejo) {
  return operator*(complejo, numero);
}

/**
 * @brief Para representar complejos
 * @param[in] complejo: referencia (constante) al complejo.
 */
std::ostream& operator<< (std::ostream& out, const Complejo& complejo) {
  if (complejo.real() == 0) {
    out << "0";
  } else {
    out << complejo.real();
  }
  if (complejo.imaginario() >= 0) {
    out << " +" << complejo.imaginario() << "i";
  } else if (complejo.imaginario() < 0) {
    out << " " << complejo.imaginario() << "i";
  }
  return out;
}

/**
 * @brief Para comparar complejos
 * @param[in] complejo1: referencia (constante) al primer complejo.
 * @param[in] complejo2: referencia (constante) al segundo complejo.
 * @return Devuelve true si son iguales y false si no.
 */
bool operator== (const Complejo& complejo1, const Complejo& complejo2) {
  return (complejo1.real() == complejo2.real() and complejo1.imaginario() == complejo2.imaginario());
}

/**
 * @brief Para comparar complejos
 * @param[in] complejo1: referencia (constante) al primer complejo.
 * @param[in] complejo2: referencia (constante) al segundo complejo.
 * @return Devuelve true si son distintos y false si no.
 */
bool operator!= (const Complejo& complejo1, const Complejo& complejo2) {
  return !operator==(complejo1, complejo2);
}

/**
 * @brief División de un complejo entre un número
 * @param[in] numero: número por el que se multiplica.
 * @param[in] complejo: referencia (constante) al complejo.
 */
Complejo operator/(const Complejo& complejo, num_type numero) {
  return Complejo(complejo.real() / numero, complejo.imaginario() / numero);
}

/**
 * @brief Para introducir complejos
 * @param[in] complejo: referencia (constante) al complejo.
 */
std::istream& operator>> (std::istream& in, Complejo& complejo) {
  in >> complejo.real_;
  in >> complejo.imaginario_;
  return in;
}

/**
 * @brief Conjugado de un complejo
 * @param[in] complejo: referencia (constante) al complejo.
 * @return Devuelve el conjugado.
 */
Complejo Conjugado(const Complejo& complejo) {
  return Complejo(complejo.real(), - complejo.imaginario());
}

/**
 * @brief Valor absoluto de un complejo
 * @param[in] complejo: referencia (constante) al complejo.
 * @return Devuelve el valor absoluto.
 */
double valorabs(const Complejo& complejo) {
  return sqrt(complejo.real() * complejo.real() + complejo.imaginario() * complejo.imaginario());
}