# Chapter-2: Getting Started


*Note*: This chapter isn't about sorting algorithms. ;-)

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

## Analyzing Algorithms

- RAM Model of Computation
    - model helps us to make assumptions about resources before analyzing algorithms
    - properties:
        - no concurrent operations
        - each instruction takes same amount of time
        - each data access takes same amount of time
        - contains arithmetic instructions (including floor and ceiling)
        - contains movement instructions (load, copy, store)
        - contains control instructions (conditional & unconditional branches, subroutine call and return)
        - contains data types: int, float, char
        - no memory hierarchy (cache, virtual memory etc)

- Input Size
    - Number of inputs
    - Or size of the inputs
- Running time
    - ~ Number of instructions and data accesses executed
    - RT of an algorithm is the sum of RTs of statements executed in it
    - To analyze algorithms, it is not always necessary to compute exact running time.
- Worst and average case analysis
    - Worst Case Analysis is used most often
        - gives upper bound
        - algorithms tend to have worst cases very often
    - Average Case Analysis may get very complex
        - What does "average" input constitute?
- Order of growth
    - or Rate of Growth, gives insights to how running time grows with increasing inputs
    - in worst case analysis:
        - ignore constants like c1, c2, ... etc
        - ignore non-leading terms since leading term will be more significant when input is really large.


## Designing Algorithms

- **Divide and Conquer**
    - three characteristic steps:
        - Divide: break problem subproblems that are smaller instances of same problem
        - Conquer: each subproblem should be sovled (also recursively, implies may divide further)
        - Combine: to form a solution to original problem based on subproblems' results.
    - *the base case*
        - when subproblem is small enough, it may not need recursing
        - base case acts as termination of recursion in a chain
        - results of subproblems are backtracked to parent problems 

```
// The MergeSort Algorithm

MergeSort(A,l,h)
if(l>=h): // base-case
    return
m = (l+h)/2
MergeSort(A,l,m)
MergeSort(A,m+1,h)
Merge(A,l,h,m)
```

```
// The Merge Algorithm (used in conjunction with MergeSort)

Merge(A,l,h,m)
n1 = m - l + 1
n2 = h - m
T1[0:(n1-1)]
T2[0:(n2-2)]
for i=0 to (n1-1):
    T1[i] = A[l+i]
for i=0 to (n2-1):
    T2[i] = A[m+1+j]
i = 0
j = 0
k = l
while(i<n1 and j<n2):
    if(T1[i] <= T2[j]):
        A[k] = T1[i]
        i = i + 1
    else:
        A[k] = T2[j]
        j = j + 1
    k = k + 1
while(i<n1):
    A[k] = T1[i]
    i = i + 1
    k = k + 1
while(j<n2):
    A[k] = T2[j]
    j = j + 1
    k = k + 1
```

- Sorting based on Merge Sort is done through two functions
    - MergeSort
        - Divides
        - Checks base cases
        - Initiates Combination
    - Merge
        - Conquers
        - Can also check base case instead of MergeSort doing it

