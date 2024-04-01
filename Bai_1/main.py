# Chưa tối ưu
T = int(input())
for _ in range(T):
    n = input().strip()
    n = n.replace('0', '5')
    print(int(n))

# Tối ưu với số lớn
from sys import stdin,stdout
n=int(stdin.readline())
for i in range(n):
      t=stdin.readline()
      t=t.replace('0','5')
      print(t)
