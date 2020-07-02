#include <stdio.h>
#include "encrypt.h"

int main() {
	// gcc main.c encrypt.c -o main
	// ./main < encrypt.h
	char msg[100];
	while(fgets(msg, 99, stdin)) {
		printf("input: %s", msg);
		encrypt(msg);
		printf("output: %s\n", msg);
	}
	return 0;
}

