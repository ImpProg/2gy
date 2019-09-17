#include <stdio.h>
#include <string.h>

int main() {
	
	char name[10];
	
	scanf("%s", name);
	while (strcmp(name, "quit") != 0) {
		printf("Hello %s!\n", name);
		scanf("%s", name);
	}
}