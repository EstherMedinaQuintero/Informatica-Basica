/**
 * Universidad de La Laguna
 * Escuela Superior de Ingeniería y Tecnología
 * Grado en Ingeniería Informática
 * Informática Básica
 *
 * @author Esther M. Quintero
 * @date 6 Dic 2021
 * @brief Programa calcula la solución al teorema de Fermat con cuatro números.
 *        Dados a, b, c, d tal que (a <= b) y (c <= d), encontrar una solución
 *        para x^2 + y^2 = z^2 tal que (a <= x <= b) y (c <= y <= z).
 */

#include <iostream>
#include <cmath>

int main () {
  int primer_numero, segundo_numero, tercer_numero, cuarto_numero;
  std::cin >> primer_numero >> segundo_numero >> tercer_numero >> cuarto_numero;
  bool encontrada_solucion{false};
  int x, y, z;
  for (x = primer_numero; (x <= segundo_numero) and (!encontrada_solucion); ++x) {
    for (y = tercer_numero; (y <= cuarto_numero) and (!encontrada_solucion); ++y) {
      double z_provisional{sqrt(x * x + y * y)};
      z = int(z_provisional);
      if (z_provisional == double(z)) {
        encontrada_solucion = true;
      }
    }
  }
  if (encontrada_solucion) {
    std::cout << x - 1 << "^2 + " << y - 1 << "^2 = " << z << "^2" << std::endl;
  } else {
    std::cout << "No solution!" << std::endl;
  }
  return 0;
}