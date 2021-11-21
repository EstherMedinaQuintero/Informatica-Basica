/**
 * Universidad de La Laguna
 * Escuela Superior de Ingeniería y Tecnología
 * Grado en Ingeniería Informática
 * Informática Básica
 *
 * @author Esther M. Quintero
 * @date 16 Nov 2021
 * @brief Este programa, dados tres números enteros distintos, te muestra el mayor de ellos.
 */

#include <iostream>

// @brief Esta función escribe el mensaje inicial con la explicación del programa.
int MensajeInicial() {
  std::cout << "Este programa te muestra el mayor de tres numeros enteros." << std::endl << "\n";
  return 0;
}

// @briej Esta función comprueba si tres números son distintos. Devuelve true si es el caso.
// @param primer_numero, segundo_numero, tercer_numero Son los números que compara.
bool CompruebaSiSonDistintos(const int primer_numero, const int segundo_numero, const int tercer_numero) {
  if (primer_numero == segundo_numero) {
    return false;
  } 
  if (primer_numero == tercer_numero) {
    return false;
  } 
  if (segundo_numero == tercer_numero) {
    return false;
  }
  return true;
}

// @brief Esta función devuelve el mayor número entre tres
// @param primer_numero, segundo_numero, tercer_numero Son los números que compara
int MayorNumero(int primer_numero, int segundo_numero, int tercer_numero) {
  int mayor_numero{primer_numero};
  if (segundo_numero > mayor_numero) {
    mayor_numero = segundo_numero;
  }
  if (tercer_numero > mayor_numero) {
    mayor_numero = tercer_numero;
  }
  return mayor_numero;
}

int main () {
  //MensajeInicial()
  int primer_numero, segundo_numero, tercer_numero;
  std::cin >> primer_numero >> segundo_numero >> tercer_numero;
  if (CompruebaSiSonDistintos(primer_numero, segundo_numero, tercer_numero)) {
    std::cout << MayorNumero(primer_numero, segundo_numero, tercer_numero) << std::endl;
  }
  return 0;
}
