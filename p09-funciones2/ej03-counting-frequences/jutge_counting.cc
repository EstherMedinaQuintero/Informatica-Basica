/**
 * Universidad de La Laguna
 * Escuela Superior de Ingeniería y Tecnología
 * Grado en Ingeniería Informática
 * Informática Básica
 *
 * @author Esther M. Quintero
 * @date 05 Dic 2021
 * @see [https://jutge.org/problems/P63414_en]
 */

#include <iostream>
#include <vector>

/** 
 *  @brief Esta función suma en la posición que corresponde para saber cuántas veces
 *         se repiten los números que va introduciendo el usuario.
 *  @param secuencia: Vector de 1001 posiciones con un 0.
 */
int LeerDatos(std::vector<int>& secuencia) {
  const int kParaDividir{100000};
  int tamanio;
  std::cin >> tamanio;
  int numero_introducido;
  for (int contador{0}; contador < tamanio; ++contador) {
    std::cin >> numero_introducido;
    ++secuencia[numero_introducido%kParaDividir];
  }
  return 0;
}

/** 
 *  @brief Esta función imprime las posiciones que no tienen un 0.
 *  @param secuencia: Vector de números de 1001 posiciones.
 */
int ImprimirDatos(const std::vector<int>& secuencia) {
  const int kMaximoSecuencia{1001};
  const int kParaSumar{1000000000};
  for (int contador{0}; contador < kMaximoSecuencia; ++contador) {
    if (secuencia[contador] != 0) {
      std::cout << kParaSumar + contador << " : " << secuencia[contador] << std::endl;
    }
  }
  return 0;
}

int main() {
  std::vector<int> secuencia(1001, 0);
  LeerDatos(secuencia);
  ImprimirDatos(secuencia);
  return 0;
}