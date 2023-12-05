import math

dem = 0

with open('E:\Language\Baitaptonghop\Bai_16\DEBIEN.INP', 'r') as file:
    n = int(file.readline())
    for _ in range(n):
        l, r = map(int, file.readline().split())
        s1 = math.ceil(math.sqrt(l))
        s2 = math.floor(math.sqrt(r))
        dem += (s2 - s1 + 1)

with open('E:\Language\Baitaptonghop\Bai_16\DEBIEN.OUT', 'w') as file_out:
    file_out.write(str(dem) + '\n')
