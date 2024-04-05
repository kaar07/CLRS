#ifndef STDIO_INCLUDED
#define STDIO_INCLUDED
#include<stdio.h>
#endif

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