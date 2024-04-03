def last_digit_power(m, n):
    # Dùng tính chất của chữ số cuối cùng để giảm bớt số lần lặp
    last_digit = m % 10
    if last_digit == 0 or last_digit == 1 or last_digit == 5 or last_digit == 6:
        return last_digit
    
    # Sử dụng công thức Euler để tính toán chữ số cuối cùng
    exp = n % 4
    if exp == 0:
        exp = 4
    return pow(last_digit, exp) % 10

# Đọc dữ liệu từ file input
with open('CHUSO.INP', 'r') as f:
    m, n = map(int, f.readline().split())

# Tính toán chữ số cuối cùng của mũ n
result = last_digit_power(m, n)

# Ghi kết quả vào file output
with open('CHUSO.OUT', 'w') as f:
    f.write(str(result))