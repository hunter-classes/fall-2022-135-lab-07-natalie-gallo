main: main.o funcs.o
	g++ -o main main.o funcs.o

funcs.o: funcs.cpp funcs.h

main.o: main.cpp funcs.h

clean:
	rm -f main.o funcs.o

#implementing doctests? if not remove tests target
#make sure main is executable, have to change indent and unindent cpp files
# ^ and add a main.cpp
