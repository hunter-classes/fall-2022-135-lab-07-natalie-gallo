main: main.o unindent.o indent.o
	g++ -o main main.o unindent.o indent.o

tests: tests.o unindent.o indent.o
	g++ -o tests tests.o unindent.o indent.o

unindent.o: unindent.cpp unindent.h

indent.o: indent.cpp indent.h

main.o: main.cpp unindent.cpp indent.cpp

tests.o: tests.cpp doctest.h unindent.h indent.h
	g++ -c -std=c++11 tests.cpp

clean:
	rm -f main.o tests.o unindent.o indent.o

#implementing doctests? if not remove tests target
#make sure main is executable, have to change indent and unindent cpp files
# ^ and add a main.cpp
