#executable name: files
program1: main.o prog1_functions.o
	g++ main.o prog1_functions.o -o program1

main.o: main.cpp
	g++ -c main.cpp

prog1_functions.o: prog1_functions.cpp
	g++ -c prog1_functions.cpp

clean:
	rm *.o output
