12_4.exe:12_4.o account.o date.o
		g++ 12_4.o account.o date.o -o 12_4.exe
12_4.o:12_4.cpp account.h accumulator.h date.h
		g++ -c 12_4.cpp -o 12_4.o
account.o:account.cpp account.h accumulator.h date.h
		g++ -c account.cpp -o account.o
date.o:date.cpp date.h
		g++ -c date.cpp -o date.o