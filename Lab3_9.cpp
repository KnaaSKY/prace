#include <stdio.h>
#include <math.h>
#pragma warning(disable:4996)
double PI = 3.1415;
void kolo(double r, double* w1, double* w2) {
	*w1 = PI * r * r;
	*w2 = 2 * PI * r;
}

int main()
{
	double r, p = 0, o = 0;
	printf("Podaj promien kola\n");
	scanf("%lf", &r);
	kolo(r, &p, &o);
	printf("Pole = %lf\nObwod = %lf", p, o);
}

