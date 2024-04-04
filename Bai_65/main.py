def check(n):
    s = str(n)
    if s[0] == s[-1]:
        return True
    return False

with open('CIRCLE.INP', 'r') as ifile, open('CIRCLE.OUT', 'w') as ofile:
    a, b = map(int, ifile.readline().split())
    cnt = 0
    for i in range(a, b):
        if check(i):
            cnt += 1
    ofile.write(str(cnt) + '\n')