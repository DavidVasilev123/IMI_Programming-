#include <stdio.h>

int main(){
	int a, c, h, S;
	printf("Vavedete osnova A = ");
	scanf("%d" , &a);
	printf("Vavedete osnova B = ");
	scanf("%d", &c);
	printf("Vavedete visochinata = ");
	scanf("%d" , &h);
	S = ((a+c)*h)/2;
	printf("Liceto na trapeca e = %d ", S);
	return 0;
}