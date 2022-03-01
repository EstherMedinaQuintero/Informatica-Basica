/**
 * Universidad de La Laguna
 * Escuela Superior de Ingeniería y Tecnología
 * Grado en Ingeniería Informática
 * Informática Básica
 *
 * @author Esther M. Quintero
 * @date 06 Dic 2021
 * @see [https://jutge.org/problems/P33371_en]
 */

#include <iostream>

/** 
 *  @brief Esta función codifica en César.
 *  @param letra: Letra que hay que codificar.
 *  @param numero: Posiciones que hay que rodar.
 *  @return Devuelve la letra codificada.
 */
char Codificar(const char letra, const int numero) {
  const char kAminus{'a'}, kAMayus{'A'}, kZminus{'z'};
  if (letra == '_') {
    return ' ';
  } else if (letra >= kAminus and letra <= kZminus) {
    return kAMayus + (letra - kAminus + numero) % 26;
  } else {
    return letra;
  }
}

int main() {
  int numero_introducido;
  while (std::cin >> numero_introducido) {
    char letra_introducida;
    std::cin >> letra_introducida;
    while (letra_introducida != '.') {
      std::cout << Codificar(letra_introducida, numero_introducido);
      std::cin >> letra_introducida;
    }
    std::cout << std::endl;
  }
  return 0;
}