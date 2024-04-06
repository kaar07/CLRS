function insertion_sort(array, size){
    for(let i=1; i<size; i++){
        let key = array[i];
        let j = i - 1;
        while(j>=0 && array[j]>key){
            array[j+1] = array[j];
            j--;
        }
        array[j+1] = key;
    }
}

let array = [42, 1984, 2, 6174, 1729, 355, 37, 113, 314, 1618];
console.log(array);
insertion_sort(array,10);
console.log(array);
