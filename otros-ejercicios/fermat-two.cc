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
 *        para x^3 + y^3 = z^3 tal que (a <= x <= b) y (c <= y <= z).
 */

#include <iostream>
#include <cmath>

int main () {
  int primer_numero, segundo_numero, tercer_numero, cuarto_numero;
  bool encontrada_solucion{false};
  int x, y, z;

  while (std::cin >> primer_numero >> segundo_numero >> tercer_numero >> cuarto_numero) {
    if (primer_numero <= segundo_numero and tercer_numero <= cuarto_numero) {
      if ((primer_numero == 0 or tercer_numero == 0) and !encontrada_solucion) {
        encontrada_solucion = true;
        z = primer_numero + tercer_numero;
        x = primer_numero;
        y = tercer_numero;
      }
    }
    if (encontrada_solucion) {
      std::cout << x << "^3 + " << y << "^3 = " << z << "^3" << std::endl;
    } else {
      std::cout << "No solution!" << std::endl;
    }
  }

  return 0;
}