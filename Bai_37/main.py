import random
import math

def nhap_mang(n):
    return [random.randint(0, 99) for _ in range(n)]

def xuat_mang(array):
    print(' '.join(map(str, array)))

def tong_so_le(array):
    return sum(i for i in array if i % 2 != 0)

def kts_cp(a):
    i = int(math.sqrt(a))
    return i * i == a

def hoan_vi(a, b):
    return b, a

n = int(input("a. Nhập chiều dài mảng: "))
array = nhap_mang(n)

print("- In ra mảng ban đầu:")
xuat_mang(array)

print("b. Tổng các số lẻ trong dãy số là:", tong_so_le(array))

cp_found = False
for i in array:
    if kts_cp(i):
        print("c. Số chính phương đầu tiên trong dãy số là:", i)
        cp_found = True
        break

if not cp_found:
    print("c. Không có số chính phương trong dãy số!")

array_sort = sorted(array, reverse=True)
print("d. In ra dãy số đã được sắp theo chiều giảm dần:")
xuat_mang(array_sort)

min_value = min(array)
index_value_min = [i for i, x in enumerate(array) if x == min_value]

print("e. Giá trị nhỏ nhất trong dãy số ban đầu là:", min_value)
print("-Co", len(index_value_min), "vi tri co gia tri nho nhat!")
print("- Các vị trí tương ứng trong dãy số ban đầu là:",)
xuat_mang(index_value_min)    
