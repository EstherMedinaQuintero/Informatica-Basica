MAINS = dividers temperatures suma_tres_digitos suma_digitos time_decomposition leap_year cuadrado_asteriscos longest_shortest random_numbers statistics collatz

all: $(MAINS)

# Construye los ejecutables
dividers: dividers.cc
	g++ -Wall -std=c++14 -o $@ $^
temperatures: temperatures.o
	g++ -Wall -std=c++14 -o $@ $^
suma_tres_digitos: suma_tres_digitos.o
	g++ -Wall -std=c++14 -o $@ $^
suma_digitos: suma_digitos.o
	g++ -Wall -std=c++14 -o $@ $^
time_decomposition: time_decomposition.o
	g++ -Wall -std=c++14 -o $@ $^
leap_year: leap_year.o
	g++ -Wall -std=c++14 -o $@ $^
cuadrado_asteriscos: cuadrado_asteriscos.o
	g++ -Wall -std=c++14 -o $@ $^
longest_shortest: longest_shortest.o
	g++ -Wall -std=c++14 -o $@ $^
random_numbers: random_numbers.o
	g++ -Wall -std=c++14 -o $@ $^
statistics: statistics.o
	g++ -Wall -std=c++14 -o $@ $^
collatz: collatz.o
	g++ -Wall -std=c++14 -o $@ $^

clean: 
	rm -f *.o
	rm -f dividers temperatures suma_tres_digitos suma_digitos time_decomposition leap_year cuadrado_asteriscos longest_shortest random_numbers statistics collatz