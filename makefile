#executable name: files
program1: prog1main.o prog1_functions.o
	g++ prog1main.o prog1_functions.o -o program1

main.o: prog1main.cpp
	g++ -c prog1main.cpp

prog1_functions.o: prog1_functions.cpp
	g++ -c prog1_functions.cpp

clean:
	rm *.o output
