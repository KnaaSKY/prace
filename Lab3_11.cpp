#include <stdio.h>
#include <math.h>
#pragma warning(disable:4996)

double fun(double x, double y, int* nr) {
	double z;
	if (x * x + y * y <= 1) {
		z = x * x + y;
		*nr = 1;
	}

	if (y > x + 5) {
		z = 2 * x + y * y;
		*nr = 2;
	}

	if (x * x + y * y > 1 && y <= x + 5) {
		z = 0.5 * x * x + y;
		*nr = 3;
	}
	return z;
}


int main()
{
	double x=0, y=0, z;
	int nr;
	printf("Podaj x, y:\n");
	scanf("%lf %lf", &x, &y);
	z = fun(x, y, &nr);
	printf("z=%lf, wzor nr=%d\n", z, nr);
}
