def nCk(n, k):
    if k == 0 or k == n:
        return 1
    return nCk(n-1, k-1) + nCk(n-1, k)

with open("ISOSCELE.INP", 'r') as f:
    n = int(f.read())
    with open("ISOSCELE.OUT", 'w') as f:
        f.write(str(nCk(n, 3)))