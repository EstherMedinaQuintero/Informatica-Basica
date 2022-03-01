#include <iostream>

int CantidadDeDigitos(const int numero) {
  int cantidad_digitos{0};
  int copia_numero{numero};
  while (copia_numero > 0) {
    copia_numero = copia_numero / 10;
    ++cantidad_digitos;
  }
  return cantidad_digitos;
}

int ElevarNumero(const int base, const int exponente) {
  int numero_elevado{1};
  for (int contador{0}; contador < exponente; ++contador) {
    numero_elevado *= base;
  }
  return numero_elevado;
}

bool EsDeArmstrong(const int numero) {
  const int kCantidadDigitos{CantidadDeDigitos(numero)};
  int suma_elevados{0};
  int copia_numero{numero};
  for (int contador{0}; contador < kCantidadDigitos; ++contador) {
    const int kDigito(copia_numero % 10);
    suma_elevados += ElevarNumero(kDigito, kCantidadDigitos);
  }
  return (suma_elevados == numero);
}

int ImprimeSolucion(const bool solucion, const int numero) {
  if (solucion == true) {
    std::cout << numero << " is an Armstrong number." << std::endl;
  } else {
    std::cout << numero << " is not an Armstrong number." << std::endl;
  }
  return 0;
}

int main(int argc, char* argv[]) {
  std::string numero_introducido = argv[1];
  const size_t kNumeroIntroducido = stoi(numero_introducido); 
  ImprimeSolucion(EsDeArmstrong(kNumeroIntroducido), kNumeroIntroducido);
  return 0;
}