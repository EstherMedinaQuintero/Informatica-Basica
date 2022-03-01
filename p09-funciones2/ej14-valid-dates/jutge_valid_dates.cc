/**
 * Universidad de La Laguna
 * Escuela Superior de Ingeniería y Tecnología
 * Grado en Ingeniería Informática
 * Informática Básica
 *
 * @author Esther M. Quintero
 * @date 09 Dic 2021
 * @brief Este programa comprueba si una fecha es válida.
 * @see [https://jutge.org/problems/P58459_en]
 */

#include <iostream>

/** 
 *  @brief Esta función comprueba si un año es bisiesto.
 *  @param anio: Año que comprueba.
 *  @return Devuelve true si es bisiesto y false si no.
 */
bool ComprobarBisiesto(const int& anio) {
  if ((anio % 4 == 0) and (anio % 100 != 0)) {
    return true;
  } 
  if ((anio % 100 == 0) and ((anio / 100) % 4 == 0 )) {
    return true;
  }
  return false;
}

/** 
 *  @brief Esta función comprueba si un año es válido.
 *  @param d: Día.
 *  @param m: Mes.
 *  @param y: Año.
 *  @return Devuelve true si es válido y false si no.
 */
bool is_valid_date(int d, int m, int y) {
  if (!(1800 <= y <= 9999)) { // Casos obvios de años no válidos
    return false;
  }
  if (!(1 <= m <= 12)) { // Casos obvios de meses no válidos
    return false;
  }
  if (!(1 <= d <= 31)) { // Casos obvios de días no válidos
    return false;
  }
  if (!ComprobarBisiesto(y)) {
    if ((m == 2) and (d == 28)) { // Comprobamos febrero primero
      return false;
    } else if ((m == 2) and (1 <= d <= 27)) {
      return true;
    }
  }
  return true;
}

int main() {
  int dia, mes, anio;
  std::cin >> dia >> mes >> anio;
  std::cout << is_valid_date(dia, mes, anio) << std::endl;
  return 0;
}
