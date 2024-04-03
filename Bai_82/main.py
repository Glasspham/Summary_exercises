n = int(input())
a = list(map(int, input().split()))
maxx = [0] * (n + 1)
maxn = [0] * (n + 1)
s = 0

for i in range(n):
    maxx[i] = max(a[i], maxx[i - 1])

for i in range(n - 1, 0, -1):
    maxn[i] = max(a[i], maxn[i + 1])

for i in range(1, n):
    s = max(s, 2 * maxx[i - 1] - 3 * a[i] + 5 * maxn[i + 1])

print(s)
