#include <stdio.h>
#include <math.h>

int main() {
	long int Z,n,k;
	printf("Podaj ilosc zestawow:\n");
	scanf("%ld", &Z);
	long int i;
	for(i=1;i<=Z;i++) {
	printf("Podaj zakres:\n");
	scanf("%ld %ld", &n, &k);
	//Aby wskazaæ, ile jest sposobów wskazania K przedmiotów ze zbioru wszystkich N przedmiotów,
	//trzeba obliczyæ symbol Newtona, a nastêpnie skorzystaæ z twierdzenia:
	//"Je¿eli n|k = n to wartoœæ symbolu newtona jest nieparzysta."
	if ((n | k)==n) {
		printf("N\n");
	}
	else printf("P\n");
}
return 0;
}



