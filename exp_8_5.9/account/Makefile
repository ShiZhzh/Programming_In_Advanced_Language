7-10.exe:7-10.o account.o date.o
		g++ 7-10.o account.o date.o -o 7-10.exe
7-10.o:7-10.cpp account.h accumulator.h date.h
		g++ -c 7-10.cpp -o 7-10.o
account.o:account.cpp account.h accumulator.h date.h
		g++ -c account.cpp -o account.o
date.o:date.cpp date.h
		g++ -c date.cpp -o date.o