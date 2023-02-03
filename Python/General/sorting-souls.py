def sortSouls(arr):
    if arr[0] < 2: 
        return []
        
    min_index = min(arr[1:arr[0]+1])
    second_min_index = int()
    for i in range (1, arr[0]+1):
        if arr[i] < arr[min_index]:
            second_min_index = min_index
            min_index = i
    newArr = arr[second_min_index: arr[0]+1]
    return newArr

souls = []
n = int(input("Enter n: "))
souls.append(n)

for i in range(1, souls[0]+1):
    element = int(input("Enter element: "))
    souls.append(element)

sorted_souls = sortSouls(souls)
print(sorted_souls)



