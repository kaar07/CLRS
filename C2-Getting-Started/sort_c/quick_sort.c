#include<stdio.h>

void swap(int *a, int *b){
    int temp = *a;
    *a = *b;
    *b = temp;
}


int partition(int *array, int low, int high){ // For quick_sort
    // based on low element as pivot
    int pindex = low;
    int sindex = low + 1;
    for(int i=low+1; i<=high; i++){
        if(array[pindex] >= array[i]){
            swap(&array[sindex], &array[i]);
            sindex++;
        }
    }
    swap(&array[sindex-1],&array[pindex]);
    return sindex-1;
}

void quick_sort(int *array, int low, int high){
    if(low < high){
        int pivot_index = partition(array, low, high);
        quick_sort(array, low, pivot_index-1);
        quick_sort(array, pivot_index+1, high);
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
    quick_sort(array,0,size-1);
    printAll(array,size);
    return 0;
}
