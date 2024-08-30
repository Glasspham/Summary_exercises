n = int(input())
t = [0] * (n + 1)
r = [0] * n
f = [0] * (n + 1)
value_t = list(map(int, input().split()))
value_r = list(map(int, input().split()))
for i in range(n):
    t[i + 1] = value_t[i]

for i in range(n - 1):
    r[i + 1] = value_r[i]

f[1] = t[1]
for i in range(2, n + 1):
    f[i] = min(f[i - 1] + t[i], f[i - 2] + r[i - 1])

print(f[n])