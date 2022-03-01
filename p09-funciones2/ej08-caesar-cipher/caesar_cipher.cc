/**
 * Universidad de La Laguna
 * Escuela Superior de Ingeniería y Tecnología
 * Grado en Ingeniería Informática
 * Informática Básica
 *
 * @author Esther M. Quintero
 * @date 06 Dic 2021
 * @brief Este programa cifra en el código César.
 * @see [https://jutge.org/problems/P33371_en]
 */

#include "caesar_cipher.h"

/** 
 *  @brief Esta función codifica en César.
 *  @param letra: Letra que hay que codificar.
 *  @param numero: Posiciones que hay que rodar.
 *  @return Devuelve la letra codificada.
 */
char Codificar(const char letra, const int numero) {
  if (letra == '_') {
    return ' ';
  } else if (letra >= 'a' and letra <= 'z') {
    return 'A' + (letra - 'a' + numero) % 26;
  } else {
    return letra;
  }
}