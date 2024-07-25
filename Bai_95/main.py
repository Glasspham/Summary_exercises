def Sum(n):
    total = 0
    i = 2
    while i * i <= n:
        if n % i == 0:
            total += i
            while n % i == 0:
                n //= i
        i += 1
    return total + n if n > 1 else total


n = int(input())
res = Sum(n)
print(res)

a, b = map(int, input().split())
save = []
for i in range(a, b + 1):
    if Sum(i) == res:
        save.append(i)

for num in save:
    print(num, end=" ")
print()
print(len(save))