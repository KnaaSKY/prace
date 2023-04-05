#include <stdio.h>
#include <stdlib.h>
#include <math.h>
#define li 100 //liczba iteracji do szeregu
//tablicowanie funkcji log w <a,b> - szereg + funkcja biblioteczna
//definicja funkcji szereg; x - parametr formalny
double szereg(double x)
{
double s, w;
int i;
s=(x-1)/x;
w=(x-1)/x;
for(i=2;i<=li;i++)
{
 w=w*(x-1)/x*(i-1)/i;
 s=s+w;
}
return s;
}
int main()
{
 int lp;
 double a, b, krok, x;
 //<a;b> - przedzia³, lp - liczba podprzedzia³ów
 printf("Podaj konce przedzialow i liczbe podprzedzialow\n Zakres przedzialow: x > 1/2\n");
 scanf("%lf %lf %d",&a,&b,&lp);
 krok=(b-a)/lp;
 printf("krok=%6.2lf\n\n\n",krok);
 printf(" ----------------------------\n\n");
 printf("        x   szereg(x)  ln(x)\n ----------------------------\n");
 for (x=a;x<=b;x+=krok)
 printf("%10.2lf %7.6lf %7.6lf\n",x,szereg(x),log(x));
 printf(" ----------------------------\n\n");
}

