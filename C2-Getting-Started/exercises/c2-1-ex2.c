/*
2.1-2
Consider the procedure SUM-ARRAY on the facing page. It computes the sum of
the n numbers in array A[1:n]. State a loop invariant for this procedure, and use
its initialization, maintenance, and termination properties to show that the 
SUM-ARRAY procedure returns the sum of the numbers in A[1:n]
*/
#include<stdio.h>
int main(){
    int array[10] = {42, 1984, 2, 6174, 1729, 355, 37, 113, 314, 1618};
    size_t size = sizeof(array)/sizeof(array[0]);
    int sum=0;
    for(int i=0; i<size; i++){
        sum += array[i];
    }
    printf("Sum of the array is : %d\n", sum);
    return 0;
}

/*
Used 0-index!
LOOP INVARIANT: For i th time of the loop, 'sum' is combined sum of A[0:i-1]
True when i=0, since sum is also zero
True at beginning of each loop.
While terminating, it holds true for next iteration (non-existent) making the 'sum'
to hold required value (combined sum of all elements)

*/