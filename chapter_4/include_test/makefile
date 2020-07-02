main: main.c encrypt.o
	gcc main.c encrypt.o -o main
encrypt.o: encrypt.c encrypt.h
	gcc -c encrypt.c

clean:
	rm *.o main
