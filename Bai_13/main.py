# Đọc dữ liệu từ file input
with open("DIFFSSTR.INP", "r") as file_in:
    n = int(file_in.readline().strip())  # Đọc độ dài của xâu ký tự S
    s = file_in.readline().strip()  # Đọc xâu ký tự S

# Hàm kiểm tra xem tất cả các xâu con độ dài k có độ phân biệt hay không
def check(k):
    seen = set()  # Sử dụng set để lưu trữ các xâu con đã xuất hiện
    for i in range(n - k + 1):
        substring = s[i:i + k]  # Lấy xâu con độ dài k từ vị trí i
        if substring in seen:
            return False  # Nếu xâu con đã tồn tại, không độ phân biệt
        seen.add(substring)  # Thêm xâu con vào set
    return True  # Nếu tất cả các xâu con đều độc nhất, có độ phân biệt

# Duyệt qua các độ dài có thể của xâu con và tìm độ phân biệt nhỏ nhất
result = n
for length in range(1, n + 1):
    if check(length):
        result = length  # Cập nhật độ phân biệt nhỏ nhất
        break  # Thoát khi đã tìm được độ phân biệt nhỏ nhất

# In kết quả ra file output
with open("DIFFSSTR.OUT", "w") as file_out:
    file_out.write(str(result))