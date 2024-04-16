def is_strong_password(password):
    if len(password) < 8:
        return False
    has_digit = False
    has_upper = False
    has_lower = False
    has_special = False
    for char in password:
        if char.isdigit():
            has_digit = True
        elif char.isupper():
            has_upper = True
        elif char.islower():
            has_lower = True
        else:
            has_special = True
    return has_digit and has_upper and has_lower and has_special

# Đọc dữ liệu từ tệp
with open('BAI3.INP', 'r') as f:
    password = f.readline().strip()

# Kiểm tra mật khẩu
if is_strong_password(password):
    result = "Tối ưu"
else:
    result = "Không tối ưu"

# Ghi kết quả vào tệp
with open('BAI3.OUT', 'w', encoding='utf-8') as f:
    f.write(result)