/**
 * Universidad de La Laguna
 * Escuela Superior de Ingeniería y Tecnología
 * Grado en Ingeniería Informática
 * Informática Básica
 *
 * @author Esther M. Quintero
 * @date 19 Nov 2021
 * @brief Este programa mezcla los programas de intervalos 1 e intervalos 2.
 */

#include <iostream>
#include <array>
#include <algorithm>

// @brief Esta función escribe el mensaje inicial con la explicación del programa
int MensajeInicial() {
  std::cout << "Este programa mezcla intervalo 1 e intervalos 2." << std::endl << "\n";
  return 0;
}

// @brief Esta función comprueba si dos intervalos son iguales
// @param primer_intervalo, segundo_intervalo Son los intervalos que intersecta (Arrays de la forma {mínimo, máximo})
bool SonIguales(const std::array<int, 2>& primer_intervalo, const std::array<int, 2>& segundo_intervalo) {
  if ((primer_intervalo[0] == segundo_intervalo[0]) and (primer_intervalo[1] == segundo_intervalo[1])) {
    return true;
  }
  return false;
}

bool PrimeroDentroSegundo(const std::array<int, 2>& primer_intervalo, const std::array<int, 2>& segundo_intervalo) {
  if ((primer_intervalo[0] >= segundo_intervalo[0]) and (primer_intervalo[1]) <= segundo_intervalo[1]) {
    return true;
  }
  return false;
}

// @brief Esta función imprime la intersección entre dos intervalos
// @param primer_intervalo, segundo_intervalo Son los intervalos que intersecta (Arrays de la forma {mínimo, máximo})
int MuestraInterseccion(const std::array<int, 2>& primer_intervalo, const std::array<int, 2>& segundo_intervalo) {
  if ((primer_intervalo[1] < segundo_intervalo[0]) || (segundo_intervalo[1] < primer_intervalo[0])) {
    std::cout << "[]";
  } else {
    std::cout << "[" << std::max(primer_intervalo[0], segundo_intervalo[0]) << "," << std::min(primer_intervalo[1], segundo_intervalo[1]) << "]";
  }
  return 0;
}

bool SegundoDentroPrimero(const std::array<int, 2>& primer_intervalo, const std::array<int, 2>& segundo_intervalo) {
  if ((segundo_intervalo[0] >= primer_intervalo[0]) and (segundo_intervalo[1]) <= primer_intervalo[1]) {
    return true;
  }
  return false;
}

int main () {
  //MensajeInicial()
  int minimo_primer_intervalo, maximo_primer_intervalo, minimo_segundo_intervalo, maximo_segundo_intervalo;
  std::cin >> minimo_primer_intervalo >> maximo_primer_intervalo >> minimo_segundo_intervalo >> maximo_segundo_intervalo;
  std::array<int, 2> primer_intervalo{minimo_primer_intervalo, maximo_primer_intervalo};
  std::array<int, 2> segundo_intervalo{minimo_segundo_intervalo, maximo_segundo_intervalo};
  if (SonIguales(primer_intervalo, segundo_intervalo)) {
    std::cout << "= , ";
  } else if (PrimeroDentroSegundo(primer_intervalo, segundo_intervalo)) {
    std::cout << "1 , ";
  } else if (SegundoDentroPrimero(primer_intervalo, segundo_intervalo)) {
    std::cout << "2 , ";
  } else {
    std::cout << "? , ";
  }
  MuestraInterseccion(primer_intervalo, segundo_intervalo);
  std::cout << std::endl;
  return 0;
}