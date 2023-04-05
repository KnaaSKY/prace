#include <stdio.h>
#include <stdlib.h>
#include <math.h>

int main() {
	float x, a, b;
	printf("Podaj x: \n");
	scanf("%f", &x);
	printf("Podaj parametr mi: \n");
	scanf("%f", &a);
	printf("Podaj parametr sigma: \n");
	scanf("%f", &b);
	double funkcja;
	funkcja = (double) (1/(b * sqrt(2*M_PI)))*exp((-1*pow(x-a,2))/(2*pow(b,2))) ;

	printf("Wartosc gestosci f(x) rozkladu normalnego w punkcie %f, dla zadanych parametrow mi=%f oraz sigma=%f wynosi f(%.3f)=%f \n", x,a,b,x,funkcja);
}

