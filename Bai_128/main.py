n = int(input())
k = 2
res = 0
while 1:
    sum = (k * (k - 1)) // 2
    if n - sum <= 0: break
    if (n - sum) % k == 0: res = k
    k += 1
print(res)