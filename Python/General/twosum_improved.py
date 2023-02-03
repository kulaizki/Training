def twosum(nums, target):
    num_dict = {}
    result = []
    for i, num in enumerate(nums):
        if target - num in num_dict:
            result.append([num, target - num])
        num_dict[num] = i
    return result

arr = []
n = int(input("Enter n: "))

for i in range(n):
    element = int(input("Enter element: "))
    arr.append(element)

target = int(input("Enter target: "))
twoArr = twosum(arr, target)

if twoArr:
    print(twoArr)
else:
    print("No two elements in the array add up to the target sum")