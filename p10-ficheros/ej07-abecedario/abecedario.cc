/**
 * Universidad de La Laguna
 * Escuela Superior de Ingeniería y Tecnología
 * Grado en Ingeniería Informática
 * Informática Básica
 *
 * @author Esther M. Quintero
 * @date 12 Dic 2021
 * @brief Este programa, almacena las palabras de un fichero pasado por parámetro
 *        el ficheros con nombre A.txt, B.txt ... Z.txt. Estos ficheros contienen
 *        las palabras que empiezan por esas letras.
 */

#include "abecedario.h"

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
 *  @brief Esta función te devuelve las palabras de un fichero.
 *  @param[in] nombre_fichero: Fichero que copia.
 *  @return Te devuelve una cadena con las palabras del texto separadas por espacios.
 */
std::string TextoSinCaracteres(const std::string& nombre_fichero) {
  const char kEspacio{' '};
  std::string textolimpio{""};
  std::ifstream fichero{nombre_fichero, std::ios_base::in};
  /// Leemos las líneas del fichero
  std::string linea;
  while (getline(fichero, linea)) {
    for (const auto &caracter_actual : linea) {
      if (isalpha(caracter_actual) or caracter_actual == kEspacio) { /// Quitamos todo lo que no sea espacios o letras
        textolimpio += caracter_actual;
      }
    }
    textolimpio += kEspacio;
  }
  return textolimpio;
}

/** 
 *  @brief Esta función separa las palabras de un texto en ficheros que crea alfabéticamente.
 *  @param[in] texto: Fichero del que extrae las palabras.
 */
void SeparaEnFicherosAlfabeticamente(const std::string& texto) {
  const char kEspacio{' '};
  std::string palabra{""};
  for (const auto &caracter_actual : texto) { 
    if (caracter_actual == kEspacio) { /// Terminamos una palabra
      std::string primera_letra;
      primera_letra = toupper(palabra.at(0));
      std::ofstream fichero_salida{(primera_letra + ".txt"), std::ios_base::app}; /// Almacenamos en su fichero
      fichero_salida << palabra << std::endl;
      palabra = ""; /// Reiniciamos la palabra
    } else {
      palabra += caracter_actual;
    }
  }
}