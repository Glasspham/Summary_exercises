from math import ceil
with open('trangtri.inp', 'r') as f:
    n, x = list(map(int, f.read().split()))
    with open('trangtri.out', 'w') as f:
        f.write(str(ceil(n / x)))