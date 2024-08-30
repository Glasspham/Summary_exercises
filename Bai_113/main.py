n = int(input())
A = [0] * (n + 1)
f = [1] * (n + 1)
ans = 0
values = list(map(int, input().split()))
for i in range(n):
    A[i + 1] = values[i]

for i in range(1, n + 1):
    for j in range(1, i):
        if A[j] < A[i]:
            if f[j] + 1 > f[i]:
                f[i] = f[j] + 1

for i in range(1, n + 1):
    if f[i] > ans:
        ans = f[i]

print(ans)