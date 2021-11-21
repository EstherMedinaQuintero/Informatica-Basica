/**
 * Universidad de La Laguna
 * Escuela Superior de Ingeniería y Tecnología
 * Grado en Ingeniería Informática
 * Informática Básica
 *
 * @author Esther M. Quintero
 * @date 16 Nov 2021
 * @brief Programa que lee una letra e indica si es mayúscula o minúscula e indica asimismo si se trata de una vocal o una consonante
 */

#include <iostream>
#include <cctype>
#include <vector>
#include <algorithm>

// @brief Esta función escribe el mensaje inicial con la explicación del programa.
int MensajeInicial() {
  std::cout << "Este programa lee una letra e indica si es mayuscula, minuscula, vocal o consonante" << std::endl << "\n";
  return 0;
}

// @brief Esta función escribe si una letra es mayúscula o minúscula
int EsMayusculaOMinuscula(const char letra) {
  if (islower(letra)) {
    std::cout << "lowercase" << std::endl;
  } else {
    std::cout << "uppercase" << std::endl;
  }
  return 0;
}

// @brief Esta función escribe si una letra es vocal o consonante
int EsVocalOConsonante(const char letra) {
  std::vector<int> vocales{'a', 'A', 'e', 'E', 'i', 'I', 'o', 'O', 'u', 'U'}; 
  if (std::find(vocales.begin(), vocales.end(), letra) != vocales.end() ) {
    std::cout << "vowel" << std::endl;
  } else { 
    std::cout << "consonant" << std::endl;
  }
  return 0;
}

int main () {
  //MensajeInicial()
  char letra_introducida;
  std::cin >> letra_introducida;
  EsMayusculaOMinuscula(letra_introducida);
  EsVocalOConsonante(letra_introducida);
  return 0;
}