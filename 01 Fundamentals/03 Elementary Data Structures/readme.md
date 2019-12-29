
# Elementary Data Structures

* `Arrays` using the Sieve of Erastosthenes .  
* `Linked Lists` using a Pushdown Stack .  
* `Abstract Data Types` using, well, nothing .  

## 1. Sieve of Erastosthenes 

Method to find the prime numbers up to a value

#### Yet another bloomin' Sieve of Eratosthenes!

1. initialise a linear array to 1s
2. set each multiple in the array to 0    
3. display the indexes of the remaining 1s

```c
#include <stdio.h>

#define N 200

int main() {
   int i, j, a[N+1];

   for (a[i]=0, i=2; i<=N; i++) a[i] = 1;
   for (i=2; i<=N/2; i++){
     for (j=2; j<=N/i; j++){
       a[i*j] = 0;
     }
   }
   for (i=1; i<=N; i++){
     if (a[i]) printf("%d ", i);
   }
   return 0;
}
```
`NB:` 
* brackets are included for ease of reading;    
* add printf statements to make the output more interesting .  

#### Build & Run with   

```bash
>> gcc sieve.c -o ./Results/sieve
>> ./Results/sieve

2 3 5 7 
11 13 17 19 
23 29 
31 37 
...

```

## 2. Pushdown Stack 

Implementation of a stack using a linked list

#### Yet another bloomin' Stack!

1. Create a `struct` with pointers to the head & tail
2. initialise the head & tail pointers    
3. add push, pop & evaluation functionality

```c
#include <stdio.h>

int main() {
   printf("Hello Mate!");
   return 0;
}
```
`NB:` 
*    

#### Build & Run with   

```bash
>> gcc stack.c -o ./Results/stack
>> ./Results/stack

...

```
