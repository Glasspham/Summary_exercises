# Đọc dữ liệu từ file input
with open('E:\Project Visual Studio Code\Summary_exercises\Bai_27\XAUGON.INP', 'r') as inp_file:
    input_str = inp_file.read().strip()

# Xây dựng xâu SG từ xâu S
output_str = input_str[0]  # Khởi tạo xâu SG với ký tự đầu tiên của xâu S

# Duyệt qua các ký tự còn lại của xâu S
for i in range(1, len(input_str)):
    # Nếu ký tự hiện tại khác với ký tự trước đó, thêm vào xâu SG
    if input_str[i] != input_str[i - 1]:
        output_str += input_str[i]

# Ghi xâu SG ra file output
with open('E:\Project Visual Studio Code\Summary_exercises\Bai_27\XAUGON.OUT', 'w') as out_file:
    out_file.write(output_str)
