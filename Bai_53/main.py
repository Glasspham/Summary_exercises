x, y = input().split()
n = input()
if n.count(x) + n.count(y) == int(x) or n.count(x) + n.count(y) == int(y):
    print("YES")
else:
    print("NO")