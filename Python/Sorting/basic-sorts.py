# sorted() and sort.
nums = []
n = int(input("Enter n: "))

for i in range(n):
    element = int(input("Enter element {}: ".format(i+1)))
    nums.append(element)

nums.sort()
print(nums)

nums.sort(reverse=True)
print(nums)

sortedNums = sorted(nums)
print(sortedNums)

reversedNums = sorted(nums, reverse=True)
print(reversedNums)


