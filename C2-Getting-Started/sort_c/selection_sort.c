#include<stdio.h>

void selection_sort(int *array, size_t size){
    for(int i=0; i<size-1; i++){
        int temp_min = i;
        for(int j=i+1; j<size; j++){
            if(array[temp_min] > array[j]){
                temp_min = j;
            }
        }
        int temp = array[temp_min];
        array[temp_min] = array[i];
        array[i] = temp;
    }
}

void printAll(int *array, size_t size){
    for(int i=0; i<size; i++){
        printf("%d ", array[i]);
    }
    printf("\n");
}


int main(){
    int array[10] = {42, 1984, 2, 6174, 1729, 355, 37, 113, 314, 1618};
    size_t size = sizeof(array)/sizeof(array[0]);
    printAll(array,size);
    selection_sort(array,size);
    printAll(array,size);
    return 0;
}