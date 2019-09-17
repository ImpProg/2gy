#include <stdio.h>

int main() {
	int numbers[] = {34, 56, 1, 123, 89, 456};
	int sum = 0;
	
	int i;
	for (i = 0; i < sizeof(numbers) / sizeof(numbers[0]); ++i) {
		sum += numbers[i];
	}
	printf("sum: %d\n", sum);
		
	return 0;
}