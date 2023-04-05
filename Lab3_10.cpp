#include <stdio.h>
#include <math.h>
#pragma warning(disable:4996)

void zmien(int* x, int* y) {
	int tmp;
	tmp = *x;
	*x = *y;
	*y = tmp;
}


int main()
{
	int x, y;
	printf("Podaj dwie liczby calkowite:\n");
	scanf("%d%d", &x, &y);
	printf("x=%d, y=%d\n",x,y);
	zmien(&x, &y);
	printf("Po zamianie:\nx=%d y=%d\n", x, y);
}
