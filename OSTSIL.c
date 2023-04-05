#include <stdio.h>
 
//Wartosci dla silnia 0-9;
int silnia[] = {1, 1, 2, 6, 4, 2, 2, 4, 2, 8};
  
int niezero(int n) {
	//Dla malych liczb (0-9) ostatnia niezerowa cyfra silni przypisywana jest z tablicy.
     if (n < 10) {
	return silnia[n];
  }
  //Aby obliczyæ ostatni¹ niezerow¹ cyfr¹ silni, posluze sie wzorem:
  //Aby nie otrzymaæ 0 na koñcu, liczbê dzielimy przez 5. (2x5=10)
  //Silnie z wyniku mnozymy razy silnie z cyfry jednosci.
  //Dodatkowo, jezeli cyfra dziesiatek liczby n jest parzysta - calosc mnozymy razy 6,
  //Jesli nieparzysta - razy 4.
  
    if (((n/10) % 10) % 2 == 0)
        return (6*niezero(n/5)*silnia[n%10])%10;
    else
        return (4*niezero(n/5)*silnia[n%10])%10;
}
  
int main() {
    int Z,n,i;
    printf("Podaj liczbe zestawow:\n");
	scanf("%d", &Z);
	if (Z>=1 && Z<=1000) {
    for(i=1;i<=Z;i++) {
	printf("Podaj liczbe do obliczenia ostatniej niezerowej cyfry silni: \n");
    scanf("%d", &n);
    printf("Ostatnia nie-0 cyfra: %d\n", niezero(n));    
}
}
}



