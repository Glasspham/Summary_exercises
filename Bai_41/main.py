# Đọc dữ liệu từ file SUM.INP
with open("E:\Project Visual Studio Code\Summary_exercises\Bai_41\SUM.INP", "r") as file:
    N, K, B = map(int, file.readline().split())
    sequence = [int(file.readline()) for _ in range(N)]

# Tính tổng của K số nguyên liên tiếp từ số nguyên thứ B
total_sum = 0
for i in range(B - 1, B - 1 + K):
    total_sum += sequence[i % N]

# Ghi kết quả vào file SUM.OUT
with open("E:\Project Visual Studio Code\Summary_exercises\Bai_41\SUM.OUT", "w") as file:
    file.write(str(total_sum))
