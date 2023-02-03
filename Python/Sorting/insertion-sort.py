def insertionSort(nums):
    for i in range(1, len(nums)):
        key = nums[i]
        j = i-1
        while j >= 0 and key < nums[j] :
                nums[j + 1] = nums[j]
                j -= 1
        nums[j + 1] = key
    return nums

nums = []
n = int(input("Enter n: "))
for i in range(n):
    element = int(input("Enter element {}: ".format(i+1)))
    nums.append(element)

print()
print("Current array:", nums)
insertionSort(nums)
print("Sorted array:", nums)