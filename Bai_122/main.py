n = int(input())
a = list(map(int, input().split()))
f = True
for i in range(n):
    if a[i] != a[n - i - 1]:
        print("NO")
        f = False
        break

if(f): print("YES")