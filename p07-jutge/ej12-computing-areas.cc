/**
 * Universidad de La Laguna
 * Escuela Superior de Ingeniería y Tecnología
 * Grado en Ingeniería Informática
 * Informática Básica
 *
 * @author Esther M. Quintero
 * @date 18 Nov 2021
 * @brief Programa que lee la descripción de un rectángulo o un círculo y muestra su área
 */

#include <iostream>
#include <cstring>
#include <iomanip>
#include <cmath>

// @brief Esta función escribe el mensaje inicial con la explicación del programa
int MensajeInicial() {
  std::cout << "Este programa muestra el area de un rectangulo o de un circulo." << std::endl;
  return 0;
}

// @brief Esta función devuelve el área de un rectángulo
// @param longitud Es la longitud del rectángulo
// @param altura Es la altura del rectángulo
double CalculaAreaRectangulo(const double longitud, const double altura) {
  double area{longitud * altura};
  return area;
}

// @brief Esta función devuelve el radio de un círculo
// @param radio Es el radio del círculo
double CalcularAreaCirculo(const double radio) {
  const double kPi{M_PI};
  double area{kPi * radio * radio};
  return area;
}

int main() {
  // MensajeInicial()
  int cantidad_de_descripciones;
  double primera_cantidad{0}, segunda_cantidad{0};
  std::cin >> cantidad_de_descripciones;
  std::string tipo_de_objeto;
  for (int contador{0}; contador < cantidad_de_descripciones; ++contador) {
    // std::cin >> tipo_de_objeto >> primera_cantidad >> segunda_cantidad;
    std::cin >> tipo_de_objeto >> primera_cantidad;
    const std::string kRectangulo{"rectangle"};
    const std::string kCirculo{"circle"};
    if (tipo_de_objeto == kRectangulo) {
      std::cin >> segunda_cantidad;
      std::cout << std::fixed << std::setprecision(6) << CalculaAreaRectangulo(primera_cantidad, segunda_cantidad) << std::endl;
    } else {
      std::cout << std::fixed << std::setprecision(6) << CalcularAreaCirculo(primera_cantidad) << std::endl;
    }
  }
  return 0;
}