#include <stdlib.h>
#include <stdio.h>
#include <math.h>
#pragma warning(disable:4996)
#define lp 100000

double c_od, c_do;

double f3(double x)
{
    return 0.57*x*x*x+94*x*x-2.9*x-7.2;
}
double f4(double x) {

    return 2.5 * sin(x) - cos(x) + sin(2*x) +5;
}


double prostokaty(double(*f)(double))
{
    double krok, x, suma = 0;
    krok = (c_do - c_od) / lp;
    for (x = c_od; x < c_do; x += krok) {
		suma += (*f)((double)(2*x+krok)/2);
	}
	suma*=krok;
    return suma;
}

double trapezy(double(*f)(double))
{
    double krok, x, suma = 0;
    krok = (c_do - c_od) / lp;
    suma = 0.5 * ((*f)(c_od) + (*f)(c_do));
    for (x = (c_od + krok); x < c_do; x += krok) {
		suma += (*f)(x);
	}
    suma*=krok;
    return suma;
}

double mc(double(*f)(double))
{
	double krok, x, y, minimum=0, maximum=0, i, z, pole, xDlugosc, yDlugosc, punkty=0, suma;
	xDlugosc=c_do - c_od;
	krok = xDlugosc / lp;
	for(i=c_od; i<=c_do; i+=krok) {
		if((*f)(i)>maximum) {
			maximum=(*f)(i);
		}
		else if((*f)(i)<minimum) {
			minimum=(*f)(i);
		}
	}
	
	yDlugosc=maximum-minimum;
	pole=xDlugosc*yDlugosc; 
	
	for(z=0;z<lp;z++) {
		x=((double) rand()/RAND_MAX)*xDlugosc+c_od;
		y=((double) rand()/RAND_MAX)*yDlugosc+minimum;
		
		if(y>0 && y <=(*f)(x)) {
			punkty++;
		}
		else if(y<0 && y >=(*f)(x)) {
			punkty--;
		}
		
	}
	suma=(double)pole*punkty/lp;
    return suma;
}

