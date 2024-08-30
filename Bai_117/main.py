mod = 14062008
n, k = map(int, input().split())
a = [0] * (n + 1)
f = [0] * (n + 1)
A = list(map(int, input().split()))
for i in A: a[i] = 1
f[1] = 1
for i in range(2, n + 1):
    if a[i]: continue
    f[i] = (f[i - 1] + f[i - 2]) % mod
print(f[n])