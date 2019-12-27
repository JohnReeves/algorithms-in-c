/************************
   build with:
     gcc sieve.c -o sieve
   run with:
     ./sieve
*************************/

#include <stdio.h>

#define N 2000

int main() {
   // learn the build cylce
   printf("Hello, Human!\n\n");
   printf("This is the bloomin' Sieve of Erastosthenes!\n\n");

   int i, j, a[N+1];

   for (a[i]=0, i=2; i<=N; i++) a[i] = 1 ;
   for (i=2; i<=N/2; i++){
     for (j=2; j<=N/i; j++){
       a[i*j] = 0;
     }
   }
   for (i=1; i<=N; i++){
     if (a[i]) printf("%d ", i);
   }
   printf("\n");
   return 0;
}

