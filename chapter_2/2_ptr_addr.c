#include <stdio.h>
#include <string.h>


int main() {
	int int_arr[] = {1, 3, 2, 1000, 50, 30}; // len = 6
	char char_arr[] = "This is a char array."; // len = 21

	printf("addr of int_arr[0]: %d, addr of int_arr[1]: %d, sizeof int: %d byte(s)\n", int_arr, (int_arr + 1), sizeof(int));
	printf("addr add result: %d\n", (int_arr + 1) == (&int_arr[1]));
	printf("addr of char_arr[0]: %d, addr of char_arr[1]: %d, sizeof char: %d byte(s)\n", char_arr, (char_arr + 1), sizeof(char));

	// int_arr[3] == *(int_arr + 3) == *(3 + int_arr) == 3[int_arr]
	printf("%d\n", 3[int_arr]);

	char *sptr = "asdf";
	printf("%d == %d\n", sptr, "asdf");


	return 0;
}
