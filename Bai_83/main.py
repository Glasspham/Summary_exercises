# Đọc dữ liệu từ file
with open('E:\Project Visual Studio Code\Summary_exercises\Bai_82\BAI2.INP', 'r') as f:
    n = f.readline().strip()
    k = int(f.readline())

# Xác định vị trí của k chữ số lớn nhất để xoá
stack = []
remaining = k
for digit in n:
    while stack and remaining > 0 and stack[-1] < digit:
        stack.pop()
        remaining -= 1
    stack.append(digit)

# Xoá k chữ số
result = ''.join(stack[:len(stack) - remaining])

# Ghi kết quả vào file
with open('E:\Project Visual Studio Code\Summary_exercises\Bai_82\BAI2.OUT', 'w') as f:
    f.write(result)
