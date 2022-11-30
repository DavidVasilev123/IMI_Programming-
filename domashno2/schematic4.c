#include <stdio.h>

int main() {
	int a, b, c, d, e;
	printf("a, b, c, d, e\n");
	scanf("%d %d %d %d %d", &a, &b, &c, &d, &e);
	if (((a && b)||(c && d))&&e) {
			printf("Lamp is on!\n");
	} else {
			printf("Lamp is off!\n");
	}
	return 0;
}