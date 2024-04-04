def find_longest_increasing_subsequence(arr):
    n = len(arr)
    start = 0
    max_length = 1
    current_length = 1

    for i in range(1, n):
        if arr[i] > arr[i - 1]:
            current_length += 1
        else:
            if current_length > max_length:
                max_length = current_length
                start = i - max_length
            current_length = 1

    if current_length > max_length:
        start = n - current_length

    return arr[start : start + max_length]

a = [5, 2, 8, 6, 3, 6, 9, 7]
result = find_longest_increasing_subsequence(a)

print("Longest Increasing Subsequence: ", end="")
for num in result:
    print(num, end=" ")