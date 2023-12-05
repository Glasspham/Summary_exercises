# a. Nhập dãy số nguyên
n = int(input("Nhập số phần tử của dãy (0<n<100): "))
while n <= 0 or n >= 100:
    n = int(input("Nhập lại số phần tử của dãy (0<n<100): "))

numbers = []
for i in range(n):
    num = int(input(f"Nhập phần tử thứ {i + 1}: "))
    numbers.append(num)

# b. In ra dãy sau khi nhập
print("Dãy số sau khi nhập:", numbers)

# c. Sắp xếp dãy số, đưa các số chia hết cho 3 lên đầu
sorted_numbers = sorted(numbers, key=lambda x: x % 3 != 0)
print("Dãy số sau khi sắp xếp:", sorted_numbers)

# d. Chèn số c vào vị trí k trong dãy
k = int(input(f"Nhập vị trí k để chèn số c (0<k<{n}): "))
while k <= 0 or k >= n:
    k = int(input(f"Nhập lại vị trí k để chèn số c (0<k<{n}): "))

c = int(input("Nhập số c để chèn vào dãy: "))
sorted_numbers.insert(k, c)
print("Dãy số sau khi chèn số c:", sorted_numbers)

# e. Kiểm tra và xử lý số c trong dãy
if c in sorted_numbers:
    sorted_numbers = [x for x in sorted_numbers if x != c]
    print("Sau khi xoá số c:", sorted_numbers)
else:
    print(f"Số {c} không có trong dãy.")
