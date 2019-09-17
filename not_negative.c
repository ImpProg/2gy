#include <stdio.h>

int main() {
	int numbers[] = {1, 34, -5, -56, 3, 0, -10, 24};
	
	int num = 0;
	int i;
	for (i = 0; i < sizeof(numbers) / sizeof(numbers[0]); ++i) {
		if (numbers[i] >= 0) {
			num++;
		}
	}		
	printf("Num of not negative numbers: %d\n", num);

	return 0;
}