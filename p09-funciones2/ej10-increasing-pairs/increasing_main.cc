/**
 * Universidad de La Laguna
 * Escuela Superior de Ingeniería y Tecnología
 * Grado en Ingeniería Informática
 * Informática Básica
 *
 * @author Esther M. Quintero
 * @date 06 Dic 2021
 * @brief Este programa muestra cuantos pares incrementados tiene una secuencia.
 * @see [https://jutge.org/problems/P73501_en]
 */

#include "increasing_pairs.h"

int main(int argc, char* argv[]) {
	int cantidad_secuencias;
	std::cin >> cantidad_secuencias;
	for (int contador{0}; contador < cantidad_secuencias; ++contador) {
		std::cout << CuentaParesIncrementados(cantidad_secuencias) << std::endl;
	}
  return 0;
}