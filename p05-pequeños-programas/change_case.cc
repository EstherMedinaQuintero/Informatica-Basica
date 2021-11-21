/**
 * Universidad de La Laguna
 * Escuela Superior de Ingeniería y Tecnología
 * Grado en Ingeniería Informática
 * Informática Básica
 *
 * @author Esther M. Quintero
 * @date 03 Nov 2021
 * @brief Programa que cambia una letra de mayúscula a minúscula y viceversa
 */

#include <iostream>
#include <cctype>

int main () {
  std::cout << "Este programa cambia una letra de mayúscula a minúscula y viceversa." << std::endl;
  char letra_introducida;
  std::cout << "Introduzca una única letra: ";
  std::cin >> letra_introducida;
  char letra_cambiada{letra_introducida};
  if (isalpha(letra_introducida) == true) {
    if (islower(letra_introducida)) {
        letra_cambiada = toupper(letra_introducida);
    } else {
        letra_cambiada = tolower(letra_introducida);
    }
    std::cout << "Letra introducida: " << letra_introducida << ". Letra cambiada: " << letra_cambiada << std::endl;
  } else { 
      std::cout << "No ha introducido una única letra." << std::endl;
  }
  return 0;
}