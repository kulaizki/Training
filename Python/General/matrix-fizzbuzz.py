A = [[1, 2, 3, 4],
     [5, 6, 7, 8],
     [9, 10, 11, 15]]

for row in A:
    for elem in row:
        if elem % 3 == 0 and elem % 5 == 0:
            print("FizzBuzz")
        elif elem % 3 == 0:
            print("Fizz")
        elif elem % 5 == 0:
            print("Buzz")
        else:
            print(elem)