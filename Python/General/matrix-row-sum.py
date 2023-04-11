A = [[1, 2, 3, 4],
     [5, 6, 7, 8],
     [9, 9, 9, 9]]

row_sums = []

for row in A:
    row_sums.append(sum(row))

print(f"These are the row sums: {row_sums}")