/**
 * Universidad de La Laguna
 * Escuela Superior de Ingeniería y Tecnología
 * Grado en Ingeniería Informática
 * Informática Básica
 *
 * @author Esther M. Quintero
 * @date 08 Dic 2021
 * @brief Este programa comprueba si un número es de Armstrong.
 */

#include "armstrong.h"

/** Función main.
 *  @param[in] argc Número de parámetros
 *  @param[in] argv Vector con los parámetros
 */
int main(int argc, char* argv[]) {
  Usage(argc, argv);
  std::string numero_introducido = argv[1];
  const size_t kNumeroIntroducido = stoi(numero_introducido); 
  ImprimeSolucion(EsDeArmstrong(kNumeroIntroducido), kNumeroIntroducido);
  return 0;
}