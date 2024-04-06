def insertion_sort(nums):
    for i in range(1,len(nums)):
        key = nums[i]
        j = i - 1
        while(j>=0 and nums[j] > key):
            nums[j+1] = nums[j]
            j -= 1
        nums[j+1] = key

if __name__ == "__main__":
    array = [42, 1984, 2, 6174, 1729, 355, 37, 113, 314, 1618]
    print(array)
    print("After sorting: ")
    insertion_sort(array)
    print(array)
