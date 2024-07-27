def isPrime(n):
    if n <= 1: return False
    if n <= 3: return True
    if n % 2 == 0 or n % 3 == 0: return False
    for i in range(5, int(n ** 0.5) + 1):
        if n % i == 0 or n % (i + 2) == 0: return False
    return True

def ThreeDivisors(n):
    root = int(n ** 0.5)
    return root * root == n and isPrime(root)

def main():
    n = int(input())
    cnt = 0
    for i in range(2, int(n ** 0.5) + 1):
        if ThreeDivisors(i * i):
            cnt += 1
    print(cnt)

if __name__:
    main()