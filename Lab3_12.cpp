#include <stdio.h>
#include <math.h>
#pragma warning(disable:4996)

double sum(int n) {
	if (n < 2) {
		return n;
	}
	else {
		return n + sum(n - 1);
	}
	return 0;
}


int main()
{
	int n, wynik;
	printf("Podaj do ktorej liczby mam zsumowac:\n");
	scanf("%d", &n);
	wynik = sum(n);
	printf("Suma wynosi: %d", wynik);
}
