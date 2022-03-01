# Práctica 10. Ficheros de texto. Documentación de programas con Doxygen.

# Factor de ponderación: 8

### Objetivos
Los objetivos de esta práctica son que el alumnado:
* Desarrolle programas sencillos en C++ que utilicen ficheros, así como todas las características del lenguaje estudiadas
* Conozca la herramienta [Doxygen](https://en.wikipedia.org/wiki/Doxygen)
* Incluya en sus programas comentarios adecuados en el formato requerido por Doxygen
* Profundice en el uso de funciones en sus programas.
* Profundice sus conocimientos sobre depuración.

### Rúbrica de evaluacion de esta práctica
Todo el código que se presente a evaluación ha de cumplir los estándares definidos en la 
[Guía de Estilo de Google para C++](https://google.github.io/styleguide/cppguide.html).

Se señalan a continuación otros aspectos (la lista no es exhaustiva) que se tendrán en cuenta a la hora de evaluar esta práctica.
El alumnado ha de acreditar que:

* Conoce los conceptos expuestos en el material de referencia de esta práctica.
* Ha realizado todos los ejercicios propuestos, así como que es capaz de desarrollar otros de complejidad similar.
* Todas las prácticas realizadas hasta la fecha se encuentran alojadas en repositorios de GitHub.
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

### Documentación de código. Doxygen

[Doxygen](https://en.wikipedia.org/wiki/Doxygen) es una herramienta de código abierto que permite generar documentación de referencia para proyectos de desarrollo software. 
Una ventaja de Doxygen es que la documentación está escrita en el propio código fuente de los programas, y por lo tanto es relativamente fácil de mantener actualizada. 
Doxygen puede hacer referencias cruzadas entre la documentación y el código, de modo que el lector de un documento puede referirse fácilmente al código fuente.
La herramienta extrae la documentación de los comentarios presentes en los ficheros de código fuente y puede generar la salida en diferentes formatos entre los cuales están HTML, PDF, LaTeX o páginas `man` de Unix.

En esta asignatura no se propone un uso exhaustivo de Doxygen pero sí se promueve que la
documentación de los programas desarrollados se realice en el formato reconocido por Doxygen, que se ha
convertido en un estándar de facto.

Comience por instalar Doxygen en su máquina virtual de la asignatura:
```
$ sudo apt install doxygen
```
Instale también los siguientes paquetes:
```
$ sudo apt install texlive-latex-base
$ sudo apt install texlive-latex-recommended
$ sudo apt install texlive-latex-extra
```
Estos paquetes son necesarios para compilar ficheros en formato [LaTeX](https://es.wikipedia.org/wiki/LaTeX).
Más adelante en este documento se justifica la necesidad de los programas que suministran estos paquetes.

En el [manual de Doxygen](https://www.doxygen.nl/manual/starting.html) se indica cómo comenzar a trabajar con la herramienta.
Si, ubicados en un directorio de trabajo, se invoca `doxygen`:
```
doxygen -g <config-file>
```

la herramienta creará un fichero de configuración.
Si no se le pasa el nombre del fichero como parámetro, creará un fichero con nombre `Doxyfile` preconfigurado para su uso.
En el directorio de trabajo de esta práctica (`src`) se encuentra un fichero `Doxyfile` ya listo para usarse con proyectos de C++.
Se ha incluído asimismo el código fuente de un programa para ilustrar con el mismo el uso de documentación con Doxygen.
Si revisa el fichero `Doxyfile` (es un fichero de texto) verá un conjunto de opciones que el programa permite.
Cada opción va precedida de una explicación de su finalidad y funcionamiento, de modo que puede probar a modificar algunas de ellas si lo desea.
En [esta página](https://www.doxygen.nl/manual/config.html) puede consultarse la finalidad y funcionamiento de cada una de las etiquetas (tags) que se usan en el fichero de configuración de Doxygen.

Para generar la documentación de su aplicación, colóquese en el directorio de su proyecto (`src` en esta práctica) y ejecute:
```
doxygen Doxyfile
```

Con el fichero `Doxyfile` que se suministra, la herramienta creará un subdirectorio `doc` en el directorio raíz de su proyecto en el que alojará toda la documentación generada.
El directorio donde Doxygen genera su salida se especifica con la etiqueta `OUTPUT_DIRECTORY` (línea `61` del fichero `Doxyfile` suministrado).
Con la configuración suministrada se generan 2 subdirectorios dentro de `doc`: `html` y `latex`.
Si abre con un navegador el fichero `doc/html/index.html` accederá a la página principal de la documentación generada para el programa.
Si se coloca en el directorio `doc/latex/` y ejecuta `make` el sistema "compila" el código LaTeX y genera un fichero `refman.pdf` que contiene igualmente la documentación generada.

Tal como se ha indicado, HTML o LaTeX son solo 2 de los formatos que permite generar Doxygen.
Tanto HTML como LaTeX (también [Markdown](https://es.wikipedia.org/wiki/Markdown)) son lo que se conoce como [lenguajes de marcas](https://es.wikipedia.org/wiki/Lenguaje_de_marcado).
HTML es el lenguaje que se utiliza para componer los textos que se muestran en las páginas web.
[Latex](https://en.wikipedia.org/wiki/LaTeX) es un sistema de composición de textos que cuida el formato en especial en el ámbito de la tipografía y que es especialmente adecuado para textos de carácter científico.
No se pretende aquí que profundice en conocer HTML o LaTeX.

La sección [Documenting the code](https://www.doxygen.nl/manual/config.html) del manual de Doxygen indica cómo comentar el código fuente de modo que los comentarios sean procesados por Doxygen para incorporarlos a la documentación generada.

La guía [Documenting C++ Code](https://developer.lsst.io/cpp/api-docs.html) de documentación de código del proyecto LLST es la referencia que se adoptará en la asignatura para documentar el código de los programas que se desarrollen.
Se utilizarán comentarios de tipo JavaDoc para comentarios de bloque:

```
/**
 * ... text ...
 */
```
[JavaDoc](https://en.wikipedia.org/wiki/Javadoc) es otro sistema de documentación ideado para Java y que también es muy popular. 
Doxygen soporta el uso de etiquetas "al estilo Javadoc" en el código.

Los bloques de comentarios multi-línea deben comenzar con 
```
/** 
```
y finalizar con
```
*/
```
Los comentarios de una única línea deben comenzar con `///`.
Por consistencia no use las opciones 
```
/*!
```
o
```
//!
```
permitidas en Doxygen.

Así el bloque de comentarios que debe preceder a cualquier función (o método) tendrá una apariencia similar a esta:
```
/**
 * Sum numbers in a vector.
 *
 * @param values Container whose values are summed.
 * @return sum of `values`, or 0.0 if `values` is empty.
 */
double sum(std::vector<double>& const values) {
  ...
}
```
En el ejemplo anterior `@param` y `@return` son etiquetas de tipo Javadoc.
En [Overview of supported JavaDoc style tags](http://www.time2help.com/doc/online_help/idh_java_doc_tag_support.htm) pueden consultarse este tipo de etiquetas.

El siguiente es un ejemplo (plantilla) de comentario de bloque que debería incluirse al comienzo de todos los ficheros (`*.cc`, `*.h`) de un proyecto de programación en el ámbito de esta asignatura:
```
/**
  * Universidad de La Laguna
  * Escuela Superior de Ingeniería y Tecnología
  * Grado en Ingeniería Informática
  * Informática Básica
  *
  * @author F. de Sande fsande@ull.es
  * @date 01 Dic 2021
  * @brief El programa calcula la suma de todos los términos de valor par de la serie
  *        de Fibonacci que sean menores que un valor dado.
  *        Cada nuevo término de la serie se genera sumando los dos anteriores.
  *        Comenzando con 0 y 1, los primeros 10 términos serán: 0, 1, 1, 2, 3, 5, 8, 13, 21, 34
  * @bug No hay bugs conocidos
  * @see https://www.cs.cmu.edu/~410/doc/doxygen.html
  */
```
Todo fichero debiera contener (etiqueta `@brief`) una breve descripción del contenido del fichero.
Si fuera necesario se incluirá a continuación una descripción más detallada.
Obviamente el comentario específico debiera particularizarse para cada caso concreto.

Por otra parte, estudie atentamente todo lo que se indica en el epígrafe [Comments](https://google.github.io/styleguide/cppguide.html#Comments) de la Guía de Estilo de Google y ponga en práctica todo lo que en ella se propone, usando el formato Doxygen para todos los comentarios que introduzca en su código fuente.

### Ejercicios

* Al realizar los ejercicios cree dentro de su repositorio de esta práctica un directorio diferente
para cada uno de ellos.
Asigne a cada uno de esos directorios nombres significativos.
* En los siguientes ejercicios, haga que cada uno de sus programas conste de 3 ficheros:
  * Un fichero `mi_programa.cc` (programa principal) que contendrá la función `main` e incluirá el fichero de cabecera `funciones.h`
  * El fichero `funciones.h` que contendrá las declaraciones de las diferentes funciones que se utilizan en el
  programa principal para resolver el ejercicio en cuestión.
  * El fichero `funciones.cc` que contendrá el código (definiciones) de las funciones declaradas en el fichero
  de cabecera.
  * Modifique los nombres de estos ficheros que aquí se proponen para adaptarlos al ejercicio en cuestión.
* Desarrolle cada ejercicio de forma incremental, probando cada una de las funciones que va Ud.
desarrollando. Utilice el depurador de VSC para corregir cualquier tipo de error semántico que se produzca en
cualquiera de sus desarrollos.
* Utilice el depurador integrado de VSC para depurar los programas de modo que funcionen correctamente.
* Todos estos programas han de tomar su entrada (si es que hay alguna) como parámetros pasados por línea de comandos.

1. Escriba un programa que imprima en pantalla la palabra con mayor número de vocales y la palabra con el
mayor número de consonantes (independientemente de si se trata de mayúsculas o minúsculas) que se encuentren
en el fichero de texto que se le pase como parámetro.

2. Desarrolle un programa que copie un fichero de texto en otro añadiendo al principio de cada línea el número de la misma. Ambos ficheros serán idénticos salvo que el de salida contiene al principio de cada línea el número de la misma.

3. Escriba un programa `my_cp` que se comporte como una versión simplificada del comando 
[cp](https://ss64.com/bash/cp.html)
de linux copiando un fichero de texto en otro.

4. Escriba un programa `delete_blank_lines` que elimine de un fichero de texto que tomará como entrada las líneas en blanco.

5. Escriba un programa `my_diff` que sea una versión simplificada del comando 
[diff](https://ss64.com/bash/diff.html) 
de Linux.
Si los ficheros de texto que se comparan son ideńticos, el programa escribirá un mensaje en pantalla
indicándolo.
Si no fuera ese el caso el programa imprimirá en pantalla las líneas de texto que son diferentes así como su
número de línea dentro del fichero.

6. Escriba un programa `rotate` que *rote* las vocales en minúscula que encuentre en el fichero que se le
pasa como parámetro, entendiendo por *rotar* el cambio de
* 'a' por 'e'
* 'e' por 'i'
* 'i' por 'o'
* 'o' por 'u'
* 'u' por 'a'

De modo que un fichero de entrada que contuviera este texto:
```
In an age when acronyms were popular, the Manchester Mark I was
sometimes referred to as MADM (Manchester Automatic Digital Machine)
or MUC (Manchester University Computer).
```
Produciría como salida este otro:
```
In en egi whin ecrunyms wiri pupaler, thi Menchistir Merk I wes
sumitomis rifirrid tu es MADM (Menchistir Aatumetoc Dogotel Mechoni)
ur MUC (Menchistir Unovirsoty Cumpatir).
```

7. Escriba un programa que lea un fichero de texto que se le pase como parámetro y produzca como salida
ficheros con nombre `A.txt`, `B.txt`, ..., `Z.txt`. 
Cada uno de esos ficheros ha de contener en líneas separadas todas las palabras del fichero pasado como
parámetro que comiencen por la correspondiente letra.

8. Un autómata finito determinista ([DFA](https://en.wikipedia.org/wiki/Deterministic_finite_automaton)
por sus siglas en inglés) es una máquina abstracta que acepta o rechaza una determinada secuencia de símbolos.
Lea el artículo de 
[Wikipedia](https://en.wikipedia.org/wiki/Deterministic_finite_automaton)
si quiere conocer algunos detalles sobre este modelo de cómputo, aunque ello no es estrictamente necesario
para realizar este ejercicio.
Escriba un programa `read_DFA` que lea un fichero de texto `input.dfa` que contiene la especificación de un
DFA e imprima en pantalla las características del mismo.
Los ficheros de especificación de DFAs tienen la siguiente estructura:
* Línea 1: Número total de estados del DFA.
* Línea 2: Estado de arranque del DFA.
* A continuación vendrá una línea para cada uno de los estados. 
  Cada línea contendrá los siguientes números, separados entre sí por espacios en blanco:
  * Número identificador del estado. 
  Los estados del autómata se representarán mediante números enteros sin signo. 
  La numeración de los estados corresponderá a los primeros números naturales comenzando por 0.
  * Un 1 si se trata de un estado de aceptación y un 0 si se trata de un estado de no aceptación.
  * Número de transiciones que posee el estado.
  * A continuación, para cada una de las transiciones, y separados por espacios en blanco, se detallará la información siguiente:
    * Símbolo de entrada necesario para que se produzca la transición.
    * Estado destino de la transición.

A modo de ejemplo, el siguiente sería el contenido del fichero de especificación del DFA de 
[esta figura](https://raw.githubusercontent.com/ULL-ESIT-IB-2021-2022/P10-Files-Doxygen/main/dfa.png)

```
4
0
0 0 2 a 1 b 3
1 1 2 a 1 b 2
2 1 2 a 1 b 3
3 0 2 a 3 b 3
```
y para este fichero de entrada el programa debería imprimir en pantalla la siguiente información:
```
|Q| = 4
q0 = 0
F = {1, 2}
delta(0, a) = 1
delta(0, b) = 3
delta(1, a) = 1
delta(1, b) = 2
delta(2, a) = 1
delta(2, b) = 3
delta(3, a) = 3
delta(3, b) = 3
```
Es decir en las 3 primeras líneas se imprime el cardinal del conjunto de estados, 
El estado de arranque (q0) y el conjunto de estados que son de aceptación (F).
En las líneas sucesivas se imprime el valor de la función de transición (*delta*) para cada estado y símbolo.

9. Lea esta
[introducción a la criptografía](Criptografia.md)
y a continuación, desarrolle en C++ un programa `cripto.cc` cuya finalidad será encriptar y/o desencriptar ficheros de texto.
Si el programa se ejecuta sin pasar parámetros en la línea de comandos, debemos obtener el siguiente mensaje:
```
./cripto -- Cifrado de ficheros
Modo de uso: ./cripto fichero_entrada fichero_salida método password operación
Pruebe ./cripto --help para más información
```

Si el programa se ejecuta pasando la opción `--help` se ha de obtener:

```
./cripto -- Cifrado de ficheros
Modo de uso: ./cripto fichero_entrada fichero_salida método password operación

fichero_entrada: Fichero a codificar
fichero_salida:  Fichero codificado
método:          Indica el método de encriptado
                   1: Cifrado xor 
                   2: Cifrado de César
password:        Palabra secreta en el caso de método 1, Valor de K en el método 2
operación:       Operación a realizar en el fichero
                   +: encriptar el fichero
                   -: desencriptar el fichero
```

El programa solo se ejecutará cuando se le hayan pasado por línea de comandos los parámetros necesarios.
En caso de detectar cualquier inconsistencia en los parámetros, el programa debe abortar su ejecución.
Se indicará asimismo un mensaje de error si el programa no consigue abrir el fichero de entrada.

10. Resuelva el problema 
[CryptocaesarP75810](https://jutge.org/problems/P75810_en)
de Jutge y súbalo a la plataforma para su evaluación.

### Referencias

* [Google C++ Style Guide](https://google.github.io/styleguide/cppguide.html)
* [Comments](https://google.github.io/styleguide/cppguide.html#Comments)
* [Doxygen](https://en.wikipedia.org/wiki/Doxygen)
* [Overview of supported JavaDoc style tags](http://www.time2help.com/doc/online_help/idh_java_doc_tag_support.htm)
* [Documenting C++ Code](https://developer.lsst.io/cpp/api-docs.html)
* [Cifrado César](https://es.wikipedia.org/wiki/Cifrado_C%C3%A9sar)
* [Cifrado XOR](https://es.wikipedia.org/wiki/Cifrado_XOR)
* [DFA](https://en.wikipedia.org/wiki/Deterministic_finite_automaton)
