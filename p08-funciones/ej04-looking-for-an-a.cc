/**
 * Universidad de La Laguna
 * Escuela Superior de Ingeniería y Tecnología
 * Grado en Ingeniería Informática
 * Informática Básica
 *
 * @author Esther M. Quintero
 * @date 22 Nov 2021
 * @brief Programa que indica si un string tiene una a o no.
 */

#include <iostream>
#include <cstring>

/**
 * @brief Esta función escribe el mensaje inicial con la explicación del programa.
 */
int MensajeInicial() {
  std::cout << "Este programa indica si un string tiene una a o no." << std::endl;
  return 0;
}

/**
 * @brief Esta función comprueba si el string introducido contiene alguna a.
 * @param frase_introducida: String que se comprueba.
 * @return Devuelve verdadero si tiene una y falso si no.
 */
bool ContieneAlgunaA(const std::string& frase_introducida) {
  const char kAMinus{'a'};
  bool resultado{false};
  for (int contador{0}; contador < int(frase_introducida.length()); ++contador) {
    if (frase_introducida[contador] == kAMinus) {
      resultado = true;
    }
  }
  return resultado;
}

int main() {
  // MensajeInicial();
  std::string frase_introducida;
  getline(std::cin, frase_introducida);
  if (ContieneAlgunaA(frase_introducida)) {
    std::cout << "yes" << std::endl;
  } else {
    std::cout << "no" << std::endl;
  }
  return 0;
}