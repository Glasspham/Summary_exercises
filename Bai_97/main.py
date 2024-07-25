N, s = map(int, input().split())
f = True
if s > 9 * N:
    print(-1)
    f = False
if f:
    A = [0] * N
    for i in range(N):
        if s >= 9:
            A[i] = 9
            s -= 9
        else:
            A[i] = s
            s = 0
    for i in range(N):
        print(A[i], end='')
