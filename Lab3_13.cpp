#include <stdio.h>
#include <math.h>
#pragma warning(disable:4996)

void whanoi(int N, char A, char B, char C) {
	if (N <= 0) {
		printf("Nieprawidlowa ilosc krazkow");
	}
	else if (N == 1) {
		printf("Przeniesiono krazek 1. z kolka %c na kolek %c\n", A, B);
	}
	else {
		whanoi(N - 1, A, C, B); 
		printf("Przeniesiono krazek %d. z kolka %c na kolek %c\n",N, A, B);
		whanoi(N - 1, C,B, A);
	}
	return 0;
}


int main()
{
	int N;
	printf("Podaj liczbe krazkow:\n");
	scanf("%d", &N);
	whanoi(N, 'A', 'B', 'C');
	return 0;
}
