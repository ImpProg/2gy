#include <stdio.h>

int main() {
	char ch;
	for (ch = 'a'; ch <= 'z'; ch++) {
		printf("%c: %d\n", ch, ch);
	}
	
	return 0;
}