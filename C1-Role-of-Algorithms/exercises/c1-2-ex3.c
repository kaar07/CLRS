/*
Exercise 1.2-3
--------------
What is the smallest value of n such that an algorithm whose running time is 100n^2
runs faster than an algorithm whose running time is 2^n on the same machine?
*/
#include<stdio.h>
#include<math.h>

int main(){
    int n = 2;
    while(pow(2,n) <= 100*pow(n,2)){
        n += 1;
    }
    printf("The smallest value of n where algorithm with 100n^2 is faster than that of 2^n is : %d\n",n);
    return 0;
}

/*
Output: 15
*/