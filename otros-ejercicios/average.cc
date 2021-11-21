/**
 * Universidad de La Laguna
 * Escuela Superior de Ingeniería y Tecnología
 * Grado en Ingeniería Informática
 * Informática Básica
 *
 * @author Esther M. Quintero
 * @date 19 Nov 2021
 * @brief Programa calcula la media de números reales positivos introducidos
 */

#include <iostream>
#include <cstring>
#include <vector>
#include <iomanip>

// @brief Esta función escribe el mensaje inicial con la explicación del programa
int MensajeInicial() {
  std::cout << "Este programa calcula y muestra la media." << std::endl;
  return 0;
}

// @brief Esta función separa un string por los espacios
// @param frase Es el string que queremos separar
std::vector<std::string> SeparaPorEstacios(std::string& frase) {
  std::string separador{" "};
  std::vector<std::string> separado{};
  size_t pos = 0; // Almacena la posición del espacio que encontrará
  while ((pos = frase.find(separador)) != std::string::npos) {
    separado.push_back(frase.substr(0, pos));
    frase.erase(0, pos + separador.length());
  }
  separado.push_back(frase); // Añade el último elemento
  // for (const auto &str : separado) {
  //   std::cout << "Elemento:" << str << std::endl;
  // }
  return separado;
}

int main() {
  // MensajeInicial()
  std::string numeros_introducidos;
  std::getline(std::cin, numeros_introducidos);
  std::vector<std::string> numeros_separados{SeparaPorEstacios(numeros_introducidos)};
  double media{0};
  double suma{0};
  // std::cout << "Tamaño vector: " << numeros_separados.size() << std::endl;
  for (int contador{0}; contador < numeros_separados.size(); ++contador) {
    suma += std::stod(numeros_separados[contador]);
    // std::cout << "Elemento vector: " << numeros_separados[contador] << std::endl;
  }
  media = suma / double(numeros_separados.size());
  std::cout << std::fixed << std::setprecision(2) << media << std::endl;
  return 0;
}