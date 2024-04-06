/*
2.3-1
Rewrite the INSERTION-SORT procedure to sort into monotonically decreasing in-
stead of monotonically increasing order.
*/


// I've tried a right-left (outer loop) approach here
// However, it works fine just by changing the comparison sign
#include<stdio.h>

void insertion_sort(int *array, size_t array_size){
    for(int i=array_size-2; i>=0; i--){
        int key = array[i];
        // loop invaraint -> right part after key is always sorted
        int j = i + 1;
        while(j<array_size && array[j]>key){
            array[j-1] = array[j];
            j++;
        }
        array[j-1] = key;
    }
}

void printAll(int *array, size_t array_size){
    for(int i=0; i<array_size; i++){
        printf("%d ", array[i]);
    }
    printf("\n");
}

int main(){
    int array[10] = {42, 1984, 2, 6174, 1729, 355, 37, 113, 314, 1618};
    size_t size = sizeof(array)/sizeof(array[0]);
    printAll(array,size);
    insertion_sort(array,size);
    printAll(array,size);
    return 0;
}