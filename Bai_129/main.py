import sys
from itertools import islice

def main():
    input = sys.stdin.read
    data = input().split()
    
    n = int(data[0])
    k = int(data[1])
    a = list(map(int, data[2:n+2]))
    a.sort()

    # Cách 1
    print(sum(a[k:]), sum(a[:n - k]))

    # Cách 2
    s1 = sum(a)
    s2 = s1
    for i in range(k):
        s1 -= a[i]
        s2 -= a[n - 1 - i]
    
    print(s1, s2)

if __name__ == "__main__":
    with open("SUM.INP", "r") as infile:
        sys.stdin = infile
        with open("SUM.OUT", "w") as outfile:
            sys.stdout = outfile
            main()
            sys.stdout.flush()
