/**
 * Universidad de La Laguna
 * Escuela Superior de Ingeniería y Tecnología
 * Grado en Ingeniería Informática
 * Informática Básica
 *
 * @author Esther M. Quintero
 * @date 04 Nov 2021
 * @brief Programa que lee una letra e indica si es mayúscula o minúscula e indica asimismo si se trata de una vocal o una consonante
 */

#include <iostream>
#include <cctype>
#include <vector>
#include <algorithm>

int main () {
  std::cout << "Este programa indica si una letra es mayuscula/minuscula y vocal/comsonante." << std::endl;
  char letra_introducida;
  std::cout << "Introduzca una letra: ";
  std::cin >> letra_introducida;

  std::vector<int> vocales{'a', 'A', 'e', 'E', 'i', 'I', 'o', 'O', 'u', 'U'}; 
  if (std::find(vocales.begin(), vocales.end(), letra_introducida) != vocales.end() ) {
    std::cout << "La letra " << letra_introducida << " isvowel" << std::endl;
  } else { 
    std::cout << "La letra " << letra_introducida << " isconsonat" << std::endl;
  }
  return 0;
}