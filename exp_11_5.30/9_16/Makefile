9_16.exe:9_16.o account.o date.o
		g++ 9_16.o account.o date.o -o 9_16.exe
9_16.o:9_16.cpp account.h accumulator.h date.h
		g++ -c 9_16.cpp -o 9_16.o
account.o:account.cpp account.h accumulator.h date.h
		g++ -c account.cpp -o account.o
date.o:date.cpp date.h
		g++ -c date.cpp -o date.o