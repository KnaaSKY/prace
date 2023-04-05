#include <stdio.h>
#include <stdlib.h>
#include <math.h>

int czy_pierwsza(int n) {		//funkcja sprawdzaj¹ca czy liczba jest pierwsza
	int i;
	if(n<2) {						//liczba pierwsza nie moze byc mniejsza niz 2
		return(0); 
	}
	for(i=2;i*i<=n;i++) {		 //jesli liczba dzieli sie przez inna liczbe niz 1 i sama siebie, nie jest to liczba pierwsza
		if(n%i==0) {
			return(0);
		}
}
	return(1);
}

int licz(int a, int b) {
	int i;
	int licznik=0;
	for(i=a;i<=b;i++) {
		if(czy_pierwsza(i)==1) {		//jesli liczba jest pierwsza, licznik zwieksza sie o 1
		   licznik=licznik+1;
	}

}
printf("W przedziale %d - %d jest %d liczb pierwszych.\n",a,b,licznik);
}

int main() {
	int Z,a,b;
	printf("Podaj liczbe zestawow:\n");
	scanf("%d", &Z);
	if (Z>=1 && Z<=20000) {
	int i;
	for(i=1;i<=Z;i++) {
	printf("Podaj zakres :\n");
	scanf("%d %d", &a, &b);
	licz(a,b);
}
}
}

	


