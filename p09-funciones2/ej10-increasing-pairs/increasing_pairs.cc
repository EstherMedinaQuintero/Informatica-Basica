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