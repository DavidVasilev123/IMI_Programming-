#include <stdio.h>

int main(){
	int height, length, S, P;
	printf("Vavedete daljinata = ");
	scanf("%d" , &length);
	printf("Vavedete visochinata = ");
	scanf("%d", &height);
	S = (height*length);
	P = (2*height)+(2*length);
	printf("Lice = %d\n", S);
	printf("Perimetar = %d", P);
	return 0; 
}
