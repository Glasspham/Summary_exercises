def ktn(n, k, t):
    m = n
    kq = ""
    while t != k:
        h = n % 10
        n //= 10
        if h != 5:
            t += 1
        kq = "5" + kq
    if int(str(n) + kq) < m:
        n += 1
    return str(n) + kq

def ktl(n, k, t):
    n = str(n)
    t = 0
    for i in range(len(n)):
        if n[i] == "5":
            t += 1
        if t == k + 1:
            return n[:i] + "6" + "0" * (len(n) - i - 1)
        
with open("MIN.INP", "r") as ifile:
    n, k=map(int, ifile.read().split())

t = str(n).count("5")

with open("MIN.OUT", "w") as ofile:
    if t < k: ofile.write(ktn(n,k,t))
    else: ofile.write(ktl(n,k,t))