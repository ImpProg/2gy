#include <stdio.h>

int main() {
	
	int array[] = {1, 2, 3, 4, 5, 6};
	printf("size: %d\n", sizeof(array) / sizeof(array[0]));
	return 0;
}