/************************
   build with:
     gcc gcd.c -o gcd
   run with:
     ./gcd
*************************/

#include <stdio.h>

int gcd(int u, int v){
   int t;

   while (u > 0){
     // swap
     if (u < v) { 
       t = u; u = v; v = t; 
     }
     u = u-v;
   }
   return v;
}

int main(){
   int x, y;

   printf("Hello, GCD fans!\n\n");
   printf("type pairs of numbers; \n");
   printf("^C or 'stop' to stop \n");

   while (scanf("%d %d", &x, &y) != EOF)
      if (x>0 && y>0)
         printf("gcd of %d & %d is %d\n", x, y, gcd(x, y));
   return 0;
}

