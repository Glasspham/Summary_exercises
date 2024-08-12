# Hàm kiểm tra số nguyên tố
def is_prime(n):
    if n <= 1:
        return False
    for i in range(2, int(n**0.5) + 1):
        if n % i == 0:
            return False
    return True

# Đọc dữ liệu từ file input
with open('DOANNT.INP', 'r') as file:
    Q = int(file.readline().strip())
    results = []

    # Xử lý từng truy vấn
    for _ in range(Q):
        L, R = map(int, file.readline().split())
        count = 0
        for num in range(L + 1, R):
            if is_prime(num):
                count += 1
        results.append(count)

# Ghi kết quả vào file output
with open('DOANNT.OUT', 'w') as file:
    for result in results:
        file.write(str(result) + '\n')
