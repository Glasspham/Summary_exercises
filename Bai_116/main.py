def add(a, b):
    if len(a) < len(b):
        a, b = b, a
    b = b.zfill(len(a))
    t = ""
    r = 0
    for i in range(len(a) - 1, -1, -1):
        s = int(a[i]) + int(b[i]) + r
        if s > 9:
            r = 1
            s -= 10
        else:
            r = 0
        t += str(s)
    if r:
        t += '1'
    return t[::-1]

def sieve():
    F = [""] * 101
    F[1] = "1"
    F[2] = "2"
    for i in range(3, 101):
        F[i] = add(F[i - 1], F[i - 2])
    return F

F = sieve()
t = int(input())
while t:
    num = int(input())
    print(F[num])
    t -= 1