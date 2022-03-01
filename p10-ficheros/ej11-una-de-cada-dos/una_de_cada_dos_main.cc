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

#include "una_de_cada_dos.h"

/** Función main.
 *  @param[in] argc Número de parámetros
 *  @param[in] argv Vector con los parámetros
 */
int main(int argc, char* argv[]) {
  // Usage(argc, argv)
  const std::string kNombreFicheroEntrada{argv[1]};
  const std::string kNombreFicheroSalida{argv[2]};
  std::string texto_fichero{ExtraeTextoFichero(kNombreFicheroEntrada)};
  std::string texto_fichero_modificado{QuitaUnaDeCadaDosPalabras(texto_fichero)};
  std::ofstream fichero_salida{kNombreFicheroSalida};
  fichero_salida << texto_fichero_modificado;
  return 0;
}