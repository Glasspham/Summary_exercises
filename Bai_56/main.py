n = int(input())
s = input()

L = [3, 0, 1, 2]
R = [1, 2, 3, 0]
B = [2, 3, 0, 1]

tx = [0, 1, 0, -1]
ty = [1, 0, -1, 0]

x, y, h = 0, 0, 0

for i in range(n):
    if s[i] == 'L':
        h = L[h]
    if s[i] == 'R':
        h = R[h]
    if s[i] == 'B':
        h = B[h]
    x += tx[h]
    y += ty[h]

print(x, y)
