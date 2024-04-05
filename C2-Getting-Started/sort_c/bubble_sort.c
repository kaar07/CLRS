#include<stdio.h>

void bubble_sort(int *array, size_t size){
    int swapped;
    do{
        swapped = 0;
        for(int i=0; i<size-1; i++){
            if(array[i+1]<array[i]){
                int temp = array[i];
                array[i] = array[i+1];
                array[i+1] = temp;
                swapped = 1;
            }
        }
    }while(swapped == 1);
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
    bubble_sort(array,size);
    printAll(array,size);
    return 0;
}