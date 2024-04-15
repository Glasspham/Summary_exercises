def prime_factorization(n):
    factors = []
    i = 2
    while i * i <= n:
        if n % i == 0:
            cnt = 0
            while n % i == 0:
                n //= i
                cnt += 1
            factors.append((i, cnt))
        i += 1
    if n > 1:
        factors.append((n, 1))

    for i in range(len(factors)):
        print(factors[i][0], "^", factors[i][1], end="")
        if i < len(factors) - 1:
            print(" ", end="")
    print()

while True:
    n = int(input())
    if n == 0:
        break
    prime_factorization(n)
