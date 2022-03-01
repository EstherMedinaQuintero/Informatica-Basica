/**
 * Universidad de La Laguna
 * Escuela Superior de Ingeniería y Tecnología
 * Grado en Ingeniería Informática
 * Informática Básica
 *
 * @author Esther M. Quintero
 * @date 12 Dic 2021
 * @brief Este programa, dado un fichero de texto que se pasa por parámetro,
 *        copia el fichero de texto en otro, también pasado por parámetro.
 */

#include "my_cp.h"

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
 *  @brief Esta función copia el contenido de un fichero y lo pega en otro numerando.
 *  @param[in] nombre_fichero_entrada: Fichero que copia.
 *  @param[in] nombre_fichero_salida: Fichero en el que escribe.
 *  @return No devuelve nada.
 */
int CopiaFichero(const std::string& nombre_fichero_entrada, const std::string& nombre_fichero_salida) {
  /// Abrimos el fichero de entrada en modo lectura
  std::ifstream fichero_entrada{nombre_fichero_entrada, std::ios_base::in};
  /// Abrimos el fichero de salida en modo escritura
  std::ofstream fichero_salida{nombre_fichero_salida};
  /// Leemos las líneas del fichero y las añadimos
  std::string linea;
  while (getline(fichero_entrada, linea)) {
    fichero_salida << linea << std::endl;
  }
  return 0;
}