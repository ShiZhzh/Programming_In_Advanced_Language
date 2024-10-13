test.exe : test.o client.o
		g++ test.o client.o -o test.exe

test.o : test.cpp client.h
		g++ -c test.cpp -o test.o

client.o: client.cpp client.h
		g++ -c client.cpp -o client.o