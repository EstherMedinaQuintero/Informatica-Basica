/**
 * Universidad de La Laguna
 * Escuela Superior de Ingeniería y Tecnología
 * Grado en Ingeniería Informática
 * Informática Básica
 *
 * @author Esther M. Quintero
 * @date 06 Dic 2021
 * @see [https://jutge.org/problems/P73501_en]
 */

#include <iostream>

/** 
 *  @brief Esta función cuenta cuántos pares incrementados tiene una secuencia.
 *  @param cantidad_secuencias: Cantidad de secuencias que va a revisar.
 *  @return Devuelve la cantidad de pares incrementados de cada secuencia.
 */
int CuentaParesIncrementados(int cantidad_secuencias) {
  int numero_actual, siguiente_numero;
	int pares_incrementados{0};
	std::cin >> numero_actual;
	while (numero_actual != 0) {
		std::cin >> siguiente_numero;
		if (numero_actual < siguiente_numero) { 
      ++pares_incrementados;
    }
		numero_actual = siguiente_numero;
	}
	return pares_incrementados;
}

int main() {
	int cantidad_secuencias;
	std::cin >> cantidad_secuencias;
	for (int contador{0}; contador < cantidad_secuencias; ++contador) {
		std::cout << CuentaParesIncrementados(cantidad_secuencias) << std::endl;
	}
  return 0;
}