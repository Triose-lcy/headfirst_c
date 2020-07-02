#include <stdio.h>
#include <unistd.h>

int main(int argc, char *argv[]) {
	// ./2_getopt_test -i -f /home/cyl/test -l -x 'hero';
	char opt;
	printf("Argv below: \n");
	for(int i = 1; i < argc; i++) printf("argv[%d]: %s\n", i, argv[i]);
	printf("Argv done =====\n");

	printf("Opt below: \n");
	while((opt = getopt(argc, argv, ":if:lrx:")) != -1) {
		switch(opt) {
			case 'i':
				printf("%c\n", opt);
				break;
			case 'f':
				printf("%c\n", opt);
				printf("Filename: %s\n", optarg);
				break;
			case 'l':
				printf("%c\n", opt);
				break;
			case 'x':
				printf("%c\n", opt);
				break;
			case ':':
				printf("option needs a value");
				break;
			case '?':
				printf("Unknown opt: %c\n", opt);
				break;
			default :
				printf("Unknown opt: %c\n", opt);
				break;
		}
	}
	printf("Opt Done =====\n");

	printf("args not parsed: \n");
	for(; optind < argc; optind++) {
		printf("%s\n", argv[optind]);
	}
	printf("args not parsed done =====\n");

	return 0;
}
