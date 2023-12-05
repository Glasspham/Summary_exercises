#Cách 1
# Đọc dữ liệu từ file input
with open('E:\Language\Baitaptonghop\Bai_15\PHANCONG.INP', 'r') as file:
    lines = file.readlines()

times = []
for line in lines:
    # Chuyển đổi các số từ dạng chuỗi sang danh sách các số nguyên
    times.append(list(map(int, line.strip().split())))

# Tìm thời gian lớn nhất trong số thời gian nhỏ nhất của mỗi công việc
max_min_time = max(min(teacher) for teacher in zip(*times))

# Ghi kết quả ra file output
with open('E:\Language\Baitaptonghop\Bai_15\PHANCONG.OUT', 'w') as file:
    file.write(str(max_min_time))

#Cách 2
# Function to find the maximum of two numbers
def max(a, b):
    if a > b:
        return a
    else:
        return b

# Function to find the minimum of two numbers
def min(m, n):
    if m < n:
        return m
    else:
        return n

# Open the input file for reading
with open('E:\Language\Baitaptonghop\Bai_15\PHANCONG.INP', 'r') as file:
    lines = file.readlines()
    # Extracting values from each line
    m1, n1, k1 = map(int, lines[0].split())
    m2, n2, k2 = map(int, lines[1].split())
    m3, n3, k3 = map(int, lines[2].split())

# Set an initial value for kq
kq = 100
t = max(m1, max(n2, k3))
kq = min(t, kq)
t = max(m1, max(n3, k2))
kq = min(t, kq)
t = max(n1, max(m2, k3))
kq = min(t, kq)
t = max(n1, max(m3, k2))
kq = min(t, kq)
t = max(k1, max(m2, n3))
kq = min(t, kq)
t = max(k1, max(m3, n2))
kq = min(t, kq)

# Open the output file for writing the result
with open('E:\Language\Baitaptonghop\Bai_15\PHANCONG.OUT', 'w') as file:
    file.write(str(kq))
