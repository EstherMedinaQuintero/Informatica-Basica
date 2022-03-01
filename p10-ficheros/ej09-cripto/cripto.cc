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

/** Muestra el modo de uso correcto del programa
 *  En caso de que el uso no sea el correcto, muestra el mensaje y finaliza
 *  la ejecución del programa.
 *  @param[in] argc Número de parámetros.
 *  @param[in] argv Vector con los parámetros.
 */
void Usage(int argc, char *argv[]) {
  if (argc < 2) {
    std::cout << argv[0] << "-- Cifrado de ficheros." << std::endl;
    std::cout << "Modo de uso: " << argv[0] << " fichero_entrada fichero_salida método password operación" << std::endl;
    std::cout << "Pruebe " << argv[0] << " --help para más información." << std::endl;
    exit(EXIT_SUCCESS);
  }
  std::string parameter{argv[1]};
  if (parameter == "--help") {
    std::cout << argv[0] << "-- Cifrado de ficheros." << std::endl;
    std::cout << "Modo de uso: " << argv[0] << " fichero_entrada fichero_salida método password operación" << std::endl;
    std::cout << "fichero_entrada:  Fichero a codificar \n \
                  fichero_salida:   Fichero codificado \n \
                  método:           Indica el método de encriptado \n \
                                      1: Cifrado XOR \n \
                                      2: Cifrado de César \n \
                  password:         Palabra secreta en el caso del método 1, valor de k en el método 2 \n \
                  operación:        Operación a realizar en el fichero \n \
                                      +: encriptar el fichero \n \
                                      -: desencriptar el fichero \n";
    exit(EXIT_SUCCESS);
  }
}

/** 
 *  @brief Esta función codifica una letra en el método de César.
 *  @param[in] letra: Letra que codifica.
 *  @param[in] numero: Número que usa para codificar.
 *  @return Devuelve la letra codificada.
 */
char CodificarCaracterCaesar(const char letra, const int numero) {
  if (isalpha(letra)) {
    if (isupper(letra)) {
      return 'A' + (letra - 'A' + numero) % 26;
    } else {
      return 'a' + (letra - 'a' + numero) % 26;
    }
  } else if (letra == ',') {
    return '-';
  } else if (letra == ' ') {
    return '!';
  } 
  return letra;
}

/** 
 *  @brief Esta función descodifica una letra en el método de César.
 *  @param[in] letra: Letra que descodifica.
 *  @param[in] numero: Número que usa para descodificar.
 *  @return Devuelve la letra descodificada.
 */
char DescodificarCaracterCaesar(const char letra, const int numero) {
  if (isalpha(letra)) {
    if (isupper(letra)) {
      return 'A' + (letra - 'A' - numero) % 26;
    } else {
      return 'a' + (letra - 'a' - numero) % 26;
    }
  } else if (letra == '-') {
    return ',';
  } else if (letra == '!') {
    return ' ';
  } 
  return letra;
}

/** 
 *  @brief Esta función codifica un fichero en el método de César.
 *  @param[in] nombre_fichero_entrada: Fichero que codifica.
 *  @param[in] nombre_fichero_salida: Fichero en el que guarda lo codificado.
 *  @param[in] numero: Número con el que codifica.
 */
void EncriptarCaesar(const std::string& nombre_fichero_entrada, const std::string& nombre_fichero_salida, const int numero) {
  std::ifstream fichero_entrada{nombre_fichero_entrada, std::ios_base::in};
  std::ofstream fichero_salida{nombre_fichero_salida};
  std::string linea;
  while (getline(fichero_entrada, linea)) {
    for (const auto &caracter_actual : linea) {
      fichero_salida << CodificarCaracterCaesar(caracter_actual, numero);
    }
  }
}

/** 
 *  @brief Esta función descodifica un fichero en el método de César.
 *  @param[in] nombre_fichero_entrada: Fichero que descodifica.
 *  @param[in] nombre_fichero_salida: Fichero en el que guarda lo descodificado.
 *  @param[in] numero: Número con el que descodifica.
 */
void DesencriptarCaesar(const std::string& nombre_fichero_entrada, const std::string& nombre_fichero_salida, const int numero) {
  std::ifstream fichero_entrada{nombre_fichero_entrada, std::ios_base::in};
  std::ofstream fichero_salida{nombre_fichero_salida};
  std::string linea;
  while (getline(fichero_entrada, linea)) {
    for (const auto &caracter_actual : linea) {
      fichero_salida << DescodificarCaracterCaesar(caracter_actual, numero);
    }
  }
}

/** 
 *  @brief Esta función codifica un fichero en el método xor.
 *  @param[in] nombre_fichero_entrada: Fichero que codifica.
 *  @param[in] nombre_fichero_salida: Fichero en el que guarda lo codificado.
 *  @param[in] contrasena: Contraseña con la que codifica.
 */
void EncriptarXOR(const std::string& nombre_fichero_entrada, const std::string& nombre_fichero_salida, const std::string& contrasena) {
  // std::cout << "Entra en la función XOR." << std::endl;
  std::ifstream fichero_entrada{nombre_fichero_entrada, std::ios_base::in};
  std::ofstream fichero_salida{nombre_fichero_salida, std::ios_base::app};
  std::string linea;
  while (getline(fichero_entrada, linea)) {
    // std::cout << "Linea que mira: " << linea << std::endl;
    std::string linea_encriptada = linea;
    // std::cout << "Linea encriptada (sin encriptar): " << linea_encriptada << std::endl;
    for (int i{0}; i < static_cast<int>(linea.length()); i ++) {
      // std::cout << "Ha entrado en el bucle for." << std::endl;
      linea_encriptada[i] = linea[i] ^ contrasena[i % (sizeof(contrasena) / sizeof(char))];
      // std::cout << "Ha encriptado esto: " << linea_encriptada[i] << std::endl;
    }
    fichero_salida << linea_encriptada;
  }
}

/** 
 *  @brief Esta función arregla la contraseña del codificado xor.
 *  @param[in] contrasena: Contraseña que arregla.
 *  @return Devuelve la contraseña arreglada.
 */
std::string OperarContrasena(const std::string& contrasena) {
  std::string nueva_contrasena;
  for (const auto &caracter_actual : contrasena) {
    nueva_contrasena += caracter_actual ^ 128;
  }
  return nueva_contrasena;
}