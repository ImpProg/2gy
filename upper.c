#include <stdio.h>
#define IS_UPPER(c) ((c) >= 'A' && (c) <= 'Z')
#define TO_UPPER(c) ((c) - 'a' + 'A')

int main() {
	
	char letters[] = {'a', 'A', 'd', 'F', 'c', 'h', 't'};
	
	int i;
	for (i = 0; i < letters[i]; ++i) {
		printf("%c\n", (IS_UPPER(letters[i]) ? letters[i] : TO_UPPER(letters[i])));
	}
	
}