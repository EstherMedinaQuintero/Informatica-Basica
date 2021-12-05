/**
 * Universidad de La Laguna
 * Escuela Superior de Ingeniería y Tecnología
 * Grado en Ingeniería Informática
 * Informática Básica
 *
 * @author Esther M. Quintero
 * @date 19 Nov 2021
 * @brief Programa calcula la media de números reales positivos introducidos
 */

#include <iostream>
#include <iomanip>

// @brief Esta función escribe el mensaje inicial con la explicación del programa
int MensajeInicial() {
  std::cout << "Este programa calcula y muestra la media." << std::endl;
  return 0;
}

int main() {
  // MensajeInicial()
  int numero_introducido;
  double media{0};
  double suma{0};
  int cantidad_numeros{0};
  for (int contador )
  media = suma / double(cantidad_numeros);
  std::cout << std::fixed << std::setprecision(2) << media << std::endl;
  return 0;
}