import math
def is_prime(n):
    if n < 2:
        return False
    if n == 2 or n == 3:
        return True
    if n % 2 == 0 or n % 3 == 0:
        return False
    i = 5
    while i * i <= n:
        if n % i == 0 or n % (i + 2) == 0:
            return False
        i += 6
    return True

def find_longest_prime_subsequence(a):
    max_len = 0
    start_idx = -1
    current_len = 0
    current_start = -1

    for i in range(len(a)):
        if is_prime(a[i]):
            if current_len == 0:
                current_start = i
            if current_len == 0 or a[i] > a[i - 1]:
                current_len += 1
            else:
                current_len = 1
                current_start = i
        else:
            current_len = 0

        if current_len > max_len:
            max_len = current_len
            start_idx = current_start

    return max_len, start_idx


with open("nguyento.inp", "r") as fin:
    N = int(fin.readline().strip())
    a = list(map(int, fin.readline().strip().split()))
max_len, start_idx = find_longest_prime_subsequence(a)
with open("nguyento.out", "w") as fout:
    fout.write(f"{max_len}\n")
    if max_len > 0:
        fout.write(" ".join(map(str, a[start_idx:start_idx + max_len])) + "\n")