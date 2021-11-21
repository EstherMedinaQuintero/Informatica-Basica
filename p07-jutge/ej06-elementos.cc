/**
 * Universidad de La Laguna
 * Escuela Superior de Ingeniería y Tecnología
 * Grado en Ingeniería Informática
 * Informática Básica
 *
 * @author Esther M. Quintero
 * @date 15 Nov 2021
 * @brief Este programa dice quien gana un enfrentamiento entre elementos.
 */

#include <iostream>

// @brief Esta función escribe el mensaje inicial con la explicación del programa
int MensajeInicial() {
  std::cout << "Este programa dice quien gana un enfrentamiento entre elementos." << std::endl << "\n";
  return 0;
}

// @brief Esta función dice quién es el ganador al enfrentar dos elementos
// @param primer_elemento, segundo_elementos Son los elementos que enfrenta
int EnfrentarElementos(const char primer_elemeto, const char segundo_elemento) {
  const char kAgua{'A'};
  const char kPiedra{'P'};
  const char kViento{'V'};
  if (primer_elemeto == segundo_elemento) {
    return 0;
  } else if ((primer_elemeto == kAgua) && (segundo_elemento == kPiedra)) {
    return 1;
  } else if ((primer_elemeto == kAgua) && (segundo_elemento == kViento)) {
    return 2;
  } else if ((primer_elemeto == kPiedra) && (segundo_elemento == kAgua)) {
    return 2;
  } else if ((primer_elemeto == kPiedra) && (segundo_elemento == kViento)) {
    return 1;
  } else if ((primer_elemeto == kViento) && (segundo_elemento == kAgua)) {
    return 1;
  } else if ((primer_elemeto == kViento) && (segundo_elemento == kPiedra)) {
    return 2;
  }
  return 0;
}

int main() {
 //MensajeInicial()
 char primera_letra, segunda_letra;
 std::cin >> primera_letra >> segunda_letra;
 if (EnfrentarElementos(primera_letra, segunda_letra) == 0) {
   std::cout << "-" << std::endl;
 } else {
   std::cout << EnfrentarElementos(primera_letra, segunda_letra) << std::endl;
 }
 return 0;
}