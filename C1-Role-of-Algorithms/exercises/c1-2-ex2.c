/*
Exercise 1.2-2
--------------
Suppose that for inputs of size n on a particular computer, insertion sort runs in 8n2
steps and merge sort runs in 64 n lg n steps. For which values of n does insertion
sort beat merge sort?
8n^2 <= 64 n log n (Insertion sort beats merge sort)
--> n <= 8 log n
*/

#include <stdio.h>
#include <math.h>

int main(){
    int n = 2;
    while(n <= 8*log2(n)){
        n += 1;
    }
    printf("Insertion sort beats merge sort while n is between(inclusive) 2 and %d\n",n-1);
    return 0;
}

/*
Output: 26
*/
