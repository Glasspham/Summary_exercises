a,b = input().split()
s = input()
luonga = s.count(a)
luongb = s.count(b)
if luonga == 1 or luongb == 1:
    print("YES\n")
else: print("NO\n")