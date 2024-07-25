n = int(input("Enter a positive integer: "))
found = False
for length in range(2, n):
    start = (2 * n // length - length + 1) // 2
    if start <= 0:
        continue
    sum_seq = length * (2 * start + length - 1) // 2
    if sum_seq == n:
        found = True
        sequence = [start + i for i in range(length)]
        print(" ".join(map(str, sequence)), end=" ")
        str_expr = "(" + "+".join(map(str, sequence)) + f"={n})"
        print(str_expr)
if not found:
    print(-1)