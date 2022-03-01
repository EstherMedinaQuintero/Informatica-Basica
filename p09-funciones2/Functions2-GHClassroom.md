# Práctica 9. Funciones (2). GitHub Classroom.

# Factor de ponderación: 8

### Objetivos
Los objetivos de esta práctica son que el alumnado:
* Desarrolle con mayor fluidez programas sencillos en C++.
* Profundice en el uso de funciones en sus programas.
* Utilice estructuras de datos simples: vectores (std::vector, std::array) y cadenas de caracteres (string).
* Profundice el estudio y uso de las herramientas git y GitHub.
* Comience a utilizar GitHub Classroom.

### Rúbrica de evaluacion de esta práctica
Todo el código que se presente a evaluación ha de cumplir los estándares definidos en la 
[Guía de Estilo de Google para C++](https://google.github.io/styleguide/cppguide.html).

Se señalan a continuación otros aspectos (la lista no es exhaustiva) que se tendrán en cuenta a la hora de evaluar esta práctica.
El alumnado ha de acreditar que:

* Conoce los conceptos expuestos en el material de referencia de esta práctica.
* Ha realizado todos los ejercicios propuestos, así como que es capaz de desarrollar otros de complejidad similar.
* El código que presenta para su evaluación está alojado en un repositorio privado de GitHub.
* Todas las prácticas realizadas hasta la fecha se encuentran alojadas en repositorios de GitHub.
* Dispone de una cuenta en la plataforma [Jutge](https://jutge.org/) y es capaz de auto-evaluar un programa en esa plataforma.
* Sus programas se compilan correctamente utilizando la utilidad `make` y un fichero `Makefile`.
* Todos los identificadores que utilice en su programa (constantes, variables, etc.) deberán ser
  siempre significativos. No utilice nunca identificadores de una única letra, tal vez con la excepción de las
  variables que utilice para iterar en un bucle.
* Sabe editar y modificar sus programas usando VSC con una conexión remota a la máquina virtual Linux de la asignatura.
* Ha realizado todos sus ejercicios en la Máquina Virtual Ubuntu de la asignatura.

### Repositorio de código para las prácticas de la asignatura
Utilice su cuenta GitHub para alojar en esta plataforma todas las prácticas de la asignatura que haya
realizado hasta la actualidad.
Recuerde utilizar nombres apropiados para cada práctica/proyecto de programación que emprenda.

### GitHub Classroom. Clonar un repositorio git 
Para la realización de esta práctica recibirá una invitación de GitHub Classroom (una plataforma relacionada
con GitHub) para una *tarea* que deberá aceptar.
Una vez acepte la invitación de la tarea, tendrá que clonar (`git clone`) tal como se explicaba en la práctica anterior el
repositorio asociado a la tarea. 
Ese repositorio copiado será el punto de partida (tendrá que añadir en él directorios con sus programas)
para su repositorio privado asociado con el desarrollo de esta práctica.

### Paso de parámetros por línea de comandos
En el repositorio que clone tendrá un directorio `fibonacci_sum` que contiene la solución a uno de los
problemas de las hojas de ejercicios de la asignatura.
Esa solución puede servirle de guía:
* Para crear sus propios ficheros Makefile para cada uno de los ejercicios.
* Para saber cómo separar sus ficheros de código en ficheros de cabecera (`*.h` y de código `*.cc`).
* Para estudiar el funcionamiento de la captura de parámetros pasados por línea de comandos a sus programas.

### Documentación de las funciones
* Escriba todos los programas de modo que estén estructurados en funciones.
* Documente cada función de su programa de modo
que cada una contenga comentarios en las líneas anteriores a su definición en la que se indique
	1. Una breve descripción de la finalidad de la función
	2. Para cada uno de sus parámetros se ha de indicar su significado
	3. Si la función no es void, indicar el significado asimismo de su resultado
```
/*
 * @brief Searches the array looking for the greatest value.
 * @param array: the array to be examined
 * @return The max value 
 */
int MaximumValue(const std::vector<int>& array) {
  // Code
}
```

### Ejercicios
* Desarrolle cada uno de estos ejercicios de forma incremental, probando cada una de las funciones que va Ud.
desarrollando. Utilice el depurador de VSC para corregir cualquier tipo de error semántico que se produzca en
cualquiera de sus desarrollos.
* Al realizar los siguientes ejercicios cree dentro de su repositorio de esta práctica un directorio diferente
para cada uno de los ejercicios.
Asigne a cada uno de esos directorios nombres significativos.
* La compilación de los programas correspondientes a cada ejercicio se automatizará con un fichero Makefile 
independiente para cada programa.
* Utilice el depurador integrado de VSC para depurar estos programas de modo que funcionen correctamente.
* Escriba programas que solucionen los siguientes problemas y evalúe su solución utilizando Jutge.
* Recuerde que Jutge solo evalúa la corrección de su programa desde un punto de vista del funcionamiento.
Su código ha de cumplir adicionalmente con los requisitos de modularidad, formato y estilo.

1. [P14130](https://jutge.org/problems/P14130_en) Equal to the last one
2. [P11725](https://jutge.org/problems/P11725_en) Sequential search in an array
3. [P63414](https://jutge.org/problems/P63414_en) Counting frequences 
4. [P20262](https://jutge.org/problems/P20262_en) Maximum sums
5. [P76024](https://jutge.org/problems/P76024_en) Sum of fractions
6. [P26492](https://jutge.org/problems/P26492_en) Balanced numbers 
7. [P71753](https://jutge.org/problems/P71753_en) Maximum of each sequence
8. [P33371](https://jutge.org/problems/P33371_en) Caesar cipher 
9. [P17179](https://jutge.org/problems/P17179_en) Statistical measures 
10. [P73501](https://jutge.org/problems/P73501_en) Increasing pairs 

En los siguientes ejercicios, haga que cada uno de sus programas conste de 3 ficheros:
* Un fichero `mi_programa.cc` (programa principal) que contendrá la función `main` e incluirá el fichero de cabecera `funciones.h`
* El fichero `funciones.h` que contendrá las declaraciones de las diferentes funciones que se utilizan en el
  programa principal para resolver el ejercicio en cuestión.
* El fichero `funciones.cc` que contendrá el código (definiciones) de las funciones declaradas en el fichero
  de cabecera.

Modifique los nombres de los ficheros que aquí se proponen para adaptarlos al ejercicio en cuestión.

11. Un [primo de Mersenne](https://es.wikipedia.org/wiki/N%C3%BAmero_primo_de_Mersenne) es un número primo de la 
   forma 2<sup>p</sup> - 1. 
	 Una propiedad conocida de de los primos de Mersenne es que `p` debe ser también un número primo.
   Desarrolle un programa `mersenne.cc` que tome por línea de comandos un número `N` y muestre 
	 como salida los primeros `N` primos de Mersenne.
```
$ ./mersenne 5
3
7
31
127
8191
```

Haga que si su programa se ejecuta sin pasar ningún parámetro por la línea de comandos, el programa finalice
su ejecución imprimiendo en pantalla un mensaje explicativo de su funcionamiento:
```
$ ./mersenne
$ mersenne: falta un número natural como parámetro
Pruebe 'mersenne --help' para más información.
```
si el usuario pasa como único parámetro la opción `--help`, el programa finalizará su ejecución e imprimirá
por pantalla un texto explicativo de su finalidad y comportamiento.

12. Un número de Armstrong es un número que es la suma de sus propios dígitos, 
   cada uno de los cuales elevado al número de dígitos del número. 
	 Por ejemplo:
   * 9 es un número de Armstrong porque: 9 = 9<sup>1</sup> = 9
   * 10 no es un número de Armstrong porque: 10 != 1<sup>2</sup> + 0<sup>2</sup> = 1
   * 153 es un número de Armstrong porque: 153 = 1<sup>3</sup> + 5<sup>3</sup> + 3<sup>3</sup> = 1 + 125 + 27 = 153
   * 154 no es un número de Armstrong porque: 154 != 1<sup>3</sup> + 5<sup>3</sup> + 4<sup>3</sup> = 1 + 125 + 64 = 190

   Desarrolle un programa en C++ que tome como parámetro por línea de comandos un 
	 número e indique si se trata de un número de Armstrong o no.
```
$ ./armstrong 9
9 is an Armstrong number

$ ./armstrong 154
154 is not an Armstrong number
```

### Referencias
* [Tutorial de Git. Manual básico con ejemplos](https://www.diegocmartin.com/tutorial-git/)
* [git - the simple guide](https://rogerdudler.github.io/git-guide/)
* [Google C++ Style Guide](https://google.github.io/styleguide/cppguide.html)
* [Jutge web site](https://jutge.org/)
