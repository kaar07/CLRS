class Insertion_sort{
    void insertion_sort(int[] array, int size){
        for(int i=1; i<size; i++){
            int key = array[i];
            int j = i - 1;
            while(j>=0 && array[j]>key){
                array[j+1] = array[j];
                j--;
            }
            array[j+1] = key;
        }
    }
    void printAll(int[] array, int size){
        for(int i=0; i<size; i++){
            System.out.print(array[i] + " ");
        }
        System.out.print("\n");
    }
    public static void main(String args[]){
        int array[] = {42, 1984, 2, 6174, 1729, 355, 37, 113, 314, 1618};
        int size = array.length;
        Insertion_sort sorter = new Insertion_sort();
        sorter.printAll(array, size);
        sorter.insertion_sort(array, size);
        sorter.printAll(array, size);
    }
}