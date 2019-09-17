#include <stdio.h>
#include <ctype.h>

int main() {
	
	char letters[] = {'a', 'A', 'd', '9', 'F', 'c', '4', 'h', 't'};
	
	int i;
	for (i = 0; i < letters[i]; ++i) {
		if (isdigit(letters[i])) {
			printf("!\n");
		} else if (islower(letters[i])) {
			printf("%c\n", toupper(letters[i]));
		} else {
			printf("%c\n", tolower(letters[i]));
		}
	}
	
}