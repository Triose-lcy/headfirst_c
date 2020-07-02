#include <stdio.h>
#include <string.h>

void cmp_len_size(char s[]) {
	// ‘sizeof’ on array function parameter ‘s’ will return size of ‘char *’
	printf("len: %d, size: %d bytes\n", strlen(s), sizeof(s));
}

int main() {
	char s[] = "hello_world!\n";
	// actually s = "hello_world\n\0"
	printf("len: %d, size: %d bytes\n", strlen(s), sizeof(s));

	// s will be transfered as char * into this funciton.
	cmp_len_size(s);

	return 0;
}
