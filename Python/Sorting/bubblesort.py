def bubbleSort(nums):
    n = len(nums)
    for i in range(n):
        for j in range(n-i-1):
            if nums[j] > nums[j+1]:
                nums[j], nums[j+1] = nums[j+1], nums[j]
    return nums

nums = []
n = int(input("Enter n: "))
for i in range(n):
    element = int(input("Enter element {}: ".format(i+1)))
    nums.append(element)

print("Current array:", nums)
bubbleSort(nums)
print("Sorted array:", nums)