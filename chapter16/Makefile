p4: p4.o readline.o
	gcc -o p4 p4.o readline.o
p4.o: p4.c readline.h
	gcc -c p4.c
p2: p2.o readline.o
	gcc -o p2 p2.o readline.o
p2.o: p2.c readline.h
	gcc -c p2.c
readline.o: readline.c readline.h
	gcc -c readline.c
