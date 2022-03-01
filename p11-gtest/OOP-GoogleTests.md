# Práctica 11. Programación Orientada a Objetos. Tests Unitarios. Google Tests.

# Factor de ponderación: 10

### Objetivos
Los objetivos de esta práctica son que el alumnado:
* Desarrolle programas sencillos en C++ utilizando clases, así como todas las características del lenguaje estudiadas anteriormente
* Conozca el framework de testing de Google (Google Tests) y sea capaz de desarrollar tests unitarios sencillos
* Conozca la herramienta CMake y sepa utilizarla para construir sus programas ejecutables
* Incluya en sus programas comentarios adecuados en el formato requerido por Doxygen
* Aloje todo el código fuente de sus programas en repositorios privados de GitHub
* Sepa depurar sus programas usando la interfaz de depuración del VSC

### Rúbrica de evaluacion de esta práctica
Todo el código que se presente a evaluación ha de cumplir los estándares definidos en la 
[Guía de Estilo de Google para C++](https://google.github.io/styleguide/cppguide.html).

Se señalan a continuación otros aspectos (la lista no es exhaustiva) que se tendrán en cuenta a la hora de evaluar esta práctica.
El alumnado ha de acreditar que:

* Conoce los conceptos expuestos en el material de referencia de esta práctica.
* Ha realizado todos los ejercicios propuestos, así como que es capaz de desarrollar otros de complejidad similar.
* Es capaz de escribir un fichero CMakeLists.txt para automatizar el proceso de compilación de sus programas.
* Todos sus programas se estructuran en directorios diferentes para cada "proyecto" haciendo que cada uno de
  ellos contenga un fichero `CMakeLists.txt` con la configuración de despliegue del proyecto.
* Se ha programado un conjunto mínimo de tests unitarios que comprueban el correcto funcionamiento de las
  funciones y métodos que se desarrollan para resolver los ejercicios.
* Todas las prácticas realizadas hasta la fecha se encuentran alojadas en repositorios de
[GitHub](https://github.com/).
* Los programas deben contener comentarios adecuados en el formato requerido por 
  [Doxygen](https://www.doxygen.nl/index.html).
* Sus programas se compilan correctamente utilizando la utilidad `make` y un fichero `Makefile`.
* Todos los identificadores que utilice en su programa (constantes, variables, etc.) deberán ser
  siempre significativos. No utilice nunca identificadores de una única letra, tal vez con la excepción de las variables que utilice para iterar en un bucle.
* Sabe editar y modificar sus programas usando VSC con una conexión remota a la máquina virtual Linux de la asignatura.
* Ha realizado todos sus ejercicios en la máquina virtual Ubuntu de la asignatura.
* Todos los programas que desarrolla, antes de su ejecución imprimen en pantalla un mensaje indicando la finalidad del programa así como la información que precisará del usuario para su correcta ejecución.
* Todos sus programas contienen comentarios adecuados en el formato requerido por Doxygen.
* Todos los ficheros de código del proyecto correspondiente a esta práctica están alojados en un repositorio
  de GitHub
* Conoce las técnicas básicas de depuración usando VSC y su depurador integrado.

### La plataforma de testing de Google
Tal como recoge la
[Wikipedia](https://es.wikipedia.org/wiki/Desarrollo_guiado_por_pruebas),
El desarrollo dirigido por tests (TDD, *Test Driven Development* por sus siglas en inglés) es una práctica de 
ingeniería de software que involucra otras dos técnicas: 
escribir las pruebas primero (Test First Development) y 
[Refactorización](https://es.wikipedia.org/wiki/Refactorizaci%C3%B3n)
(Refactoring) o reestructuración del código.
Para escribir las pruebas generalmente se utilizan las pruebas unitarias (unit test en inglés). 

El TDD se basa en la repetición de un ciclo de desarrollo muy corto que
involucra la repetición de tres pasos:
1. En primer lugar el desarrollador escribe un caso de prueba (test) que falla (a propósito) y que define una mejora deseada (habitualmente una nueva función o método)
2. A continuación se desarrolla el código (de la función) que hace que la prueba pase satisfactoriamente 
3. Finalmente refactoriza el nuevo código hasta obtener un resultado satisfactorio

Esta imagen representa este ciclo repetitivo característico del TDD.

![TDD cycle](https://raw.githubusercontent.com/ULL-ESIT-IB-2021-2022/P11-OOP-GoogleTests/main/red-green-refactor.png "Red-Green-Refactor")

El propósito del desarrollo guiado por pruebas es lograr un código limpio que funcione correctamente.
La idea es que los requisitos sean traducidos a pruebas (tests), y de este modo, cuando las pruebas pasen 
se garantizará que el software cumple con los requisitos que se han establecido.


Las "unidades" de código para las que se realizan tests habitualmente son clases, funciones o grupos ellas. 
Supongamos por ejemplo que se está implementando una función (unidad de código) que calcula la suma de dos números enteros.
Una prueba (test unitario) es un código que valida la corrección de esa función: se podría comprobar que lo
que reciba la función sean realmente dos parámetros, y que esos dos parámetros sean números, y que lo que
devuelva la función sea otro número, y que ese número corresponda realmente con la suma. 
Todas estas podrían ser posibles pruebas unitarias que se realicen sobre la función.
Las pruebas unitarias  se suelen realizar utilizando entornos de pruebas (testing) especializados.

Existen diversas plataformas para el desarrollo de tests unitarios en C++.
Algunas de las de uso más extendido son
[Boost.Test](https://www.boost.org/doc/libs/1_49_0/libs/test/doc/html/index.html),
[CppUnit](https://sourceforge.net/projects/cppunit/),
[Cute](https://cute-test.com/)
aunque hay
[muchas otras](https://en.wikipedia.org/wiki/List_of_unit_testing_frameworks#C++)

En esta práctica se propone utilizar el framework 
[Google Test](https://en.wikipedia.org/wiki/Google_Test),
(también conocido como gtest) que es una librería de pruebas unitarias (*unit tests*) para C++.
El entorno permite que los tests se ejecuten de una en uno o todos a la vez. 
Google Tests puede ser utilizado en 
[Visual Studio Code](https://docs.microsoft.com/es-es/visualstudio/test/how-to-use-google-test-for-cpp?view=vs-2019), 
aunque en este documento se propone un uso de la plataforma de modo independiente de VSC.

El primer paso para usar gtest es su instalación. 
Siga para ello los siguientes pasos:

```
$ git clone https://github.com/google/googletest.git -b release-1.11.0
$ cd googletest/
$ mkdir build
$ cd build/
$ cmake .. -DBUILD_GMOCK=OFF
$ make
$ sudo make install
```
que se explican en el documento 
[Standalone CMake Project](https://github.com/google/googletest/blob/master/googletest/README.md#standalone-cmake-project).
El comando `sudo make install` (obsérvese que se ejecuta con privilegios de *root*) 
instalará gtest en el directorio `/usr/local/` del sistema, de modo que en los directorios
```
/usr/local/include
/usr/local/lib
```
se alojarán los ficheros de cabecera (`*.h`) y las librerías (`*.a`) necesarios para usar gtest.
Una vez instalada la librería puede eliminar el directorio `googletest` en el que copió el repositorio.

El repositorio de esta práctica contiene un directorio `gtests` con el siguiente contenido:
```
gtests
  ├── CMakeLists.txt
  ├── src
  │   ├── addition.cc
  │   ├── addition.h
  │   ├── date.cc
  │   ├── date_client_program.cc
  │   ├── date.h
  │   ├── factorial.cc
  │   ├── factorial.h
  │   ├── formula.cc
  │   ├── formula.h
  │   ├── main_program.cc
  │   ├── multiply.cc
  │   ├── multiply.h
  │   ├── sample2.cc
  │   ├── sample2.h
  │   ├── square_root.cc
  │   └── square_root.h
  └── test
      ├── gtest_main.cc
      ├── sample2_unittest.cc
      ├── test_addition.cc
      ├── test_date.cc
      ├── test_factorial.cc
      ├── test_formula.cc
      ├── test_multiply.cc
      └── test_square_root.cc
```
Siguiendo la costumbre habitual, el subdirectorio `src` contiene el código fuente del proyecto, que en este
caso es un proyecto ficticio que se utiliza para ilustrar el uso de tests unitarios.
A modo de ejemplo, el programa principal del proyecto `main_program.cc` (véase su código fuente)
invoca a diferentes funciones de carácter matemático que han sido
desarrolladas por el usuario (ficheros `src/*.cc` y `src/*.h`).

Compile el proyecto cuya configuración viene especificada en el fichero `CMakeLists.txt` ejecutando en el directorio
`gtests`:
```
$ mkdir build
$ cd build
$ cmake ..
$ make
```
Esta secuencia de comandos creará en el subdirectorio `build` sendos programas ejecutables: `user_program` y `runTests`.
El primero de ellos corresponde con el programa principal del usuario.
Pruebe a ejecutarlo y revise el código de las diferentes funciones que utiliza ese programa.

Por otra parte, el programa `runTests` ejecuta todos los tests unitarios que se han desarrollado para comprobar el correcto
funcionamiento de las diferentes funciones que intervienen en el programa del usuario.
Pruebe asimismo a ejecutarlo.
Ambos programas se pueden compilar de forma independiente ejecutando en el diectorio `build`:

```
$ make user_program
```
o bien:
```
$ make runTests
```

Estudie el contenido del fichero `CMakeLists.txt` y observe en el mismo (comandos `add_executable(runTests ...)`
y `add_executable(user_program)`) los ficheros que están involucrados en cada uno de los dos programas
anteriores.

Lo que más interesa estudiar a continuación es el contenido del directorio `tests`.
En ese directorio, el programa `gtest_main.cc` invoca la ejecución de todos los tests mientras que los
diferentes ficheros `test_*.cc` contienen los tests correspondientes a las diferentes funciones del usuario
que utiliza el programa `main_program.cc`.

Todos los ficheros del directorio `tests` contienen la línea
```
include <gtest/gtest.h>
```

de inclusión del fichero de cabecera donde se definen las macros y funciones de la librería de testing de
Google que se enlaza (*link*) con el programa.
Cada uno de esos ficheros contiene uno o más tests que tienen la siguiente estructura:
```
TEST(TestSuiteName, TestName) {
  ... test body ...
}
```
El primer parámetro de la macro TEST (`TestSuiteName`) es el nombre que se le da a un conjunto de tests
relacionados mientras que el segundo parámetro es el nombre que se le ha dado al test.

El test del fichero `test_date.cc` es un ejemplo que comprueba métodos de la clase `Date` definida por el
usuario (ficheros `date.cc` y `date.h`.

Los ficheros `test/sample2_unittest.cc` y  `src/sample2.*` están tomados de
[Googletest Samples](http://google.github.io/googletest/samples.html)
donde se pueden hallar ejemplos adicionales de tests.

Estudie los tests que figuran en el directorio `gtests/test` para las diferentes funciones del ejemplo,
conjuntamente con la documentación del 
[Googletest Primer](http://google.github.io/googletest/primer.html)
para aprender sobre los diferentes tipos de 
[aserciones](https://es.wikipedia.org/wiki/Aserci%C3%B3n_(inform%C3%A1tica))
y comparaciones que soporta la plataforma para realizar sus tests.

En todos los programas C++ que desarrolle de ahora en adelante, utilice siempre tests unitarios para comprobar la
corrección de todas sus funciones y métodos.
El enfoque (TDD) le ayudará a hallar los bugs de forma temprana de modo que podrá solucionarlos con un menor
coste en tiempo y esfuerzo.
La técnica de *testing* es fundamental para detectar cuanto antes potenciales errores.
Las funciones que han sido comprobadas mediante tests unitarios son siempre más fiables.
Para cada función que escriba de ahora en adelante, comience siempre por escribir antes que el código de la
función, al menos dos tests: uno para las situaciones "normales" y otro para situaciones "extremas".

La regla a seguir de ahora en adelante es **Convierta en un hábito la escritura de tests para sus programas**.
Desarrolle siempre sus funciones iterando el famoso ciclo TDD que ya se ha expuesto en este documento:
* Escriba un test que falle y que define una mejora deseada o una nueva función
* Escriba el código (función, método) que haga que la prueba pase satisfactoriamente 
* Finalmente refactorice el nuevo código hasta obtener un resultado satisfactorio

Es fácil encontrar en la web mucha documentación sobre TDD. 
A modo de ejemplo e introducción se recomienda el estudio de
[Mejorar la calidad del código mediante la prueba unitaria](https://www.mql5.com/es/articles/1579).

### Trabajo previo
Antes de realizar los ejercicios de esta práctica, estudie detenidamente los capítulo 12 y 13(epígrafes 12.1-12.15, 13.1-13.13) del
[tutorial](https://www.learncpp.com/cpp-tutorial/81-welcome-to-object-oriented-programming/)
de referencia en la asignatura.
Muchos de los ejemplos de ese tutorial son los mismos que se utilizan en las clases de la asignatura,
cuyo material (transparencias y códigos de ejemplo) debiera Ud. también estudiar.
Las transparencias de la asignatura debieran servirle de guía a la hora de determinar qué partes del tutorial
ha de estudiar con mayor profundidad.

Ponga especial atención en estos ejercicios en seguir las normas de *Buenas prácticas* de programación a la
hora de diseñar programas orientados a objetos que se indican en las transparencias de la asignatura.

* Al realizar los ejercicios cree dentro de su repositorio de esta práctica un directorio diferente
con nombre significativo (vectors, compute, fecha, complejos p. ej.) para cada uno de ellos.
* Tómese como ejemplo el primero de los ejercicios y haga que cada uno de sus programas conste de 3 ficheros:
  * Un fichero `vector_main.cc` (programa principal) que contendrá la función `main` e incluirá el fichero de cabecera `vector.h`.
  * El fichero `vector.h` que contendrá las declaraciones correspondientes a la clase `Vector`.
  * El fichero `vector.cc` que contendrá el código (definiciones) correspondientes a la clase `Vector`.
  * Obviamente si el programa principal (`vectors.cc`) utiliza otras clases, debería incluir (`#include`) los
  correspondientes ficheros de cabecera.
  * Modifique estos nombres de ficheros para adaptarlos al ejercicio en cuestión.
* La compilación del programa correspondiente a cada ejercicio se automatizará con un fichero `CMakeLists.txt`
que se utilizará con `cmake`.
Así pues, la estructura de directorios y sus contenidos correspondiente al primero de los ejercicios
propuestos sería la siguiente:
```
 vector3D
 ├── CMakeLists.txt  // Fichero de configuración para cmake
 ├── src             // Directorio contenedor del código fuente del ejercicio
 │   ├── Makefile
 │   ├── vector.cc
 │   ├── vector.h
 │   └── vector_main.cc
 └── test            // Directorio contenedor del código de los tests del ejercicio
     ├── gtest_main.cc
     └── test_vector.cc
```
* Desarrolle cada ejercicio de forma incremental, probando cada una de las funciones que va Ud.
desarrollando. 
* Al realizar los ejercicios, ponga en práctica el ciclo de desarrollo TDD:
  * Escriba un test que falle y que define una mejora deseada o una nueva función
  * Escriba el código (función, método) que haga que la prueba pase satisfactoriamente 
  * Finalmente refactorice el nuevo código hasta obtener un resultado satisfactorio
* Utilice el depurador integrado de VSC para depurar los programas de modo que funcionen correctamente.
* Todos estos programas han de tomar su entrada (si es que hay alguna) como parámetros pasados por línea de comandos.
* Para cada una de las clases que se pide desarrollar, desarrolle también un programa cliente (el que
contendrá la función *main()*) que declare objetos de la clase en cuestión y compruebe el correcto
funcionamiento de los métodos de la clase.

### Ejercicios
1. Desarrolle una clase `Vector3D` para representar vectores en el espacio tridimensional.
La clase contemplará métodos al menos para:
  * Imprimir en pantalla las componentes de un vector en un formato adecuado 
  * Sumar un par de vectores
  * Calcular el producto de un número real por un vector
  * Calcular el producto escalar de dos vectores
  * Calcular el módulo de un vector 
  * Normalizar un vector

Para conseguir estas funcionalidades, sobrecargue los operadores que sea necesario.
Para este primer ejercicio se suministra en el directorio `vector3D` un esqueleto del código que ha de
desarrollar.
Complete el código (y los tests) necesario en los diferentes ficheros de ese proyecto.

2. Desarrolle una clase `ComputeInt` que permita la realización de diferentes cálculos con números enteros.
Incluya al menos los siguientes métodos en la clase:
* *Factorial* que permita calcular el factorial de un número (Problema
[Factorial](https://jutge.org/problems/P48997_es)
de Jutge).
* *SumSerie* que calcule la suma de los primeros `n` términos de la serie: `1 + 2 + 3 + ... + n`.
* *IsArmstrong* que permita determinar si un número dado es un número de Armstrong (véase la práctica 9 de
este curso para la definición de número de Armstrong).
* *IsPerfect* que permita determinar si un número es perfecto (Problema 
[Perfect numbers](https://jutge.org/problems/P34091_en/statement)
de Jutge).
* *IsPrime* que permita determinar si un determinado número es primo (Problema
[Primality](https://jutge.org/problems/P48713)
de Jutge).
* *IsPerfectPrime* que permita determinar si un determinado número es un primo perfecto (Problema
[Perfect primes](https://jutge.org/problems/P90664_en) 
de Jutge).
* *IsBalanced* que permita determinar si un determinado número es equilibrado (Problema
[Balanced numbers](https://jutge.org/problems/P26492_en) 
de Jutge).
* *AreRelativePrimes* que permita determinar si dos números son
[mutuamente primos](https://en.wikipedia.org/wiki/Coprime_integers),
es decir, si su único divisor común es el 1

La función *main* del programa que usara esta clase podría contener, entre otras, sentencias como:
```
main() {
  ComputeInt computation; 
  std::cout << computation.Factorial(5) << std::endl; 
  std::cout << computation.SumSerie(100) << std::endl; 
  std::cout << computation.IsPrime(13) << std::endl; 
  std::cout << computation.SonPrimosRelativos(13, 17) << std::endl; 
}
```

3. La clase Fecha.

Desarrolle una clase `Fecha` que permita representar y gestionar fechas.
Incorpore en la clase los miembros de datos (atributos) y métodos que considere adecuados.
Implemente para la clase la sobrecarga de los operadores de inserción y extracción en flujos así como el
operador de comparación que permita determinar si una fecha es menor (anterior cronológicamente) que otra.
Incluya asimismo un método que permita determinar si el año correspondiente a una fecha es un año bisiesto o
no.
Resuelva el problema 
[Valid Dates](https://jutge.org/problems/P58459_en)
de Jutge y súbalo a la plataforma para su evaluación.
A partir de la solución de ese problema haga que los constructores de la clase `Fecha` solo admitan una fecha si
es válida.
Resuelva igualmente el problema
[Leap years](https://jutge.org/problems/P43135_en)
e incluya en su clase un método que permita determinar si un año es bisiesto.

Realice un programa cliente `fechas.cc` que tome como parámetro una fecha, un número y un nombre de fichero:
```
./fechas - Gestión de fechas
Modo de uso: ./fechas dd/mm/aa N fichero_salida.txt
Pruebe ./fechas --help para más información
```
El programa deberá imprimir en el fichero de salida (tercer parámetro) las N (segundo parámetro) fechas cronológicamente posteriores a la
introducida (primer parámetro) con una separación de un día entre fechas sucesivas.

4. La clase `Complejo`.

Todo
[número complejo](https://es.wikipedia.org/wiki/N%C3%BAmero_complejo)
puede representarse como la suma de un número real y un número imaginario, de la forma `a + bi` donde el
término `a` es la parte real, `b` la parte imaginaria e `i` la
[unidad imaginaria](https://es.wikipedia.org/wiki/Unidad_imaginaria).

En este ejercicio se propone desarrollar una clase `Complejo` que permita representar y operar con números complejos.

Separe el diseño de su clase `Complejo` en dos ficheros, `complejo.h` y `complejo.cc` conteniendo
respectivamente la declaración y la definición de la clase.
Siga las indicaciones del tutorial 
[Class code and header files](https://www.learncpp.com/cpp-tutorial/89-class-code-and-header-files/)
para realizar esta separación de su clase en dos ficheros.
Siga igualmente las indicaciones del tutorial 
[Header guards](https://www.learncpp.com/cpp-tutorial/header-guards/)
para incluir *header guards* (guardas de cabecera) en sus ficheros de
definiciones (`*.h`) de modo que se evite la inclusión múltiple del mismo fichero.

Desarrolle un programa cliente `complejos.cc` que permita operar con números complejos y haga uso de la clase `Complejo` que diseñe.
La clase `Complejo` ha de contener al menos métodos que implementen la sobrecarga de los operadores de suma y
resta de números complejos así como de los operadores de inserción y extracción en flujos (*streams*).
Así la función `main` del programa `complejos.cc` podría contener (entre otras) sentencias como las siguientes:

```
main() {
  Complejo complejo1{4, 5}, complejo2{7, -8};
  Complejo resultado;
  resultado = complejo1 + complejo2;
  std::cout << resultado;
  resultado = complejo1 - complejo2;
  std::cout << resultado;
}
```
Incluya (discrecionalmente) cualesquiera otras operaciones que considere adecuadas como métodos en la clase `Complejo`.

### Referencias
* [Desarrollo dirigido por Tests](https://es.wikipedia.org/wiki/Desarrollo_guiado_por_pruebas)
* [Google Test](https://en.wikipedia.org/wiki/Google_Test)
* [Cómo usar Google Test para C++ en VSC](https://docs.microsoft.com/es-es/visualstudio/test/how-to-use-google-test-for-cpp?view=vs-2019), 
* [Google Tests build instructions](https://github.com/google/googletest/blob/master/googletest/README.md#standalone-cmake-project)
* [Googletest Primer](http://google.github.io/googletest/primer.html)
* [Mejorar la calidad del código mediante la prueba unitaria](https://www.mql5.com/es/articles/1579).
* [Google Test + gcover. Una lista de recetas](https://usingstdcpp.files.wordpress.com/2016/11/gtest.pdf)
* [CMake](https://es.wikipedia.org/wiki/CMake)
* [Introduction to modern CMake for beginners](https://www.internalpointers.com/post/modern-cmake-beginner-introduction)
* [Welcome to object-oriented programming - Tutorial learnCPP](https://www.learncpp.com/cpp-tutorial/81-welcome-to-object-oriented-programming/).
*	[Class code and header files](https://www.learncpp.com/cpp-tutorial/89-class-code-and-header-files/)
* [Header guards](https://www.learncpp.com/cpp-tutorial/header-guards/)
* [Números complejos](https://es.wikipedia.org/wiki/N%C3%BAmero_complejo)
* [Google C++ Style Guide](https://google.github.io/styleguide/cppguide.html)
### Referencias
