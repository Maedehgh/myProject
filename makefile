
all:myProgram
myProgram: src/mainTest.cpp src/Image.cpp src/Pixel.cpp
	g++ -Wall src/mainTest.cpp src/Image.cpp src/Pixel.cpp -o bin/myProgram

test: src/mainExemple.cpp src/Image.cpp src/Pixel.cpp
	g++ -Wall src/mainExemple.cpp src/Image.cpp src/Pixel.cpp -o bin/test
clean:
	rm -f bin/myProgram
myProjet: Pixel.o Image.o mainTest.o
	g++  Pixel.o Image.o mainTest.o -o myProjet
doc: doc/doxyfile
	doxygen doc/doxyfile



