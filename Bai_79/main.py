def calculate_scissor_length(n, m):
    # Tính tổng số cạnh của hình chữ nhật
    edges = 2 * (n + m)
    # Độ dài đường cắt là tổng số cạnh trừ đi số ô trong hình chữ nhật
    scissor_length = edges - n * m
    return scissor_length

# Đọc dữ liệu từ file input
with open('SCISSOR.INP', 'r') as f:
    n, m = map(int, f.readline().split())

# Tính độ dài đường cắt
result = calculate_scissor_length(n, m)

# Ghi kết quả ra file output
with open('SCISSOR.OUT', 'w') as f:
    f.write(str(result))
