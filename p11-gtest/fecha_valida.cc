#include <iostream>

/**
 * @brief Comprueba si un año bisiesto.
 * @param[in] anio: Año que se comprueba.
 * @return true si es bisiesto, false si no.
 */
bool EsBisiesto(int anio) {
  return (anio % 4 == 0 and anio % 100 != 0) or (anio % 100 == 0 and (anio / 100) % 4 == 0);
}

/**
 * @brief Calcula la cantidad de dias de un mes del año.
 * @param[in] mes: Mes
 * @param[in] anio: Año.
 * @return Devuelve el número de días del mes.
 */
int NumeroDeDias(int mes, int anio) {
  int dias;
  if (mes == 2 and EsBisiesto(anio)) {
    dias = 29;
  } else if (mes == 2) {
    dias = 28;
  } else {
    if (mes == 1 or mes == 3 or mes == 5 or mes == 7 or mes == 8 or mes == 10 or mes == 12) {
      dias = 31;
    } else {
      dias = 30;
    }
  }
  return dias;
}

/**
 * @brief Comprueba fechas.
 * @param[in] dias: Días que se comprueban.
 * @param[in] mes: Mes que se comprueba.
 * @param[in] anio: Año que se comprueba.
 * @return true si es válida, false si no.
 */
bool is_valid_date(int d, int m, int y) {
  return NumeroDeDias(m, y) >= d and d > 0 and m > 0 and 12 >= m;
}

int main() {
  std::cout << is_valid_date(29, 2, 2000) << std::endl;
  std::cout << is_valid_date(29, 2, 3000) << std::endl;
  std::cout << is_valid_date(-3, 14, 2000) << std::endl;
  std::cout << is_valid_date(1, -10, 1984) << std::endl;
  return 0;
}