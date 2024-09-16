Programm: hello.o World.o
	g++ hello.o World.o -o Programm
hello.o: hello.cpp
	g++ -c hello.cpp
World.o: World.cpp
	g++ -c World.cpp
clean:
	rm -f Programm *.o
