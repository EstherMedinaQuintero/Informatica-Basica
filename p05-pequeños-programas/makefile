MAINS = arithmetic_operators boolean_operators change_case data_types references short_circuit ejercicio1 ejercicio2 ejercicio3

all: $(MAINS)

# Dependencias para cada archivo
arithmetic_operators.o: arithmetic_operators.cc
boolean_operators.o: boolean_operators.cc
change_case.o: change_case.cc
data_types.o: data_types.cc
references.o: references.cc
short_circuit.o: short_circuit.cc
ejercicio1-sum_of_squares.o: ejercicio1-sum_of_squares.cc
ejercicio2-classification.o: ejercicio2-classification.cc
ejercicio3-powers.o: ejercicio3-powers.cc

# Construye los ejecutables
arithmetic_operators: arithmetic_operators.o 
	g++ -o $@ $^
boolean_operators: boolean_operators.o
	g++ -o $@ $^
change_case: change_case.o 
	g++ -o $@ $^
data_types: data_types.o 
	g++ -o $@ $^
references: references.o 
	g++ -o $@ $^
short_circuit: short_circuit.o
	g++ -o $@ $^
ejercicio1: ejercicio1-sum_of_squares.o
	g++ -o $@ $^
ejercicio2: ejercicio2-classification.o 
	g++ -o $@ $^
ejercicio3: ejercicio3-powers.o
	g++ -o $@ $^

clean: 
	rm -f *.o
	rm -f arithmetic_operators boolean_operators change_case data_types references short_circuit ejercicio1 ejercicio2 ejercicio3