/**
 * Universidad de La Laguna
 * Escuela Superior de Ingeniería y Tecnología
 * Grado en Ingeniería Informática
 * Informática Básica
 *
 * @author Esther M. Quintero
 * @date Ene 02 2021
 * @brief Implementación de la clase vector
 */

#include <iostream>
#include <vector>
#include <cmath>

#include "compute.h"

/** 
 *  @brief Calcula el factorial de un número.
 *  @param numero: Número al que se quiere llegar (n).
 *  @return Devuelve el factorial de un número..
 */
int ComputeInt::Factorial(int numero) {
  int factorial{1};
  int copianum{numero};
  for (int contador{0}; contador < numero; ++contador) {
    factorial *= copianum;
    --copianum;
  }
  return factorial;
}

/** 
 *  @brief Dado un n, devuelve 1 + 2 + ... + n.
 *  @param limite: Número al que se quiere llegar (n).
 *  @return Devuelve la suma de la serie.
 */
int ComputeInt::SumSerie(int limite) {
  int suma{0};
  for (int contador{1}; contador <= limite; ++contador) {
    suma += contador;
  }
  return suma;
}

/** 
 *  @brief Esta función calcula la cantidad de dígitos de un número.
 *  @param numero: Número para calcular sus dígitos.
 *  @return Devuelve la cantidad de dígitos de un número.
 */
int CantidadDeDigitos(int numero) {
  int cantidad_digitos{0};
  int copia_numero{numero};
  while (copia_numero > 0) {
    copia_numero = copia_numero / 10;
    ++cantidad_digitos;
  }
  return cantidad_digitos;
}

/** 
 *  @brief Esta función eleva un número.
 *  @param base: Base del número.
 *  @param exponente: Exponente del número.
 *  @return Devuelve la base elevada al exponente.
 */
int ElevarNumero(int base, int exponente) {
  int numero_elevado{1};
  for (int contador{0}; contador < exponente; ++contador) {
    numero_elevado *= base;
  }
  return numero_elevado;
}

/** 
 *  @brief Esta función comprueba si un número es de Armstrong.
 *  @param numero: Número que comprueba.
 *  @return Devuelve true si es de Armstrong y false si no.
 */
bool ComputeInt::EsArmstrong(int numero) {
  const int kCantidadDigitos{CantidadDeDigitos(numero)};
  int suma_elevados{0};
  int copia_numero{numero};
  for (int contador{0}; contador < kCantidadDigitos; ++contador) {
    const int kDigito(copia_numero % 10);
    suma_elevados += ElevarNumero(kDigito, kCantidadDigitos);
  }
  return (suma_elevados == numero);
}

/**
 * @brief Esta función comprueba si un número es perfecto. 
 * @param numero El número que va a comprobar.
 * @return true Si es perfecto y false si no es perfecto.
 */
bool ComputeInt::EsPerfecto(int numero) {
  int suma{0};
  for (int i{1}; i < numero; ++i) {
    if (numero % i == 0) {
      suma += i;
    }
  }
  if (suma == numero and numero != 0) {
    return true;
  }
  return false;
}

/**
 * @brief Esta función comprueba si un número es primo. 
 * @param numero El número que va a comprobar.
 * @return true Si es primo y false si no es primo.
 */
bool ComputeInt::EsPrimo(int numero) {
  if (numero <= 3) {
    return numero > 1;
  }
  if (numero % 2 == 0 || numero % 3 == 0) {
    return false;
  }
  for (int contador{5}; contador * contador <= numero; ++contador) {
    if (numero % contador == 0) {
      return false;
    }
  }
  return true;
}

/**
 * @brief Esta función comprueba si un número es primo y perfecto. 
 * @param numero El número que va a comprobar.
 * @return true Si es primo perfecto y false si no.
 */
bool ComputeInt::EsPrimoPerfecto(int numero) {
  int copia_numero{numero};
  bool condicion{false}; /// La condición es si hemos llegado a una cifra
  int suma_digitos{0};
  while (!condicion) {
    while (copia_numero != 0) { /// Separamos en cifras
      suma_digitos += copia_numero % 10;
      copia_numero /= 10;
    }
    if (!EsPrimo(suma_digitos)) { /// Si no es primo, dejamos de comprobar
      return false;
    }
    if (suma_digitos < 10) { /// Miramos si llegamos a una cifra
      condicion = true;
    }
    copia_numero = suma_digitos; /// Si no, reiniciamos pero con la suma
    suma_digitos = 0;
  }
  return true; /// Si llegamos aquí, es que el último era primo
}

/**
 * @brief Esta función comprueba si un número está balanceado. 
 * @param numero El número que va a comprobar.
 * @return true Si está balanceado y false si no.
 */
bool ComputeInt::EstaBalanceado(int numero) {
  int suma_pares{0}, suma_impares{0}, digito{0}, copia_n{numero}, contador{1};
  while (copia_n > 0) {
    digito = copia_n % 10;
    copia_n = copia_n / 10;
    if (contador % 2 == 0) {
      suma_impares += digito;
    } else {
      suma_pares += digito;
    }
    ++contador;
  }
  if (suma_pares == suma_impares) {
    return true;
  } else {
    return false;
  }
}

/**
 * @brief Esta función calcula los divisores de un numero. 
 * @param numero El número que va a comprobar.
 * @return Devuelve un vector con los divisores.
 */
std::vector<int> Divisores(int numero) {
  int contador;
  std::vector<int> divisores{};
  /// En este bucle se revisan los divisores hasta la raíz.
  for (contador = 1; (contador * contador) < numero; contador++) {
    if (numero % contador == 0) {
      divisores.push_back(contador);
    }
  }
  /// En este bucle se revisar los divisores desde la raíz hasta el número.
  /// Añadí la segunda condición del if para evitar que se repitan divisores.
  for ( ; contador >= 1; contador--) {
    if ((numero % contador == 0) and (numero / contador != contador - 1)) {
      divisores.push_back(numero / contador);
    }
  }
  return divisores;
}

/**
 * @brief Esta función comprueba si dos números son coprimos. 
 * @param numero1.
 * @param numero2.
 * @return true Si son coprimos y false si no.
 */
bool ComputeInt::SonPrimosRelativos(int numero1, int numero2) {
  std::vector<int> divisores1{Divisores(numero1)};
  std::vector<int> divisores2{Divisores(numero2)};
  int cantidad_de_iguales{0};
  if (divisores1.size() < divisores2.size()) {
    for (int contador{0}; contador < static_cast<int>(divisores1.size()); ++contador) {
      if (divisores1[contador] == divisores2[contador]) {
        ++cantidad_de_iguales;
      }
    }
  } else {
    for (int contador{0}; contador < static_cast<int>(divisores2.size()); ++contador) {
      if (divisores1[contador] == divisores2[contador]) {
        ++cantidad_de_iguales;
      }
    }
  }
  return (cantidad_de_iguales == 1);
}