#include<stdio.h>

void insertion_sort(int *array, size_t array_size){
    for(int i=1; i<array_size; i++){
        int key = array[i];
        int j = i - 1;
        while(j>=0 && array[j]>key){
            array[j+1] = array[j];
            j--;
        }
        array[j+1] = key;
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
