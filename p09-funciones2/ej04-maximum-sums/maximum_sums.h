/**
 * Universidad de La Laguna
 * Escuela Superior de Ingeniería y Tecnología
 * Grado en Ingeniería Informática
 * Informática Básica
 *
 * @author Esther M. Quintero
 * @date 05 Dic 2021
 * @brief Este programa dada una secuencia de números, muestra la máxima cantidad que se
 *        puede obtener sumando por ambos lados.
 * @see [https://jutge.org/problems/P20262_en]
 */

#include <iostream>
#include <vector>

int MaximaCantidadIzquierda(std::vector<int>& secuencia);
int MaximaCantidadDerecha(std::vector<int>& secuencia);