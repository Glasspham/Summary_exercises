import math

def sum_of_divisors(n):
    sum_divisors = 0
    for i in range(1, int(math.sqrt(n)) + 1):
        if n % i == 0:
            sum_divisors += i
            if n // i != i:
                sum_divisors += n // i
    return sum_divisors

if __name__ == "__main__":
    with open("TONGUOC.INP", "r") as ifile, open("TONGUOC.OUT", "w") as ofile:
        K, Q = map(int, ifile.readline().split())
        for _ in range(Q):
            L, R = map(int, ifile.readline().split())
            cnt = 0
            for j in range(L, R + 1):
                if sum_of_divisors(j) >= K:
                    cnt += 1
            ofile.write(str(cnt) + "\n")