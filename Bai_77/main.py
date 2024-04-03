# Hàm kiểm tra số nguyên tố
def is_prime(n):
    if n < 2:
        return False
    for i in range(2, int(n ** 0.5) + 1):
        if n % i == 0:
            return False
    return True

# Hàm kiểm tra số nguyên tố song sinh
def is_twin_prime(n):
    if not is_prime(n):
        return False
    reversed_n = int(str(n)[::-1])
    return is_prime(reversed_n) and reversed_n != n

# Đọc dữ liệu từ file và tính kết quả
with open("TWINS.INP", 'r') as f:
    T = int(f.readline())
    results = []
    for _ in range(T):
        a, b = map(int, f.readline().split())
        prime_sum = sum(filter(is_prime, range(a, b + 1)))
        twin_prime_count = sum(map(is_twin_prime, range(a, b + 1)))
        results.append((prime_sum, twin_prime_count))

with open("TWINS.OUT", 'w') as f:
    for result in results:
        f.write(f"{result[0]} {result[1]}\n")
