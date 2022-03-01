/**
 * Universidad de La Laguna
 * Escuela Superior de Ingeniería y Tecnología
 * Grado en Ingeniería Informática
 * Informática Básica
 *
 * @author Esther M. Quintero
 * @date 12 Dic 2021
 * @brief Este programa, dado un fichero de texto que se pasa por parámetro,
 *        borra las líneas en blanco que contenga.
 */

#include "borrar_lineas_vacias.h"

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
 *  @brief Esta función borra las líneas vacias de un fichero.
 *  @param[in] nombre_fichero: Fichero del que se quieren borrar las línas vacias.
 *  @return No devuelve nada.
 */
int BorraLineasVacias(const std::string& nombre_fichero) {
  /// Abrimos el fichero de entrada en modo lectura
  std::ifstream fichero_entrada{nombre_fichero, std::ios_base::in};
  /// Leemos las líneas del fichero y las añadimos
  std::string linea;
  std::string texto_sin_lineas_vacias{""};
  while (getline(fichero_entrada, linea)) {
    if (linea != "") {
      texto_sin_lineas_vacias += linea + '\n';
    }
  }
  /// Abrimos el fichero de entrada en modo escritura para sobreescribirlo
  std::ofstream fichero_sobreescrito{nombre_fichero};
  fichero_sobreescrito << texto_sin_lineas_vacias;
  return 0;
}