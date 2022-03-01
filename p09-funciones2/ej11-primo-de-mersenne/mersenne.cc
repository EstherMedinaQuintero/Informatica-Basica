/**
 * Universidad de La Laguna
 * Escuela Superior de Ingeniería y Tecnología
 * Grado en Ingeniería Informática
 * Informática Básica
 *
 * @author Esther M. Quintero
 * @date 08 Dic 2021
 * @brief Este programa muestra los n primeros números primos de Mersenne.
 */

#include "mersenne.h"

/** Muestra el modo de uso correcto del programa
 *  En caso de que el uso no sea el correcto, muestra el mensaje y finaliza
 *  la ejecución del programa.
 *  El programa precisa un único número natural para su ejecución.
 *  @param[in] argc Number of command line parameters
 *  @param[in] argv Vector containing (char*) the parameters
 */
void Usage(int argc, char *argv[]) {
  if (argc > 2) {
    std::cout << argv[0] << ": Ha introducido más de un parámetro." << std::endl;
    std::cout << "Pruebe " << argv[0] << " --help para más información." << std::endl;
    exit(EXIT_SUCCESS);
  }
  if (argc != 2) {
    std::cout << argv[0] << ": Falta un número natural como parámetro." << std::endl;
    std::cout << "Pruebe " << argv[0] << " --help para más información." << std::endl;
    exit(EXIT_SUCCESS);
  }
  std::string parameter{argv[1]};
  if (parameter == "--help") {
    std::cout << kHelpText << std::endl;
    exit(EXIT_SUCCESS);
  }
}

/** 
 *  @brief Esta función comprueba si un número es primo o no.
 *  @param numero: Número que comprueba.
 *  @return Devuelve true si es primo, false si no.
 */
bool EsPrimo(const int numero) {
  if (numero == 0 || numero == 1 || numero == 4) {
    return false; 
  } 
  for (int contador{2}; contador < (numero / 2); contador++) {
    if (numero % contador == 0) {
      return false;
    }
  }
  return true;
}

/** 
 *  @brief Esta función eleva un número.
 *  @param base: Base del número.
 *  @param exponente: Exponente del número.
 *  @return Devuelve la base elevada al exponente.
 */
int ElevarNumero(const int base, const int exponente) {
  int numero_elevado{1};
  for (int contador{0}; contador < exponente; ++contador) {
    numero_elevado *= base;
  }
  return numero_elevado;
}

/** 
 *  @brief Esta función te calcula un número de Mersenne.
 *  @param numero: Sustituto de la p en la fórmula de los números de Mersenne (2^p - 1).
 *  @return Devuelve el número de Mersenne.
 */
int NumeroMersenne(const int numero) {
  const int kDos{2};
  const int kUno{1};
  return ElevarNumero(kDos, numero) - kUno;
}

/** 
 *  @brief Esta función imprime en pantalla números primos de Mersenne.
 *  @param limite: Cantidad de números primos de Mersenne que imprime.
 *  @return No devuelve nada.
 */
int MersennePrimo(const int limite) {
  const int kUno{1};
  int cuenta_posicion{1};
  int contador{2};
  while (cuenta_posicion != limite + kUno) {
    if (EsPrimo(contador) && EsPrimo(NumeroMersenne(contador))) {
      std::cout << NumeroMersenne(contador) << std::endl;
      ++cuenta_posicion;
    }
    ++contador;
  }
  return 0;
}