import math

def KTSCP(x, y):
    perfect_squares = []  # To store all perfect squares found
    for i in range(x,y + 1):
        n = int(math.sqrt(i))
        if n * n == i:
            perfect_squares.append(i)  # Store perfect squares found
    return perfect_squares

# Đọc dữ liệu từ file input
with open('E:\Project Visual Studio Code\Summary_exercises\Bai_30\CHINHPHUONG.INP', 'r') as f:
    x, y = map(int, f.readline().split())

result = KTSCP(x, y)

# Ghi kết quả vào file output
with open('E:\Project Visual Studio Code\Summary_exercises\Bai_30\CHINHPHUONG.OUT', 'w') as f:
    f.write(str(result) + '\n')