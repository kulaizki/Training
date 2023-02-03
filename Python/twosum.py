def twosum(nums, target):
    for i, num in enumerate(nums[:-1]):
        current_sum = num + nums[i+1]
        if current_sum == target:
            return [num, nums[i+1]]
    return None

arr = []
n = int(input("Enter n: "))

for i in range(n):
    element = int(input("Enter element: "))
    arr.append(element)

target = int(input("Enter target: "))
twoArr = twosum(arr, target)

if twoArr:
    for i in twoArr:
        print(i, end=" ")
else:
    print("No two elements in the array add up to the target sum")