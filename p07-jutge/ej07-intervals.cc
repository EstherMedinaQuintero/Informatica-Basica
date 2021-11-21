/**
 * Universidad de La Laguna
 * Escuela Superior de Ingeniería y Tecnología
 * Grado en Ingeniería Informática
 * Informática Básica
 *
 * @author Esther M. Quintero
 * @date 15 Nov 2021
 * @brief Este programa calcula y muestra la intersección entre dos intervalos.
 */

#include <iostream>
#include <array>
#include <algorithm>

// @brief Esta función escribe el mensaje inicial con la explicación del programa
int MensajeInicial() {
  std::cout << "Este programa calcula y muestra la intersección entre dos intervalos." << std::endl << "\n";
  return 0;
}

// @brief Esta función imprime la intersección entre dos intervalos
// @param primer_intervalo, segundo_intervalo Son los intervalos que intersecta (Arrays de la forma {mínimo, máximo})
int MuestraInterseccion(const std::array<int, 2>& primer_intervalo, const std::array<int, 2>& segundo_intervalo) {
  if ((primer_intervalo[1] < segundo_intervalo[0]) || (segundo_intervalo[1] < primer_intervalo[0])) {
    std::cout << "[]" << std::endl;
  } else {
    std::cout << "[" << std::max(primer_intervalo[0], segundo_intervalo[0]) << "," << std::min(primer_intervalo[1], segundo_intervalo[1]) << "]" << std::endl;
  }
  return 0;
}

int main () {
  //MensajeInicial()
  int minimo_primer_intervalo, maximo_primer_intervalo, minimo_segundo_intervalo, maximo_segundo_intervalo;
  std::cin >> minimo_primer_intervalo >> maximo_primer_intervalo >> minimo_segundo_intervalo >> maximo_segundo_intervalo;
  std::array<int, 2> primer_intervalo{minimo_primer_intervalo, maximo_primer_intervalo};
  std::array<int, 2> segundo_intervalo{minimo_segundo_intervalo, maximo_segundo_intervalo};
  MuestraInterseccion(primer_intervalo, segundo_intervalo);
  return 0;
}
