/**
 * Universidad de La Laguna
 * Escuela Superior de Ingeniería y Tecnología
 * Grado en Ingeniería Informática
 * Informática Básica
 *
 * @author Esther M. Quintero
 * @date 12 Dic 2021
 * @brief Este programa, dado un fichero de texto que se pasa por parámetro,
 *        rota las vocales minúsculas que encuentra. Cambia a por e, e por i, 
 *        i por o, o por u, u por a.
 */

#include "rotate.h"

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
 *  @brief Esta función comprueba si una letra es vocal minúscula o no.
 *  @param[in] letra: Letra que comprueba.
 *  @return Devuelve true si es vocal minúscula y false si no.
 */
bool EsVocalMinuscula(const char letra) {
  return (letra == 'a' or letra == 'e' or letra== 'i' or letra == 'o' or letra == 'u');
}

/** 
 *  @brief Esta función rueda una vocal una posición.
 *  @param[in] vocal: Letra que rueda.
 *  @return Devuelve la siguiente vocal.
 */
char VocalRodada(const char vocal) {
  const char kAMinus{'a'}, kEMinus{'e'}, kIMinus{'i'}, kOMinus{'o'}, kUMinus{'u'};
  if (vocal == kAMinus) {
    return kEMinus;
  }
  if (vocal == kEMinus) {
    return kIMinus;
  }
  if (vocal == kIMinus) {
    return kOMinus;
  }
  if (vocal == kOMinus) {
    return kUMinus;
  }
  if (vocal == kUMinus) {
    return kAMinus;
  }
  return 0;
}

/** 
 *  @brief Esta función borra las líneas vacias de un fichero.
 *  @param[in] nombre_fichero: Fichero del que se quieren borrar las línas vacias.
 *  @return No devuelve nada.
 */
int RuedaVocales(const std::string& nombre_fichero) {
  /// Abrimos el fichero de entrada en modo lectura
  std::ifstream fichero_entrada{nombre_fichero, std::ios_base::in};
  /// Leemos las líneas del fichero y las añadimos
  std::string linea;
  std::string texto_con_vocales_rodadas{""};
  while (getline(fichero_entrada, linea)) {
    for (const auto &caracter_actual : linea) {
      if (EsVocalMinuscula(caracter_actual)) {
        texto_con_vocales_rodadas += VocalRodada(caracter_actual);
      } else {
        texto_con_vocales_rodadas += caracter_actual;
      }
    }
    texto_con_vocales_rodadas += '\n';
  }
  /// Abrimos el fichero de entrada en modo escritura para sobreescribirlo
  std::ofstream fichero_sobreescrito{nombre_fichero};
  fichero_sobreescrito << texto_con_vocales_rodadas;
  return 0;
}