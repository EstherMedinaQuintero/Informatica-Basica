/**
 * Universidad de La Laguna
 * Escuela Superior de Ingeniería y Tecnología
 * Grado en Ingeniería Informática
 * Informática Básica
 *
 * @author Esther M. Quintero
 * @date 08 Dic 2021
 * @brief Este programa comprueba si un número es de Armstrong.
 */

#include "armstrong.h"

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
 *  @brief Esta función calcula la cantidad de dígitos de un número.
 *  @param numero: Número para calcular sus dígitos.
 *  @return Devuelve la cantidad de dígitos de un número.
 */
int CantidadDeDigitos(const int numero) {
  int cantidad_digitos{0};
  int copia_numero{numero};
  while (copia_numero > 0) {
    copia_numero = copia_numero / 10;
    ++cantidad_digitos;
  }
  return cantidad_digitos;
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
 *  @brief Esta función comprueba si un número es de Armstrong.
 *  @param numero: Número que comprueba.
 *  @return Devuelve true si es de Armstrong y false si no.
 */
bool EsDeArmstrong(const int numero) {
  const int kCantidadDigitos{CantidadDeDigitos(numero)};
  int suma_elevados{0};
  int copia_numero{numero};
  for (int contador{0}; contador < kCantidadDigitos; ++contador) {
    const int kDigito(copia_numero % 10);
    suma_elevados += ElevarNumero(kDigito, kCantidadDigitos);
  }
  return (suma_elevados == numero);
}

/** 
 *  @brief Esta función imprime la solución del programa.
 *  @param solucion: Solución del programa.
 *  @param numero: Número que se usó para la solución.
 *  @return No devuelve nada.
 */
int ImprimeSolucion(const bool solucion, const int numero) {
  if (solucion == true) {
    std::cout << numero << " is an Armstrong number." << std::endl;
  } else {
    std::cout << numero << " is not an Armstrong number." << std::endl;
  }
  return 0;
}