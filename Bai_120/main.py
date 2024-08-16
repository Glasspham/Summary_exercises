def is_prime(num):
    if num <= 1:
        return False
    if num <= 3:
        return True
    if num % 2 == 0 or num % 3 == 0:
        return False
    i = 5
    while i * i <= num:
        if num % i == 0 or num % (i + 2) == 0:
            return False
        i += 6
    return True


n = int(input())
arr = list(map(int, input().split()))
res = []
tmp = []
for num in arr:
    if is_prime(num):
        tmp.append(num)
    else:
        if len(tmp) >= len(res):
            res = tmp[:]
        tmp = []

print(len(res))
print(' '.join(map(str, res)))