#include <stdio.h>

int main() {
	// ./1_std_in_out_err <stdin.txt >stdout.txt 2>stderr.txt
	char *str_out = "This msg will be printed to stdout\n";
	char *str_err = "This msg will be printed to stderr\n";
	char str_in[100];

	fgets(str_in, sizeof(str_in), stdin);
	str_in[99] = '\0';

	printf("This msg is from stdin: %s\n", str_in);

	fprintf(stdout, "%s", str_out);
	fprintf(stderr, "%s", str_err);

	return 0;
}
