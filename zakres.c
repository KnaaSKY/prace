#include <stdio.h>
#include <stdlib.h>
#include <limits.h>
#include <float.h>
int main()
{
   short liczba1;
   int liczba2;
   float liczba3;
   
   liczba1 = pow(2,19);
   printf("Short = %d\n",liczba1);
   liczba2 = pow(2,31);
   printf("Int = %d\n",liczba2);
   liczba3 = pow(2,127.9999999);
   printf("Float = %f\n",liczba3);
   printf(SHRT_MAX);
   printf("%.*g\n", DECIMAL_DIG, FLT_MAX);

   

 
   return 0;
}
