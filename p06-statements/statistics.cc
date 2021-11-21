/**
 * Universidad de La Laguna
 * Escuela Superior de Ingeniería y Tecnología
 * Grado en Ingeniería Informática
 * Informática Básica
 *
 * @author Esther M. Quintero
 * @date 09 Nov 2021
 * @brief Programa que inicializa un vector con valores aleatorios, calcula su media, su mínimo y su máximo.
 */

#include <cstdlib>
#include <ctime>
#include <iostream>
#include <vector>

int ImprimirVector(const std::vector<double> valores_aleatorios) {
  std::cout << "El vector resultante es: [ ";
  for (int contador{0}; contador < valores_aleatorios.size(); ++contador) {
    std::cout << valores_aleatorios[contador] << " ";
  }
  std::cout << "]" << std::endl;
  return 0;
}

double ValorMedio(const std::vector<double> valores_aleatorios) {
  double suma{0};
  for (int contador{0}; contador < valores_aleatorios.size(); ++contador) {
    suma += valores_aleatorios[contador];
  }
  double media{suma / float(valores_aleatorios.size())};
  return media;
}

double ValorMaximo(const std::vector<double> valores_aleatorios) {
  double valor_maximo{0.0};
  for (int contador{0}; contador < valores_aleatorios.size(); ++contador) {
    if (valores_aleatorios[contador] > valor_maximo) {
      valor_maximo = valores_aleatorios[contador];
    }
  }
  return valor_maximo;
}

double ValorMinimo(const std::vector<double> valores_aleatorios) {
  double valor_minimo{10.0};
  for (int contador{0}; contador < valores_aleatorios.size(); ++contador) {
    if (valores_aleatorios[contador] < valor_minimo) {
      valor_minimo = valores_aleatorios[contador];
    }
  }
  return valor_minimo;
}

int main() {
  std::cout << "Este programa declara un vector con valores aleatorios, calcula su media, su valor minimo y su valor maximo." << std::endl;
  const int kVectorSize{5};
  std::vector<double> valores_aleatorios{};
  srand((unsigned int)time(NULL));
  for (int contador{0}; contador < kVectorSize; ++contador) {
    valores_aleatorios.push_back(double(rand()) / double((RAND_MAX)) * 10.0);
  }
  // ImprimirVector(valores_aleatorios);
  std::cout << "El valor medio es: " << ValorMedio(valores_aleatorios) << std::endl;
  std::cout << "El valor maximo es: " << ValorMaximo(valores_aleatorios) << std::endl;
  std::cout << "El valor minimo es: " << ValorMinimo(valores_aleatorios) << std::endl;
  return 0;
}