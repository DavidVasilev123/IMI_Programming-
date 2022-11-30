#include <stdio.h>

int main() {
	int a, b, c;
	printf("a, b, c\n");
	scanf("%d %d %d", &a, &b, &c);
	if (a || b || c) {
			printf("Lamp is on!\n");
	} else {
			printf("Lamp is off!\n");
	}
	return 0;
}