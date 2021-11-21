/**
 * Universidad de La Laguna
 * Escuela Superior de Ingeniería y Tecnología
 * Grado en Ingeniería Informática
 * Informática Básica
 *
 * @author Esther M. Quintero
 * @date 15 Nov 2021
 * @brief Este programa, dados tres números enteros, te muestra el mayor de ellos.
 */

#include <iostream>

// @brief Esta función escribe el mensaje inicial con la explicación del programa
int MensajeInicial() {
  std::cout << "Este programa te muestra el mayor de tres numeros enteros." << std::endl << "\n";
  return 0;
}

// @brief Esta función pasa una cantidad de años a segundos
// @param anios Es la cantidad de años que se quiere pasar a segundos
int DeAniosASegundos(const int anios) {
  const int kDiasAnio{365};
  const int kSegundosDia{86400};
  return anios * kDiasAnio * kSegundosDia;
}

// @brief Esta función pasa una cantidad de días a segundos
// @param dias Es la cantidad de días que se quiere pasar a segundos
int DeDiasASegundos(const int dias) {
  const int kSegundosDia{86400};
  return dias * kSegundosDia;
}

// @brief Esta función pasa una cantidad de horas a segundos
// @param horas Es la cantidad de horas que se quiere pasar a segundos
int DeHorasASegundos(const int horas) {
  const int kSegundosHora{3600};
  return horas * kSegundosHora;
}

// @brief Esta función pasa una cantidad de minutos a segundos
// @param minutos Es la cantidad de minutos que se quiere pasar a segundos
int DeMinutosASegundos(const int minutos) {
  const int kSegundosMinuto{60};
  return minutos * kSegundosMinuto;
}

int main () {
  //MensajeInicial()
  int anios_introducidos, dias_introducidos, horas_introducidas, minutos_introducidos, segundos_introducidos;
  std::cin >> anios_introducidos >> dias_introducidos >> horas_introducidas >> minutos_introducidos >> segundos_introducidos;
  std::cout << DeAniosASegundos(anios_introducidos) + DeDiasASegundos(dias_introducidos) + DeHorasASegundos(horas_introducidas) + DeMinutosASegundos(minutos_introducidos) + segundos_introducidos << std::endl;
  return 0;
}