n = int(input())
a = [0] * n
f = [0] * (n + 1)
for i in range(1, n):
    a[i]= int(input())
f[2] = a[1]
f[3] = a[1] + a[2]
for i in range(4, n + 1):
    f[i] = min(f[i - 2] + a[i - 1], f[i - 1] + a[i - 1])
print(f[n])