/************************
   build with:
     gcc sieve.c -o sieve
   run with:
     ./Resutlts/sieve
*************************/

#include <stdio.h>

#define N 200

int main() {
   int i, j, a[N+1];

   printf("Hello, Human!\n\n");
   printf("This is the bloomin' Sieve of Eratosthenes!\n\n");
   printf("1. initialise a linear array to 1s\n");
   printf("2. set each multiple in the array to 0\n");
   printf("3. display the indexes of the remaining 1s\n\n");

   for (a[i]=0, i=2; i<=N; i++) a[i] = 1;
   for (i=2; i<=N/2; i++){
     for (j=2; j<=N/i; j++){
       a[i*j] = 0;
     }
   }
   for (i=1; i<=N; i++){
     if (a[i]) printf("%d ", i);
     if (i%10 == 0) printf("\n");
   }
   printf("\n");
   return 0;
}

