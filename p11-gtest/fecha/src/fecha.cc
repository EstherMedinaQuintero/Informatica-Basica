/**
 * Universidad de La Laguna
 * Escuela Superior de Ingeniería y Tecnología
 * Grado en Ingeniería Informática
 * Informática Básica
 *
 * @author Esther M. Quintero
 * @date Ene 03 2021
 * @brief Implementación de la clase fecha
 */

#include <iostream>
#include <vector>
#include <string>
#include <regex>

#include "fecha.h"

/** Muestra el modo de uso correcto del programa
 *  En caso de que el uso no sea el correcto, muestra el mensaje y finaliza
 *  la ejecución del programa.
 *  @param[in] argc Numbero de parámetros.
 *  @param[in] argv Vector con los parámetros.
 */
void Usage(int argc, char *argv[]) {
  if (argc > 4) {
    std::cout << argv[0] << ": Ha introducido más de tres parámetros." << std::endl;
    std::cout << "Pruebe " << argv[0] << " --help para más información." << std::endl;
    exit(EXIT_SUCCESS);
  }
  if (argc == 3) {
    std::cout << argv[0] << ": Falta un parámetro." << std::endl;
    std::cout << "Pruebe " << argv[0] << " --help para más información." << std::endl;
    exit(EXIT_SUCCESS);
  }
  if (argc == 2) {
    std::cout << argv[0] << ": Faltan dos parámetros." << std::endl;
    std::cout << "Pruebe " << argv[0] << " --help para más información." << std::endl;
    exit(EXIT_SUCCESS);
  }
  if (argc == 1) {
    std::cout << argv[0] << ": Faltan tres parámetros." << std::endl;
    std::cout << "Pruebe " << argv[0] << " --help para más información." << std::endl;
    exit(EXIT_SUCCESS);
  }
  std::string parameter{argv[1]};
  if (parameter == "--help") {
    std::cout << argv[0] << "- Gestión de fechas." << std::endl;
    std::cout << "Modo de uso: " << argv[0] << " dd/mm/aa N fichero_salida.txt" << std::endl;
    std::cout << "Pruebe " << argv[0] << " --help para más información." << std::endl;
    exit(EXIT_SUCCESS);
  }
}

/**
 * @brief Comprueba si el año de una fecha es bisiesto.
 * @param[in] fecha: Fecha que se comprueba.
 * @return true si es bisiesto, false si no.
 */
bool EsBisiesto(const Fecha& fecha) {
  return (fecha.anio() % 4 == 0 and fecha.anio() % 100 != 0) or (fecha.anio() % 100 == 0 and (fecha.anio() / 100) % 4 == 0);
}

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
bool FechaValida(int dias, int mes, int anio) {
  return NumeroDeDias(mes, anio) >= dias and dias > 0 and mes > 0 and 12 >= mes;
}

/**
 * @brief Para imprimir fechas
 * @param[in] fecha: referencia (constante) a la fecha
 */
std::ostream& operator<< (std::ostream& out, const Fecha& fecha) {
  out << fecha.dia() << "/" << fecha.mes() << "/" << fecha.anio();
  return out;
}

/**
 * @brief Para introducir fechas
 * @param[in] fecha: referencia (constante) a la fecha
 */
std::istream& operator>> (std::istream& in, Fecha& fecha) {
  in >> fecha.dia_;
  in >> fecha.mes_;
  in >> fecha.anio_;
  if (!FechaValida(fecha.dia_, fecha.mes_, fecha.anio_)) {
    std::cout << "La fecha introducida no es válida. Se ha modificado su fecha a la fecha por defecto: 1/1/1" << std::endl;
    fecha.dia_ = 1;
    fecha.mes_ = 1;
    fecha.anio_ = 1;
  }
  return in;
}

/**
 * @brief Comprueba si dos fechas son iguales.
 * @param[in] fecha1: referencia (constante) a la primera fecha.
 * @param[in] fecha2: referencia (constante) a la segunda fecha.
 * @return true si son iguales, false si no.
 */
bool operator== (const Fecha& fecha1, const Fecha& fecha2) {
  if (fecha1.dia() == fecha2.dia() and fecha1.mes() == fecha2.mes() and fecha1.anio() == fecha2.anio()) {
    return true;
  }
  return false;
}

/**
 * @brief Comprueba si dos fechas son distintas.
 * @param[in] fecha1: referencia (constante) a la primera fecha.
 * @param[in] fecha2: referencia (constante) a la segunda fecha.
 * @return true si son distintas, false si no.
 */
bool operator!= (const Fecha& fecha1, const Fecha& fecha2) {
  return !operator==(fecha1, fecha2);
}

/**
 * @brief Comprueba si una fecha es mayor que otra.
 * @param[in] fecha1: referencia (constante) a la primera fecha.
 * @param[in] fecha2: referencia (constante) a la segunda fecha.
 * @return true si fecha1 > fecha2, false si no.
 */
bool operator> (const Fecha& fecha1, const Fecha& fecha2) {
  if (fecha1.anio() == fecha2.anio()) {
    if (fecha1.mes() == fecha2.mes()) {
      return fecha1.dia() > fecha2.dia();
    }
    return fecha1.mes() > fecha2.mes();
  }
  return fecha1.anio() > fecha2.anio();
}

/**
 * @brief Comprueba si una fecha es menor que otra.
 * @param[in] fecha1: referencia (constante) a la primera fecha.
 * @param[in] fecha2: referencia (constante) a la segunda fecha.
 * @return true si fecha1 < fecha2, false si no.
 */
bool operator< (const Fecha& fecha1, const Fecha& fecha2) {
  if (fecha1.anio() == fecha2.anio()) {
    if (fecha1.mes() == fecha2.mes()) {
      return fecha1.dia() < fecha2.dia();
    }
    return fecha1.mes() < fecha2.mes();
  }
  return fecha1.anio() < fecha2.anio();
}

/**
 * @brief Comprueba si una fecha es mayor o igual que otra.
 * @param[in] fecha1: referencia (constante) a la primera fecha.
 * @param[in] fecha2: referencia (constante) a la segunda fecha.
 * @return true si fecha1 >= fecha2, false si no.
 */

bool operator>= (const Fecha& fecha1, const Fecha& fecha2) {
  return !operator<(fecha1, fecha2);
}

/**
 * @brief Comprueba si una fecha es menor o igual que otra.
 * @param[in] fecha1: referencia (constante) a la primera fecha.
 * @param[in] fecha2: referencia (constante) a la segunda fecha.
 * @return true si fecha1 <= fecha2, false si no.
 */
bool operator<= (const Fecha& fecha1, const Fecha& fecha2) {
  return !operator>(fecha1, fecha2);
}

/// Para almacenar los últimos días de cada mes (si no es año bisiesto)
const std::vector<int> ultimo_dia{0 , 31, 28, 31, 30, 31, 30, 31, 31, 30, 31, 30, 31};

/**
 * @brief Comprueba si el día que estamos mirando corresponde al fin del mes.
 * @param[in] dia: Dia que estamos comprobando.
 * @param[in] mes: Mes que estamos comprobando.
 * @param[in] anio: Año que estamos comprobando.
 * @return true si es fin de mes, false si no.
 */
bool finDeMes(int dia, int mes, int anio) {
  if (EsBisiesto(anio)) {
    return dia == 29; //ano bisiesto
  } else {
    return dia == ultimo_dia[mes];  
  }
}

/**
 * @brief Función auxiliar para el incremento, suma un día a una fecha
 * @param[out] fecha: Fecha a la que se le suma un día.

 */
void AyudaIncremento(Fecha& fecha) {
  if (!finDeMes(fecha.dia(), fecha.mes(), fecha.anio())) { /// Si no es fin de mes, aumentamos
    fecha.setDia(fecha.dia() + 1);	//incrementa el dia
  } else {
    if (fecha.mes() < 12) {
      fecha.setMes(fecha.mes() + 1);
      fecha.setDia(1);
    } else {
      fecha.setAnio(fecha.anio() + 1);
      fecha.setMes(1);
      fecha.setDia(1);
    }
  }
}

/**
 * @brief Suma el numero de dias especificado a la fecha.
 * @param[out] fecha: Fecha que incrementa.
 * @param[in] diasparasumar: Días que se quieren añadir a la fecha.
 */
void operator+=(Fecha& fecha, int diasparasumar) {
  for (int i = 0; i < diasparasumar; i++) {
	  AyudaIncremento(fecha);
  }
}

/**
 * @brief Comprueba si el string se puede pasar a Fecha.
 * @param[in] fecha: String con una fecha.
 * @return Devuelve true si se puede pasar a Fecha, false si no.
 */
bool CompruebaStringFecha(const std::string& fecha) {
  int contador_barras{0};
  for (const auto &caracter_actual : fecha) {
    if (caracter_actual == '/') {
      ++contador_barras;
    }
  }
  return (fecha.length() >= 10 and contador_barras == 2);
}
 
/**
 * @brief Pasa de string a Fecha
 * @param[in] fecha: Un string que contiene la fecha.
 * @return Devuelve un elemento de la clase Fecha.
 */
Fecha StringAFecha(const std::string& fecha) {
  if (!CompruebaStringFecha(fecha)) {
    std::cout << "El string introducido como segundo parámetro no se puede convertir a Fecha" << std::endl;
    std::cout << "Se ha empleado la fecha por defecto: 1/1/1." << std::endl;
    return Fecha();
  }
  std::string dias{}, mes{}, anio{};
  int contador{0}; /// Para saber si vamos por el día, el mes o el año
  std::string palabra_auxiliar{}; /// Para ir almacenando lo que vamos revisando
  for (const auto &caracter_actual : fecha) {
    if (caracter_actual == '/') {
      if (contador == 0) {
        dias = palabra_auxiliar;
        palabra_auxiliar = {};
        ++contador;
      } else if (contador == 1) {
        mes = palabra_auxiliar;
        palabra_auxiliar = {};
        ++contador;
      }
    } else {
      palabra_auxiliar += caracter_actual;
    }
  }
  anio = palabra_auxiliar;
  Fecha fecha_arreglada{std::stoi(dias), std::stoi(mes), std::stoi(anio)}; /// Creamos el objeto
  return fecha_arreglada;
}