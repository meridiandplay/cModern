p5: p5.o stack.o
	gcc -o p5 p5.o stack.o
p5.o: p5.c stack.h
	gcc -c p5.c
stack.o: stack.c stack.h
	gcc -c stack.c
p4: p4.o readline.o
	gcc -o p4 p4.o readline.o
p4.o: p4.c readline.h
	gcc -c p4.c
readline.o: readline.c readline.h
	gcc -c readline.c
p3: p3.o quicksort.o
	gcc -o p3 p3.o quicksort.o
p3.o: p3.c quicksort.h
	gcc -c p3.c
quicksort.o: quicksort.c quicksort.h
	gcc -c quicksort.c
p2: p2.o word2.o line.o
	gcc -o p2 p2.o word2.o line.o
p2.o: p2.c word.h line.h
	gcc -c p2.c
word2.o: word2.c word.h
	gcc -c word2.c
p1: p1.o word.o line.o
	gcc -o p1 p1.o word.o line.o
p1.o: p1.c word.h line.h
	gcc -c p1.c
word.o: word.c word.h
	gcc -c word.c
line.o: line.c line.h
	gcc -c line.c
