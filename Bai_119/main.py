import sys
from collections import defaultdict

maxn = 30001
a = defaultdict(list)
f = [0] * maxn

def main():
    n = int(sys.stdin.readline().strip())
    for _ in range(n):
        p, k = map(int, sys.stdin.readline().strip().split())
        a[k].append(p)
    
    for i in range(1, maxn):
        f[i] = f[i - 1]
        for j in range(len(a[i])):
            f[i] = max(f[i], f[a[i][j]] + i - a[i][j])
    
    print(f[maxn - 1])

if __name__ == "__main__":
    main()

