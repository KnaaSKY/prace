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
	//Aby wskaza�, ile jest sposob�w wskazania K przedmiot�w ze zbioru wszystkich N przedmiot�w,
	//trzeba obliczy� symbol Newtona, a nast�pnie skorzysta� z twierdzenia:
	//"Je�eli n|k = n to warto�� symbolu newtona jest nieparzysta."
	if ((n | k)==n) {
		printf("N\n");
	}
	else printf("P\n");
}
return 0;
}



