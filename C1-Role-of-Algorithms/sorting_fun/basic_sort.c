/*
 * Making use of "qsort"
 * Refer: https://en.cppreference.com/w/c/algorithm/qsort
 * Check using gcc 11.4.0
 */

#include<stdio.h>
#include<stdlib.h>

int comparison_function(const void *a, const void *b){
    int a_int = *(const int*)a;
    int b_int = *(const int*)b;
    if(a_int < b_int){
        return -1;
    }else if(a_int > b_int){
        return 1;
    }else{
        return 0;
    }
}

void printAll(int *array, size_t size){
    for(int i=0; i<size; i++){
        printf("%d ",array[i]);
    }
    printf("\n");
}

int main(){
    int array[5] = {1729,37,6174,1618,-23};
    size_t count = sizeof(array)/sizeof(*array);
    size_t datasize = sizeof(int);
    printf("Before sorting: ");
    printAll(array, count);
    qsort(array, count, datasize, comparison_function);
    printf("After sorting: ");
    printAll(array, count);
    return 0;
}
