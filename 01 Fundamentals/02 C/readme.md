#### Euclid's Algorithm 

Method to find the gcd of 2 numbers

#### Yet another bloomin' Euclid GCD Algorithm!

1. subtracting the smaller number from larger doesn’t change the GCD .  
2. so keep subtracting the larger of two to give the GCD.


```c
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

```
`NB:` brackets are necessary here; add printfs to give a nice output.

#### Build with   

```bash
gcc gcd.c -o ./Results/gcd
```

#### Run with   

```bash
./Results/gcd
```

#### Produces
```
Hello, GCD fans!

type pairs of numbers;
^C or 'stop' to stop
34 68
gcd of 34 & 68 is 34
72 216
gcd of 72 & 216 is 72
34 72
gcd of 34 & 72 is 2
17 193
gcd of 17 & 193 is 1
```

