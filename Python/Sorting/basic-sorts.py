# sorted() and sort.
def display(arr):
    for i in arr:
        print(i, end= " ")
    print()

nums = []
n = int(input("Enter n: "))

for i in range(n):
    element = int(input("Enter element {}: ".format(i+1)))
    nums.append(element)

nums.sort()
display(nums)

nums.sort(reverse=True)
display(nums)

sortedNums = sorted(nums)
display(sortedNums)

reversed_nums = sorted(nums, reverse=True)
display(nums)

