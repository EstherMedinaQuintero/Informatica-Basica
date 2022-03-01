/**
 * Universidad de La Laguna
 * Escuela Superior de Ingeniería y Tecnología
 * Grado en Ingeniería Informática
 * Informática Básica
 *
 * @author Esther M. Quintero
 * @date 12 Dic 2021
 * @brief Este programa, dado un fichero de texto que se pasa por parámetro,
 *        imprime la palabra con mayor número de vocales y la palabra con mayor
 *        número de consonantes (independientemente de si se trata de mayúsculas
 *        o minúsculas).
 */

#include "vocales_consonantes.h"

/** Función main.
 *  @param[in] argc Número de parámetros
 *  @param[in] argv Vector con los parámetros
 */
int main(int argc, char* argv[]) {
  Usage(argc, argv);
  /// Abrimos el fichero en modo lectura
  const std::string kNombreFichero{argv[1]};
  std::ifstream fichero{kNombreFichero, std::ios_base::in};
  /// Leemos las líneas del fichero
  std::string linea, mas_vocales, mas_consonantes;
  while (getline(fichero, linea)) {
    PalabraConMasVocales(linea, mas_vocales);
    PalabraConMasConsonantes(linea, mas_consonantes);
  }
  /// Imprimimos los resultados
  std::cout << "Palabra con más vocales: " << mas_vocales << std::endl;
  std::cout << "Palabra con más consonantes: " << mas_consonantes << std::endl;
  return 0;
}