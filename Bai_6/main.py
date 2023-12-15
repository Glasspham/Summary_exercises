#Bài 1
# Hàm tính diện tích hình chữ nhật
def tinh_dien_tich_chu_nhat(a, b):
    return a * b

# Nhập thông tin cho hai mảnh vườn
a1, b1 = map(int, input().split())
a2, b2 = map(int, input().split())

# Tính diện tích của hai mảnh vườn
dien_tich_1 = tinh_dien_tich_chu_nhat(a1, b1)
dien_tich_2 = tinh_dien_tich_chu_nhat(a2, b2)

# Tính tổng diện tích và in kết quả
tong_dien_tich = dien_tich_1 + dien_tich_2
print("Tổng diện tích:", tong_dien_tich)

#Bài 2
import math

# Hàm tính diện tích tam giác theo công thức Heron
def tinh_dien_tich_tam_giac(a, b, c):
    p = (a + b + c) / 2
    dien_tich = math.sqrt(p * (p - a) * (p - b) * (p - c))
    return dien_tich

# Nhập độ dài ba cạnh của tam giác
a, b, c = map(int, input().split())

# Tính diện tích tam giác và in kết quả
dien_tich_tam_giac = tinh_dien_tich_tam_giac(a, b, c)
print("Diện tích tam giác:", dien_tich_tam_giac)

#Bài 3
# Hàm đếm số lần xuất hiện của xâu S2 trong phạm vi từ L đến R trong xâu S1
def dem_xuat_hien(S1, S2, L, R):
    # Đếm số lần xuất hiện bằng cách tách các phần tử từ L đến R và đếm
    count = 0
    for i in range(L - 1, R - len(S2) + 1):
        if S1[i:i + len(S2)] == S2:
            count += 1
    return count

# Nhập thông tin
S1 = input()
S2 = input()
L, R = map(int, input().split())

# Đếm và in kết quả
so_lan_xuat_hien = dem_xuat_hien(S1, S2, L, R)
print("Số lần S2 xuất hiện:", so_lan_xuat_hien)

#Bài 4
# Nhập thông tin
S = input()
x = input()
y = input()

# Thay thế xâu x bằng xâu y trong xâu S
S_moi = S.replace(x, y)

# In ra xâu mới sau khi thay thế
print(S_moi)

#Bài 5
# Nhập số lượng số nguyên và các số từ bàn phím
n = int(input("Nhập số lượng số nguyên: "))
numbers = list(map(int, input().split()))

# Tính tổng các số chẵn
tong_chan = 0
for num in numbers:
    if num % 2 == 0:  # Kiểm tra số chẵn
        tong_chan += num

# In ra tổng các số chẵn
print("Tổng các số chẵn:", tong_chan)

#Bài 6
# Nhập số lượng số nguyên và các số từ bàn phím
n = int(input("Nhập số lượng số nguyên: "))
numbers = list(map(int, input().split()))

# Tính tổng các số
tong = sum(numbers)

# In ra tổng các số
print("Tổng các số:", tong)
