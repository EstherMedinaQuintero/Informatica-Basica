/**
 * Universidad de La Laguna
 * Escuela Superior de Ingeniería y Tecnología
 * Grado en Ingeniería Informática
 * Informática Básica
 *
 * @author Esther M. Quintero
 * @date Ene 03 2021
 * @brief Clase fecha
 */

#include <iostream>

#ifndef FECHA_H
#define FECHA_H

bool EsBisiesto(int anio);
int NumeroDeDias(int mes, int anio);
bool FechaValida(int dias, int mes, int anio);

/**
 * @brief Clase fecha.
 */
class Fecha {
 private:
  int dia_;
  int mes_;
  int anio_;
 public:
  Fecha() : dia_{1}, mes_{1}, anio_{1} { }
  Fecha(int dia, int mes, int anio) :  dia_{dia}, mes_{mes}, anio_{anio} {
    if (!FechaValida(dia, mes, anio)) {
      dia_ = 1;
      mes_ = 1;
      anio_ = 1;
      std::cout << "La fecha introducida no es válida. Se ha modificado su fecha a la fecha por defecto: 1/1/1" << std::endl;
    }
    std::cout << "Ejecutado el constructor con parámetros de fecha." << std::endl;
  }
  int dia() const { return dia_; }
  int mes() const { return mes_; }
  int anio() const { return anio_; }
  void setDia(int dia) { dia_ = dia; };
  void setMes(int mes) { mes_ = mes; };
  void setAnio(int anio) { anio_ = anio; };
  /// Operador entrada
  friend std::istream& operator>> (std::istream& in, Fecha& fecha);
};

/// Operador salida
std::ostream& operator<< (std::ostream& out, const Fecha& fecha);
/// Año bisiesto
bool EsBisiesto(const Fecha& fecha);
/// Comparación de fechas
bool operator== (const Fecha& fecha1, const Fecha& fecha2);
bool operator!= (const Fecha& fecha1, const Fecha& fecha2);
bool operator> (const Fecha& fecha1, const Fecha& fecha2);
bool operator>= (const Fecha& fecha1, const Fecha& fecha2);
bool operator< (const Fecha& fecha1, const Fecha& fecha2);
bool operator<= (const Fecha& fecha1, const Fecha& fecha2);
/// Uso del programa fechas
void Usage(int argc, char *argv[]);
/// Siguiente día a una fecha
void AyudaIncremento();
bool finDeMes(int dia, int mes, int anio);
void AyudaIncremento(int dia, int mes, int anio);
void operator+=(Fecha& fecha, int diasparasumar);
/// Para pasar de un string a un objeto de Fecha
Fecha StringAFecha(const std::string& fecha);

#endif