# Đọc dữ liệu từ file XAU.INP
with open('E:\Project Visual Studio Code\Summary_exercises\Bai_29\XAU.INP', 'r') as inp_file:
    s1 = inp_file.readline().strip()
    s2 = inp_file.readline().strip()

# Tính số lần lặp lại của xâu S1 trong xâu S2
count = 0
index = s2.find(s1)

# Sử dụng vòng lặp để tìm và đếm số lần lặp lại của xâu S1 trong xâu S2
while index != -1:
    count += 1
    index = s2.find(s1, index + 1)
    
# Ghi kết quả vào file XAU.OUT
with open('E:\Project Visual Studio Code\Summary_exercises\Bai_29\XAU.OUT', 'w') as out_file:
    out_file.write(str(count))
