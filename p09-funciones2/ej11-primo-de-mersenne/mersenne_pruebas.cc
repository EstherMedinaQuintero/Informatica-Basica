#include <iostream>

bool EsPrimo(const int numero) {
  if (numero == 0 || numero == 1 || numero == 4) {
    return false; 
  } 
  for (int contador{2}; contador < (numero / 2); contador++) {
    if (numero % contador == 0) {
      return false;
    }
  }
  return true;
}

int ElevarNumero(const int base, const int exponente) {
  int numero_elevado{1};
  for (int contador{0}; contador < exponente; ++contador) {
    numero_elevado *= base;
  }
  return numero_elevado;
}

int NumeroMersenne(const int numero) {
  const int kDos{2};
  const int kUno{1};
  return ElevarNumero(kDos, numero) - kUno;
}

int MersennePrimo(const int limite) {
  const int kUno{1};
  int cuenta_posicion{1};
  int contador{2};
  while (cuenta_posicion != limite + kUno) {
    if (EsPrimo(contador) && EsPrimo(NumeroMersenne(contador))) {
      std::cout << NumeroMersenne(contador) << std::endl;
      ++cuenta_posicion;
    }
    ++contador;
  }
  return 0;
}

int main(int argc, char* argv[]) {
  std::string numero_introducido = argv[1];
  const size_t kNumeroIntroducido = stoi(numero_introducido); 
  MersennePrimo(kNumeroIntroducido);
  return 0;
}