/*
*/
#include<stdio.h>
#include<stdlib.h>

int* binaryadd(int* n1, int* n2, int size){
    int *sum = malloc((size+1)*sizeof(int));
    int k = size;
    int carry = 0;
    for(int i=size-1; i>=0; i--){
        int temp = n1[i]+n2[i]+carry;
        sum[k] = temp%2;
        k--;
        carry = temp/2;
    }
    sum[k] = carry;
    return sum;
}

void printAll(int *array, size_t array_size){
    for(int i=0; i<array_size; i++){
        printf("%d ", array[i]);
    }
    printf("\n");
}


int main(){
    int num1[5] = {1,1,1,1,1};
    int num2[5] = {0,0,0,0,1};
    int size = sizeof(num1)/sizeof(num1[0]); // compiler knows sizeof(num1), hence works
    printAll(num1,size);
    printAll(num2,size);
    int *result = binaryadd(num1,num2,size);
    printAll(result, size+1);
    return 0;
}