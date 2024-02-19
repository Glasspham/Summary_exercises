# Cách 1
input_string = "3-5-8-9-4-6-5-8-7-3-1"
numbers = input_string.split('-')
int_numbers = []
for num in numbers:
    int_numbers.append(int(num))
total = sum(int_numbers)
max_value = max(int_numbers)
print("Tổng các phần tử là: ", total)
print("Giá trị lớn nhất là: ", max_value)

# Cách 2
chuoi_so = input('nhập một chuỗi số nguyên:')
s1 = chuoi_so.count("1")
s2 = chuoi_so.count("2")
s3 = chuoi_so.count("3")
s4 = chuoi_so.count("4")
s5 = chuoi_so.count("5")
s6 = chuoi_so.count("6")
s7 = chuoi_so.count("7")
s8 = chuoi_so.count("8")
s9 = chuoi_so.count("9")
tong = 1*s1+ 2*s2+ 3*s3+ 4*s4+ 5*s5+ 6*s6+ 7*s7+ 8*s8+ 9*s9
print('Tổng các phần tử là: ',tong)
print('Giá trị lớn nhất là: ', max(chuoi_so))
