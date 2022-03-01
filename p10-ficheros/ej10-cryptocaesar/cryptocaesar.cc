/**
 * Universidad de La Laguna
 * Escuela Superior de Ingeniería y Tecnología
 * Grado en Ingeniería Informática
 * Informática Básica
 *
 * @author Esther M. Quintero
 * @date 12 Dic 2021
 * @see [https://jutge.org/problems/P75810_en]
 */

#include "cryptocaesar.h"

/** 
 *  @brief Esta función descodifica en César.
 *  @param[in] letra: Letra que hay que descodificar.
 *  @param[in] numero: Posiciones que hay que rodar.
 *  @return Devuelve la letra descodificada.
 */
char Descodificar(const char letra, const int numero) {
  return 'A' + (letra - 'A' + numero) % 26;
}

/** 
 *  @brief Esta función calcula las posiciones que hay que rodar para descodificar.
 *  @param[in] mensaje: Mensaje que se quiere descodificar.
 *  @return Devuelve las posiciones que hay que rodar para descodificar.
 */
int NumeroDescodificar(const std::string mensaje) {
  char ultima_letra{mensaje[mensaje.length() - 2]}; // Penúltimo caracter.
  return 'Z' - ultima_letra + 18;
}