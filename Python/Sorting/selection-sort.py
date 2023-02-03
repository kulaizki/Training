def selectionSort(nums):
    n = len(nums)
    for i in range(n):
        min_index = i
        for j in range(i+1, n):
            if nums[min_index] > nums[j]:
                min_index = j
        nums[i], nums[min_index] = nums[min_index], nums[i]
    return nums

nums = []
n = int(input("Enter n: "))
for i in range(n):
    element = int(input("Enter element {}: ".format(i+1)))
    nums.append(element)

print()
print("Current array:", nums)
selectionSort(nums)
print("Sorted array:", nums)