import math

n = int(input())
divisors = [2, 3, 4, 5, 6, 7, 8, 9, 10]
k = 9
total = n
count = 0

for mask in range(1, 1 << k):
    lcm = 1
    bits = 0
    for i in range(k):
        if mask & (1 << i):
            lcm = math.lcm(lcm, divisors[i])
            bits += 1
    if bits % 2 == 1:
        count += n // lcm
    else:
        count -= n // lcm

print(total - count)

