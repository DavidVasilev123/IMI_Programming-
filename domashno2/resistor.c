#include <stdio.h>

int main() {
	double Uin, Uf, I, R;
	printf("Vavedete zahranvashtoto naprejenie: ");
		scanf("%lf", &Uin);
	printf("Vavedete naprejenie na svetodiod: ");
		scanf("%lf", &Uf);
	printf("Vavedete toka prez svetodioda: ");
		scanf("%lf", &I);
	
	R = (Uin - Uf) / I;
	
	printf("Rezistor = %.3lf", R);
	
	return 0;
}