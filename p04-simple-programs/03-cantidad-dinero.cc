/**
 * Universidad de La Laguna
 * Escuela Superior de Ingeniería y Tecnología
 * Grado en Ingeniería Informática
 * Informática Básica
 *
 * @author Esther M. Quintero
 * @date 26 Oct 2021
 * @brief Programa que calcula una cantidad de dinero dada una cantidad de billetes y monedas
 */

#include <iostream>

int main () {
  
  std::cout << "Este programa solicita una cantidad de monedas/billetes y muestra el dinero total." << std::endl;

  int cantidad_monedas_1centimo{0};
  std::cout << "¿Cuantas monedas de 1 centimo tiene? Introduzca una cantidad entera: ";
  std::cin >> cantidad_monedas_1centimo;

  int cantidad_monedas_5centimos{0};
  std::cout << "¿Cuantas monedas de 5 centimos tiene? Introduzca una cantidad entera: ";
  std::cin >> cantidad_monedas_5centimos;

  int cantidad_monedas_20centimos{0};
  std::cout << "¿Cuantas monedas de 20 centimos tiene? Introduzca una cantidad entera: ";
  std::cin >> cantidad_monedas_20centimos;

  int cantidad_monedas_50centimos{0};
  std::cout << "¿Cuantas monedas de 50 centimos tiene? Introduzca una cantidad entera: ";
  std::cin >> cantidad_monedas_50centimos;

  int cantidad_billetes_5euros{0};
  std::cout << "¿Cuantos billetes de 5 euros tiene? Introduzca una cantidad entera: ";
  std::cin >> cantidad_billetes_5euros;

  int cantidad_billetes_10euros{0};
  std::cout << "¿Cuantos billetes de 10 euros tiene? Introduzca una cantidad entera: ";
  std::cin >> cantidad_billetes_10euros;

  int cantidad_billetes_20euros{0};
  std::cout << "¿Cuantos billetes de 20 euros tiene? Introduzca una cantidad entera: ";
  std::cin >> cantidad_billetes_20euros;
  
  int cantidad_billetes_50euros{0};
  std::cout << "¿Cuantos billetes de 50 euros tiene? Introduzca una cantidad entera: ";
  std::cin >> cantidad_billetes_50euros;

  int cantidad_billetes_100euros{0};
  std::cout << "¿Cuantos billetes de 100 euros tiene? Introduzca una cantidad entera: ";
  std::cin >> cantidad_billetes_100euros;

  int cantidad_billetes_200euros{0};
  std::cout << "¿Cuantos billetes de 200 euros tiene? Introduzca una cantidad entera: ";
  std::cin >> cantidad_billetes_200euros;

  int cantidad_billetes_500euros{0};
  std::cout << "¿Cuantos billetes de 500 euros tiene? Introduzca una cantidad entera: ";
  std::cin >> cantidad_billetes_500euros;

  double dinero_total{0.01 * cantidad_monedas_1centimo + 0.05 * cantidad_monedas_5centimos + 0.20 * cantidad_monedas_20centimos
                      + 0.50 * cantidad_monedas_50centimos + 5.0 * cantidad_billetes_5euros + 10.0 * cantidad_billetes_10euros
                      + 20.0 * cantidad_billetes_20euros + 50.0 *  cantidad_billetes_50euros + 100.0 * cantidad_billetes_100euros
                      + 200.0 *  cantidad_billetes_200euros + 500.0 * cantidad_billetes_500euros};

  std::cout << "El total es " << dinero_total << " euros." << std::endl;

  return 0;
}