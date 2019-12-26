#include <stdio.h>

int gcd(int u, int v){
   int t;

   while (u > 0){
     if (u < v) { t = u; u = v; v = t; }
     u = u-v;
   }
   return v;
}

int main() {
   // learn the build cylce
   printf("Hello, GCD fans!\n\n");

   int x, y;
   printf("type a pair of numbers: ");
   while (scanf("%d %d", &x, &y) != EOF)
      if (x>0 && y>0)
         printf("gcd of %d and %d is %d\n", x, y, gcd(x, y));
   return 0;
}

