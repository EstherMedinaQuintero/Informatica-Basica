/**
 * Universidad de La Laguna
 * Escuela Superior de Ingeniería y Tecnología
 * Grado en Ingeniería Informática
 * Informática Básica
 *
 * @author Esther M. Quintero
 * @date 13 Dic 2021
 * @brief Este programa encripta y desencripta ficheros.
 */

#include "cripto.h"

/** Función main.
 *  @param[in] argc Número de parámetros
 *  @param[in] argv Vector con los parámetros
 */
int main(int argc, char* argv[]) {
  Usage(argc, argv);
  const std::string kNombreFicheroEntrada{argv[1]};
  const std::string kNombreFicheroSalida{argv[2]};
  const std::string kMetodo{argv[3]};
  const std::string kOperacion{argv[5]};
  if (kMetodo == "2" and kOperacion == "+") {
    const int kContrasenaCaesar{std::stoi(argv[4])};
    EncriptarCaesar(kNombreFicheroEntrada, kNombreFicheroSalida, kContrasenaCaesar);
  } else if (kMetodo == "2" and kOperacion == "-") {
    const int kContrasenaCaesar{std::stoi(argv[4])};
    DesencriptarCaesar(kNombreFicheroEntrada, kNombreFicheroSalida, kContrasenaCaesar);
  } else {
    const std::string kContrasena{argv[4]};
    std::string contrasena{OperarContrasena(kContrasena)};
    EncriptarXOR(kNombreFicheroEntrada, kNombreFicheroSalida, contrasena);
  }
  return 0;
}