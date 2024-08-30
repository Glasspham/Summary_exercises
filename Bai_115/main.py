n, m = map(int, input().split())
a = [[0] * (m + 1) for _ in range(n + 1)]

for i in range(1, n + 1):
    a[i] = [0] + list(map(int, input().split()))

f = [[0] * (m + 2) for _ in range(n + 2)]

for i in range(m + 1):
    f[0][i] = f[n + 1][i] = -1e9

for j in range(1, m + 1):
    for i in range(1, n + 1):
        f[i][j] = max(f[i - 1][j - 1], f[i][j - 1], f[i + 1][j - 1]) + a[i][j]

ans = max(f[i][m] for i in range(1, n + 1))
print(int(ans))