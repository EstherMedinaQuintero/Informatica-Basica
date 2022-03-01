/**
 * Universidad de La Laguna
 * Escuela Superior de Ingeniería y Tecnología
 * Grado en Ingeniería Informática
 * Informática Básica
 *
 * @author Esther M. Quintero
 * @date 13 Dic 2021
 * @brief Este programa lee un fichero con especificación sobre un autómata finito
 *        determinista e imprime por pantalla las características del mismo.
 */

#include "read_DFA.h"

/** Muestra el modo de uso correcto del programa
 *  En caso de que el uso no sea el correcto, muestra el mensaje y finaliza
 *  la ejecución del programa.
 *  @param[in] argc Numbero de parámetros.
 *  @param[in] argv Vector con los parámetros.
 */
void Usage(int argc, char *argv[]) {
  if (argc > 2) {
    std::cout << argv[0] << ": Ha introducido más de un parámetro." << std::endl;
    std::cout << "Pruebe " << argv[0] << " --help para más información." << std::endl;
    exit(EXIT_SUCCESS);
  }
  if (argc != 2) {
    std::cout << argv[0] << ": Falta un fichero como parámetro." << std::endl;
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
 *  @brief Esta función imprime el cardinal de un conjunto de estados.
 *  @param[in] nombre_fichero: Fichero desde el que leen los estados.
 *  @return No devuelve nada.
 */
int ImprimeCardinal(const std::string nombre_fichero) {
  std::ifstream fichero{nombre_fichero, std::ios_base::in};
  int numero_total_estados, estado_de_arranque; 
  fichero >> numero_total_estados >> estado_de_arranque; // Extraemos los dos primeros números
  std::cout << "|Q| = " << numero_total_estados << std::endl;
  std::cout << "q0 = " << estado_de_arranque << std::endl;
  std::string estados_aceptados{"F = {"};
  std::string linea_estado{""};
  while (getline(fichero, linea_estado)) {
    if (linea_estado.length() > 0) {
      if (linea_estado.at(2) == '1') { // Si el estado está aceptado, lo guardamos
        estados_aceptados += linea_estado.at(0);
        estados_aceptados += ", ";
      }
    }
  }
  for (int i{0}; i < static_cast<int>(estados_aceptados.length()) - 2; ++i) { // El -2 es para no añadir un ", " que sobra al final
    std::cout << estados_aceptados[i];
  }
  std::cout << "}" << std::endl;
  return 0;
}

/** 
 *  @brief Esta función imprime los valores de la función de transición.
 *  @param[in] nombre_fichero: Fichero desde el que leen los valores.
 *  @return No devuelve nada.
 */
int ImprimeFuncionTransicion(const std::string nombre_fichero) {
  std::ifstream fichero{nombre_fichero, std::ios_base::in};
  std::string linea_estado{""};
  while (getline(fichero, linea_estado)) {
    if (linea_estado.length() > 1) { // Para ignorar los primeros números
      // std::cout << linea_estado << std::endl;
      std::cout << "delta(" << linea_estado.at(0) << ", " << linea_estado.at(6) << ") = " << linea_estado.at(8) << std::endl;
      std::cout << "delta(" << linea_estado.at(0) << ", " << linea_estado.at(10) << ") = " << linea_estado.at(12) << std::endl;
    }
  }
  return 0;
}