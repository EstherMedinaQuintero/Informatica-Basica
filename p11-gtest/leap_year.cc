#include <iostream>

/**
 * @brief Comprueba si un año bisiesto.
 * @param[in] anio: Año que se comprueba.
 * @return true si es bisiesto, false si no.
 */
bool EsBisiesto(int anio) {
  return (anio % 4 == 0 and anio % 100 != 0) or (anio % 100 == 0 and (anio / 100) % 4 == 0);
}

int main() {
  int anio_introducido;
  while (std::cin >> anio_introducido) {
    if (EsBisiesto(anio_introducido)) {
      std::cout << "YES" << std::endl;
    } else {
      std::cout << "NO" << std::endl;
    }
  }
  return 0;
}