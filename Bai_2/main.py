# Đọc dữ liệu từ file input
with open('E:\Language\Baitaptonghop\Bai_2\olympic.inp', 'r') as file:
    n, k = map(int, file.readline().split())
    tasks = [list(map(int, file.readline().split())) for _ in range(n)]

# Sắp xếp các bài tập theo trình độ kỹ năng yêu cầu từ thấp đến cao
tasks.sort()

# Khởi tạo trình độ kỹ năng ban đầu và số bài tối đa có thể giải được
skill_level = k
solved = 0

# Duyệt qua từng bài tập để kiểm tra xem có thể giải hay không
for task in tasks:
    if skill_level >= task[0]:
        solved += 1
        skill_level += task[1]

# Ghi kết quả ra file output
import os

# Đường dẫn tuyệt đối tới file output
file_path = os.path.join(os.getcwd(), "E:\Language\Baitaptonghop\Bai_2\olympic.out")

# Ghi kết quả vào file .out
with open(file_path, 'w') as file:
    file.write(str(solved))  # solved là kết quả của bạn
