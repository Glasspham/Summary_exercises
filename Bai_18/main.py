def tongdoan(l, r, a):
    s = 0
    for i in range(l, r + 1):
        s += a[i]
    return s

with open('E:\Language\Baitaptonghop\Bai_18\THICONG.INP', 'r') as file_input:
    n, k = map(int, file_input.readline().split())
    a = list(map(int, file_input.readline().split()))

maxx = sum(a[:k])  # Sum of the first k elements
cnt = k - 1
s = maxx
d = a[cnt]

for i in range(n - 1, n - k - 1, -1):
    s = s - d + a[i]
    if s > maxx:
        maxx = s
    if cnt > 0:
        cnt -= 1
    d = a [cnt]

with open('E:\Language\Baitaptonghop\Bai_18\THICONG.OUT', 'w') as file_output:
    file_output.write(str(maxx))
