#include <stdio.h>

int main() {
	char letters[] = {'a', 'b', 'c', 'd', 'e', 'f', 'g', 'h', 'i', 'j'};
	
	int i;
	for (i = 0; i < 10; ++i) {
		letters[i] = letters[i]^4;
		printf("%c\n", letters[i]);
	}
	
	printf("\nDECODE\n");
	
	for (i = 0; i < 10; ++i) {
		letters[i] = letters[i]^4;
		printf("%c\n", letters[i]);
	}
	
	return 0;
}