def twoSum (nums, target):
    mp = {}
    for i, num in enumerate(nums):
        x = target - num
        if x in mp: return [mp[num], i]
        mp[num] = i
    return []

arr = [1, 2, 3, 5, 10]

result = twoSum(arr, 15)

for i in result:
    print(i)
