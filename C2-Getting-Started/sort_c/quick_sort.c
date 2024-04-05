#include<stdio.h>

void swap(int *a, int *b){
    int temp = *a;
    a = *b;
    b = temp;
}

int parition(int *array, int low, int high){
    int pivot = array[low];
    int j = low + 1;
    while(j <= high){
        // Is this inplace?
    }
}

void quick_sort(int *array, size_t array_size){
    // need to choose right pivots
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
    quick_sort(array,size);
    printAll(array,size);
    return 0;
}
