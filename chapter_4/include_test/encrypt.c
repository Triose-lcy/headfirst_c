#include "encrypt.h"

void encrypt(char *msg) {
	while(*msg) {
		*msg ^= 31;
		msg++;
	}
}
