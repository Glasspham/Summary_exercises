def is_fibonacci(n):
    if n == 0 or n == 1:
        return True
    a, b = 0, 1
    while b < n:
        a, b = b, a + b
    return b == n

n = int(input())
arr = list(map(int, input().split()))
s = 0

for num in arr:
    if is_fibonacci(num):
        s += num
        
print(s)
