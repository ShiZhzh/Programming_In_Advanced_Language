11_13.exe:11_13.o account.o date.o
		g++ 11_13.o account.o date.o -o 11_13.exe
11_13.o:11_13.cpp account.h accumulator.h date.h
		g++ -c 11_13.cpp -o 11_13.o
account.o:account.cpp account.h accumulator.h date.h
		g++ -c account.cpp -o account.o
date.o:date.cpp date.h
		g++ -c date.cpp -o date.o