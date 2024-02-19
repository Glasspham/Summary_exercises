def beautiful_permutation(N):
    if N < 1:
        print(1)
        return
    if N < 4:
        print("NO SOLUTION")
        return

    permutation = []
    for i in range(N, 0, -1):
        if i % 2 == 0:
            permutation.append(i)

    for i in range(N, 0, -1):
        if i % 2 != 0:
            permutation.append(i)

    print(*permutation)

N = int(input())
beautiful_permutation(N)
