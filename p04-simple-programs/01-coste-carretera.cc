/**
 * Universidad de La Laguna
 * Escuela Superior de Ingeniería y Tecnología
 * Grado en Ingeniería Informática
 * Informática Básica
 *
 * @author Esther M. Quintero
 * @date 26 Oct 2021
 * @brief Programa que calcula el coste de una carretera
 */

#include <iostream>

int main () {
  
  std::cout << "Este programa calcula el coste de una carretera en funcion de su longitud y el coste por metro." << std::endl;
  
  const int kCostePorMetro{1624};
  float longitud_carretera{0};
  std::cout << "Introduzca la longitud de la carretera en metros: ";
  std::cin >> longitud_carretera;
  float coste_carretera{longitud_carretera * kCostePorMetro};
  std::cout << "El coste de una carretera de " << longitud_carretera << " metros es de " << coste_carretera << " euros." << std::endl;

  return 0;
}