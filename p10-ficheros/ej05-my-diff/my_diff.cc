/**
 * Universidad de La Laguna
 * Escuela Superior de Ingeniería y Tecnología
 * Grado en Ingeniería Informática
 * Informática Básica
 *
 * @author Esther M. Quintero
 * @date 12 Dic 2021
 * @brief Este programa, dados dos ficheros de texto que se pasan por parámetro,
 *        los compara. Si tienen alguna diferenc.
 */

#include "my_diff.h"

/** Muestra el modo de uso correcto del programa
 *  En caso de que el uso no sea el correcto, muestra el mensaje y finaliza
 *  la ejecución del programa.
 *  @param[in] argc Numbero de parámetros.
 *  @param[in] argv Vector con los parámetros.
 */
void Usage(int argc, char *argv[]) {
  if (argc > 3) {
    std::cout << argv[0] << ": Ha introducido más de dos parámetros." << std::endl;
    std::cout << "Pruebe " << argv[0] << " --help para más información." << std::endl;
    exit(EXIT_SUCCESS);
  }
  if (argc == 2) {
    std::cout << argv[0] << ": Falta un fichero como parámetro." << std::endl;
    std::cout << "Pruebe " << argv[0] << " --help para más información." << std::endl;
    exit(EXIT_SUCCESS);
  }
  if (argc == 1) {
    std::cout << argv[0] << ": Faltan dos ficheros como parámetros." << std::endl;
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
 *  @brief Esta función compara dos ficheros.
 *  @param[in] nombre_fichero_entrada: Fichero que copia.
 *  @param[in] nombre_fichero_salida: Fichero en el que escribe.
 *  @return No devuelve nada.
 */
int ComparaFicheros(const std::string& nombre_primer_fichero, const std::string& nombre_segundo_fichero) {
  /// Abrimos los fichers de entrada en modo lectura
  std::ifstream primer_fichero{nombre_primer_fichero, std::ios_base::in};
  std::ifstream segundo_fichero{nombre_segundo_fichero, std::ios_base::in};
  std::string linea_primer_fichero, linea_segundo_fichero;
  int contador{0};
  bool encontrada_diferencia{false};
  while (!primer_fichero.eof() || !segundo_fichero.eof()) { /// Mientras a alguno le queden líneas.
    ++contador;
    getline(primer_fichero, linea_primer_fichero);
    getline(segundo_fichero, linea_segundo_fichero);
    if (linea_primer_fichero != linea_segundo_fichero) {
      encontrada_diferencia = true;
      std::cout << nombre_primer_fichero << ": " << contador << " " << linea_primer_fichero << std::endl;
      std::cout << nombre_segundo_fichero << ": " << contador << " " << linea_segundo_fichero << std::endl;
      if (primer_fichero.eof() || segundo_fichero.eof()) { /// Si acaban a dispar, no tienen el mismo número de líneas.
        linea_segundo_fichero = {"Linea vacia."};
      }
    }
    if (primer_fichero.eof() && segundo_fichero.eof()) { /// Si ambos acaban y no se encontró diferencia, son iguales.
      if ((linea_primer_fichero == linea_segundo_fichero) && !encontrada_diferencia) {
        std::cout << "Los ficheros son idénticos." << std::endl;
      }
    }
  }
  return 0;
}