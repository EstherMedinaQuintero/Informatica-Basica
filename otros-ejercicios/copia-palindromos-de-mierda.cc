// /**
//  * Universidad de La Laguna
//  * Escuela Superior de Ingeniería y Tecnología
//  * Grado en Ingeniería Informática
//  * Informática Básica
//  *
//  * @author Esther M. Quintero
//  * @date 19 Nov 2021
//  * @brief Programa que muestra un número palindrómico.
//  */

// #include <iostream>
// #include <cstring>
// #include <algorithm>

// // @brief Esta función comprueba si un número es primo o no
// // @param numero Es el número a comprobar
// bool EsPrimo(const int numero) {
//   if (numero == 0 || numero == 1 || numero == 4) {
//   std::cout << "NO" << std::endl;
//     return false; 
//   } 
//   for (int contador{2}; contador < numero / 2; contador++) {
//     if (numero % contador == 0) {
//       std::cout << "NO" << std::endl;
//       return false;
//     }
//   }
//   std::cout << "SI" << std::endl;
//   return true;
// }

// // @brief Esta función comprueba si un número es palíndromo
// // @param numero Es el número que comprueba
// bool EsPalindromo(const int numero) {
//   std::string numero_en_string{std::to_string(numero)};
//   std::cout << "Numero en string: " << numero_en_string << std::endl;
//   std::string numero_al_reves{numero_en_string};
//   std::reverse(numero_al_reves.begin(), numero_al_reves.end());
//   std::cout << "Numero al reves: " << numero_al_reves << std::endl;
//   if (numero_en_string == numero_al_reves) {
//     std::cout << "PALINDROMO" << std::endl;
//     return true;
//   }
//   std::cout << "NO PALINDROMO" << std::endl;
//   return false;
// }

// int main() {
//   int numero_introducido;
//   //std::cin >> numero_introducido;
//   while (std::cin >> numero_introducido) {
//     bool condicion{true};
//     while (condicion) {
//       for (int contador{1}; condicion; ++contador) {
//         int posicion_palindromo{1};
//         if ((EsPrimo(contador)) && (EsPalindromo(contador)) && (posicion_palindromo == numero_introducido)) {
//           std::cout << contador << std::endl;
//           condicion = false;
//           ++posicion_palindromo;
//         }
//       }
//     }
//   }
//   return 0;
// }

// /**
//  * Universidad de La Laguna
//  * Escuela Superior de Ingeniería y Tecnología
//  * Grado en Ingeniería Informática
//  * Informática Básica
//  *
//  * @author Esther M. Quintero
//  * @date 19 Nov 2021
//  * @brief Programa que muestra un número palindrómico.
//  */

// #include <iostream>
// #include <cstring>
// #include <algorithm>

// // @brief Esta función comprueba si un número es primo o no
// // @param numero Es el número a comprobar
// bool EsPrimo(const int& numero) {
//   if (numero == 0 || numero == 1 || numero == 4) {
//     return false; 
//   } 
//   for (int contador{2}; contador < (numero / 2); contador++) {
//     if (numero % contador == 0) {
//       return false;
//     }
//   }
//   return true;
// }

// // @brief Esta función comprueba si un número es palíndromo
// // @param numero Es el número que comprueba
// bool EsPalindromo(const int& numero) {
//   std::string cadena_numero{std::to_string(numero)};
//   std::string invertido(cadena_numero.rbegin(), cadena_numero.rend());
//   return (cadena_numero == invertido);
// }

// int main() {
//   int numero_introducido;
//   while (std::cin >> numero_introducido) {
//     std::string numero_string(std::to_string(numero_introducido));
//     bool condicion{true};
//     int posicion_palindroma{0};
//     for (int contador{1}; condicion; ++contador) {
//       if ((contador % 2 != 0) and (contador % 11 != 0)) {
//         if ((numero_string.length() != 4) and (numero_string.length() != 6) and (numero_string.length() != 8)) {
//           if ((EsPrimo(contador)) && (EsPalindromo(contador))) {
//             ++posicion_palindroma;
//           }
//           if (posicion_palindroma == numero_introducido) {
//             std::cout << contador - 1 << std::endl;
//             condicion = false;
//           }
//         }
//       }
//     }
//   }
//   return 0;
// }

/**
 * Universidad de La Laguna
 * Escuela Superior de Ingeniería y Tecnología
 * Grado en Ingeniería Informática
 * Informática Básica
 *
 * @author Esther M. Quintero
 * @date 19 Nov 2021
 * @brief Programa que muestra un número palindrómico.
 */

#include <iostream>
#include <cstring>
#include <algorithm>

// @brief Esta función comprueba si un número es primo o no
// @param numero Es el número a comprobar
bool EsPrimo(const int& numero) {
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

// @brief Esta función comprueba si un número es palíndromo
// @param numero Es el número que comprueba
bool EsPalindromo(const int& numero) {
  std::string cadena_numero{std::to_string(numero)};
  std::string invertido(cadena_numero.rbegin(), cadena_numero.rend());
  return (cadena_numero == invertido);
}

int main() {
  int numero_introducido;
  while (std::cin >> numero_introducido) {
    bool condicion{true};
    int posicion_palindroma{0};
    for (int contador{1}; condicion; ++contador) {
      if ((EsPrimo(contador)) && (EsPalindromo(contador))) {
        ++posicion_palindroma;
      }
      if (posicion_palindroma == numero_introducido) {
        std::cout << contador << std::endl;
        condicion = false;
      }
    }
  }
  return 0;
}