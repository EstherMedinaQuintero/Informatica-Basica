/**
 * Universidad de La Laguna
 * Escuela Superior de Ingeniería y Tecnología
 * Grado en Ingeniería Informática
 * Informática Básica
 *
 * @author Esther M. Quintero
 * @date 05 Dic 2021
 * @see [https://jutge.org/problems/P76024_en]
 */

#include <iostream>
#include <iomanip>

/** 
 *  @brief Esta función va sumando términos de la serie hasta que el denominador supera el límite.
 *  @param primer_numero: Primer término del denominador.
 *  @param limite: El máximo al que puede llegar el denominador.
 *  @param numero_a_sumar: Número que se le va sumando al denominador.
 *  @return Devuelve el mayor término de la serie que cumple con la condición.
 */
double Fraccion(int primer_numero, int limite, int numero_a_sumar) {
  double suma{0.0};
  int contador{0};
  while ((primer_numero + contador * numero_a_sumar) <= limite) {
    suma += 1.0 / double(primer_numero + contador * numero_a_sumar);
    ++contador;
  }
  return suma;
}

int main() {
  int primer_numero, limite, numero_a_sumar;
  while (std::cin >> primer_numero >> limite >> numero_a_sumar) {
    std::cout.setf(std::ios::fixed);
    std::cout.precision(4);
    std::cout << std::fixed << std::setprecision(4) << Fraccion(primer_numero, limite, numero_a_sumar) << std::endl;
  }
  return 0;
}