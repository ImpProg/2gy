#include <stdio.h>

int main() {
	printf("%lu byte\n", sizeof(char));
	printf("%lu byte\n", sizeof(int));
	printf("%lu byte\n", sizeof(short));
	printf("%lu byte\n", sizeof(long int));
	printf("%lu byte\n", sizeof(short int));
	printf("%lu byte\n", sizeof(long));
	printf("%lu byte\n", sizeof(float));
	printf("%lu byte\n", sizeof(double));
	printf("%lu byte\n", sizeof(long double));
		
	return 0;
}