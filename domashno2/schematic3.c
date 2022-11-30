#include <stdio.h>

int main() {
	int a, b, c, d;
	printf("a, b, c, d\n");
	scanf("%d %d %d %d", &a, &b, &c, &d);
	if ((a && b)||(c && d)) {
			printf("Lamp is on!\n");
	} else {
			printf("Lamp is off!\n");
	}
	return 0;
}