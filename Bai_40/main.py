def maxpalin(s, l, r):
    while l >= 0 and r < len(s) and s[l] == s[r]:
        l -= 1
        r += 1
    return r - l - 1

with open("E:/Project Visual Studio Code/Summary_exercises/Bai_40/MAXPALIN.INP", 'r') as ifile:
    n = int(ifile.readline().strip())
    letter = ifile.readline().strip()

    ans = 1
    for i in range(1, n):
        if letter[i - 1] == letter[i]:
            ans = max(ans, maxpalin(letter, i - 1, i))

    for i in range(2, n):
        if letter[i - 2] == letter[i]:
            ans = max(ans, maxpalin(letter, i - 2, i))

with open("E:/Project Visual Studio Code/Summary_exercises/Bai_40/MAXPALIN.OUT", 'w') as ofile:
    ofile.write(str(ans))
