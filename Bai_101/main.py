import math

def is_prime(num):
    if num <= 1: return False
    if num <= 3: return True
    if num % 2 == 0 or num % 3 == 0: return False
    i = 5
    while i * i <= num:
        if num % i == 0 or num % (i + 2) == 0:
            return False
        i += 6
    return True

def check(n):
    mp = {}
    e = p = 0
    for i in range(2, int(math.sqrt(n)) + 1):
        if n % i == 0:
            e += 1
            while n % i == 0:
                if i in mp: mp[i] += 1
                else: mp[i] = 1
                n //= i
                p += 1
    
    if n != 1:
        e += 1
        p += 1
        mp[n] = 1
    
    if e >= 3:
        print("YES")
        res = 1
        i = 0
        for key in mp:
            i += 1
            if i <= 2:
                print(key, end=' ')
                mp[key] -= 1
            res *= key ** mp[key]
        print(res)
        return
    
    if e == 2 and p >= 4:
        print("YES")
        res = 1
        for key in mp:
            print(key, end=' ')
            res *= key ** (mp[key] - 1)
        print(res)
        return
    
    if e == 1 and p >= 6:
        print("YES")
        key = list(mp.keys())[0]
        print(key, key ** 2, key ** (mp[key] - 3))
        return
    
    print("NO")

def main():
    t = int(input())
    for _ in range(t):
        n = int(input())
        if is_prime(n):
            print("NO")
        else:
            check(n)

if __name__ == "__main__":
    main()
