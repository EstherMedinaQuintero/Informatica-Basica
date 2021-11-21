/**
 * Universidad de La Laguna
 * Escuela Superior de Ingeniería y Tecnología
 * Grado en Ingeniería Informática
 * Informática Básica
 *
 * @author Esther M. Quintero
 * @date 15 Nov 2021
 * @brief Este programa añade un segundo a un reloj dado y lo muestra.
 */

#include <iostream>

// @brief Esta función escribe el mensaje inicial con la explicación del programa
int MensajeInicial() {
  std::cout << "Este programa añade un segundo a un reloj dado y lo muestra." << std::endl << "\n";
  return 0;
}

// @brief Esta función imprime un reloj por pantalla
// @param horas, minutos, segundos Son las cantidades de cada tramo del reloj
int ImprimirReloj(const int horas, const int minutos, const int segundos) {
  const int kCero{0};
  const int kMaximoHoras{24};
  if (horas < 10) {
    std::cout << kCero << horas << ":";
  } else if (horas >= kMaximoHoras) {
    std::cout << kCero << kCero << ":";
  } else {
    std::cout << horas << ":";
  }
  if (minutos < 10) {
    std::cout << kCero << minutos << ":";
  } else {
    std::cout << minutos << ":";
  }
  if (segundos < 10) {
    std::cout << kCero << segundos << std::endl;
  } else {
    std::cout << segundos << std::endl;
  }
  return 0;
}

// @brief Esta función suma un segundo a un reloj
// @param horas, minutos, segundos Son los datos del reloj
int SumarUnSegundo(int& horas, int& minutos, int& segundos) {
  ++ segundos;
  int kMaximo{60};
  if (segundos >= kMaximo) {
    ++minutos;
    segundos -= kMaximo;
  }
  if (minutos >= kMaximo) {
    ++horas;
    minutos -= kMaximo;
  }
  return 0;
}

int main () {
  //MensajeInicial()
  int horas_introducidas, minutos_introducidos, segundos_introducidos;
  std::cin >> horas_introducidas >> minutos_introducidos >> segundos_introducidos;
  SumarUnSegundo(horas_introducidas, minutos_introducidos, segundos_introducidos);
  ImprimirReloj(horas_introducidas, minutos_introducidos, segundos_introducidos);
  return 0;
}