#include <stdio.h>
#include <stdlib.h>

int main(int argc, char** argv) {
	if (argc != 2) {
		printf("Missing parameter...\n");
		return 1;
	}
	
	int number = atoi(argv[1]);
	printf("%d^2 = %d\n", number, (number * number));

	return 0;	
}