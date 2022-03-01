/**
 * Universidad de La Laguna
 * Escuela Superior de Ingeniería y Tecnología
 * Grado en Ingeniería Informática
 * Informática Básica
 *
 * @author Esther M. Quintero
 * @date 16 Dic 2021
 * @brief Este programa toma como parámetro de entrada un fichero de texto y escribe
 *        en un fichero de salida una de cada dos palabras del fichero de entrada.
 */

#include <iostream>
#include <string>
#include <fstream>

/** 
 *  @brief Esta función extrae el texto de un fichero.
 *  @param[in] nombre_fichero: Fichero desde el que extrae el texto.
 *  @return Devuelve el texto del fichero.
 */
std::string ExtraeTextoFichero(const std::string& nombre_fichero) {
  // std::cout << "Entra en Extraer." << std::endl;
  std::ifstream fichero{nombre_fichero, std::ios_base::in};
  std::string texto_fichero{""}, linea{""};
  while (getline(fichero, linea)) {
    texto_fichero += linea;
    texto_fichero += "\n";
  }
  // std::cout << texto_fichero << std::endl;
  return texto_fichero;
}

/** 
 *  @brief Esta función quita una de cada dos palabras del texto.
 *  @param[in] texto: Texto del que quita las palabras.
 *  @return Devuelve el texto habiendo quitado una de cada dos palabras.
 */
std::string QuitaUnaDeCadaDosPalabras(const std::string& texto) {
  // std::cout << "Entra en Quitar." << std::endl;
  // std::cout << texto << std::endl;
  int contador_de_palabras{1};
  std::string texto_con_una_de_cada_dos{""};
  std::string palabra_actual{""};
  for (const auto &caracter_actual : texto) {
    // std::cout << caracter_actual << std::endl;
    if (caracter_actual == ' ' or caracter_actual == '\n') {
      // std::cout << contador_de_palabras << std::endl;
      if (contador_de_palabras % 2 != 0) {
        texto_con_una_de_cada_dos += palabra_actual;
      }
      if (caracter_actual != '\n') {
        ++contador_de_palabras;
      }
      palabra_actual = {""};
    }
    palabra_actual += caracter_actual;
    // std::cout << palabra_actual << std::endl;
  }
  std::cout << texto_con_una_de_cada_dos << std::endl;
  return texto_con_una_de_cada_dos;
}

/** Función main.
 *  @param[in] argc Número de parámetros
 *  @param[in] argv Vector con los parámetros
 */
int main(int argc, char* argv[]) {
  // Usage(argc, argv)
  const std::string kNombreFicheroEntrada{argv[1]};
  const std::string kNombreFicheroSalida{argv[2]};
  std::string texto_fichero{ExtraeTextoFichero(kNombreFicheroEntrada)};
  // std::cout << texto_fichero << std::endl;
  std::string texto_fichero_modificado{QuitaUnaDeCadaDosPalabras(texto_fichero)};
  // std::cout << texto_fichero_modificado << std::endl;
  return 0;
}