/**
 * Universidad de La Laguna
 * Escuela Superior de Ingeniería y Tecnología
 * Grado en Ingeniería Informática
 * Informática Básica
 *
 * @author Esther M. Quintero
 * @date 06 Dic 2021
 * @brief Programa muestra el número de cifras que hacen falta para representar
 *        un número en todas las bases de la 2 a la 16.
 */

#include <iostream>

int main() {
  int numero_introducido;
  std::cin >> numero_introducido;
  for (int contador{2}; contador <= 16; ++contador) {
    int copia_numero{numero_introducido};
    int cifras{0};
    std::cout << "Base " << contador << ": ";
    while (copia_numero >= 1) {
      copia_numero = copia_numero / contador;
      ++cifras;
    }
    std::cout << cifras << " cifras." << std::endl;
  }
  return 0;
}