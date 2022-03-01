/**
 * Universidad de La Laguna
 * Escuela Superior de Ingeniería y Tecnología
 * Grado en Ingeniería Informática
 * Informática Básica
 *
 * @author Esther M. Quintero
 * @date 06 Dic 2021
 * @see [https://jutge.org/problems/P17179_en]
 */

#include <iostream>
#include <vector>

/** 
 *  @brief Esta función calcula el máximo de una secuencia.
 *  @param cantidad_numeros: Longitud de la secuencia.
 *  @param secuencia: Vector de números.
 *  @return Devuelve el máximo.
 */
double Maximo(const double cantidad_numeros, const std::vector<double>& secuencia) {
  double maximo{secuencia[0]};
  for (int contador{1}; contador < cantidad_numeros; ++contador) {
    if (maximo < secuencia[contador]) {
      maximo = secuencia[contador];
    }
  }
  return maximo;
}

/** 
 *  @brief Esta función calcula el mínimo de una secuencia.
 *  @param cantidad_numeros: Longitud de la secuencia.
 *  @param secuencia: Vector de números.
 *  @return Devuelve el mínimo.
 */
double Minimo(const double cantidad_numeros, const std::vector<double>& secuencia) {
  double minimo{secuencia[0]};
  for (int contador{1}; contador < cantidad_numeros; ++contador) {
    if (minimo > secuencia[contador]) {
      minimo = secuencia[contador];
    }
  }
  return minimo;
}

/** 
 *  @brief Esta función calcula la media de una secuencia.
 *  @param cantidad_numeros: Longitud de la secuencia.
 *  @param secuencia: Vector de números.
 *  @return Devuelve la media.
 */
double Average(const double cantidad_numeros, const std::vector<double>& secuencia) {
  double suma{0};
  for (int contador{0}; contador < int(cantidad_numeros); ++contador) {
    suma += secuencia[contador];
  }
  return suma / cantidad_numeros;
}

int main() {
  double cantidad_numeros;
  while (std::cin >> cantidad_numeros) {
    std::vector<double> secuencia;
    double numero_introducido;
    while (std::cin.peek() != '\n') {
      for (int contador{0}; contador < int(cantidad_numeros); ++contador) {
        std::cin >> numero_introducido;
        secuencia.push_back(numero_introducido);
      }
      std::cout.setf(std::ios::fixed);
      std::cout.precision(4);
      std::cout << Minimo(cantidad_numeros, secuencia) << " ";
      std::cout << Maximo(cantidad_numeros, secuencia) << " ";
      std::cout << Average(cantidad_numeros, secuencia) << std::endl;
    }
  }
  return 0;
}