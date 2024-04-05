# Chapter-2: Getting Started


## Insertion Sort

- **Sorting problem**:
    - Input: a sequence of n numbers
    - Ouptut: a permutation of given sequence where numbers are in non-decreasing order
    - Practical notes:
        - Sequence need not be always be numbers!
        - Sorting may affect entire bundle of data associated with our numbers
            - associated data: satellite data
            - numbers used to sort data: keys

- **Insertion Sort Algorithm**
    - Gist: By inserting keys at right position one by one

    - Algorithm:
        - Start from second element as key.
        - Loop invariant: elements to the left of the key is already sorted
        - In the sorted part
            - Iterate from right to left, until finding an element smaller than key
            - When element smaller than key is found, make next element the key.
            - To ensure that other elements remain intact, keep swapping them until you find the insertion position (while iterating right to left in sorted part)
        - Move to next element as key, repeat
    
    - Why do we iterate the sorted array part, right to left?
        - Otherwise (if iterated from left to right of sorted part), it is harder to maintain the array elements since it may require to change the index of every element after the insertion position


- **Loop Invariant**
    - Applicable for loops, obviously!
    - *"condition that doesn't change before or immediately after each loop iteration"*
        - could be a condition applicable to value of a variable
        - could be a condition applicable to combination of variable values
    - The Holy 3 conditions:
        - Intialization: Loop invariant must hold true before entering loop
        - Maintenence: Loop invariant must hold true before each subsequent iteration
        - Termination: Loop invariant must hold true even after exiting the loop.