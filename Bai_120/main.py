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

def main():
    n = int(input())
    res = []
    tmp = []
    for _ in range(n):
        num = int(input())
        if is_prime(num):
            tmp.append(num)
        else:
            if len(tmp) >= len(res):
                res = tmp[:]
            tmp = []
    
    print(len(res))
    print(' '.join(map(str, res)))

if __name__ == "__main__":
    main()
