with open('E:\Language\Baitaptonghop\Bai_17\DAUTHAU.INP', 'r') as file:
    data = file.readlines()

n, k = map(int, data[0].split())
a = list(map(int, data[1].split()))
a.sort()
result = a[n - k] // 2 + 1

with open('E:\Language\Baitaptonghop\Bai_17\DAUTHAU.OUT', 'w') as file:
    file.write(str(result))
