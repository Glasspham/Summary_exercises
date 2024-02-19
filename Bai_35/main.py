# Bài 1
if False: 
    n = float(input("Nhap do dai (m): "))
    while n < 0:
        print("Do dai khong hop le!")
        n = float(input("Hay nhap lai do dai moi: "))

    selection = int(input("1. Chuyen sang dm\n2. Chuyen sang cm\n3. Chuyen sang mm\nLua chon cua ban la: "))
    while selection < 1 or selection > 3:
        print("Chuyen doi khong hop le!")
        selection = int(input("Hay nhap lai lua chon khac: "))

    if selection == 1:
        print(f"{n}m = {n * 10}dm")
    elif selection == 2:
        print(f"{n}m = {n * 100}cm")
    elif selection == 3:
        print(f"{n}m = {n * 1000}mm")


# Bài 2
if False: 
    def check_pass(pw):
        result = True
        mk = "khanhvy1209"
        size_mk = len(mk)
        size = len(pw)

        if size == size_mk:
            for i in range(size):
                if pw[i] != mk[i]:
                    result = False
                    break
        else:
            result = False
            
        return result


    omk = input("Nhap mat khau vao day: \n")

    if check_pass(omk) == True:
        print("Ban da nhap dung mat khau!")
    else:
        print("Ban da nhap sai mat khau")


# Bài 3
if False:
    a, b = map(int, input("Nhap 2 so nguyen duong a va b (cach nhau boi dau cach):\n").split())
    
    while a < 0 or b < 0 or a > b:
        print("Nhap lai a va b voi (a < b; a, b > 0):")
        a, b = map(int, input().split())

    print("Nhung so chan giua so a va b:")
    for i in range(a + 1, b):
        if i % 2 == 0:
            print(i, end=' ')
    

# Bài 4
if False:
    def compare(a, b):
        if a > b:
            return 1
        elif a == b:
            return 0
        else:
            return -1
    
    a, b = map(int, input("Nhap vao gia tri cho a va b (cach nhau boi dau cach): ").split())
    
    result = compare(a, b)
    if result == 1:
        print("a > b")
    elif result == 0:
        print("a = b")
    else:
        print("a < b")
    
    
# Bài 5    
if False:
    import time

    # Lấy thời gian thực từ máy tính
    current_time = time.localtime()

    # Lấy giờ, phút, giây hiện tại từ thời gian vừa lấy được
    hour = current_time.tm_hour
    minute = current_time.tm_min
    second = current_time.tm_sec

    print(f"{hour}:{minute}:{second}")
    if 0 <= hour <= 11:
        print("Good morning")
    if 12 <= hour <= 15:
        print("Good afternoon")
    if 16 <= hour <= 20:
        print("Good evening")
    if 21 <= hour <= 23:
        print("Good night")


# Bài 6    
if False:
    # Ý 1
    size_list = int(input("Nhap vao chieu dai danh sach: "))
    num_list = []
    print("Nhap vao mot danh sach: ")
    for i in range(size_list):
        num = int(input())
        num_list.append(num)

    # Ý 2
    total_sum = sum(num_list)
    print("Tong tat ca gia tri trong danh sach: ", total_sum)

    # Ý 3
    print("Danh sach dao nguoc vi tri so voi danh sach ban dau: ")
    reversed_list = num_list[::-1]
    print(*reversed_list)

    # Ý 4
    negative_list = [-x for x in num_list]
    print("Danh sach so am nguoc so voi danh sach ban dau: ")
    print(*negative_list)


# Bài 7    
if False:
    def UCLN(m, n):
        while m != n:
            if m > n:
                m -= n
            else:
                n -= m
            return m

    
    m, n = map(int, input("Nhap 2 so tu nhien bat ki (cach nhau boi dau cach): ").split())
    result = UCLN(m, n)
    print(f"UCLN({m},{n}) = {result}")
    

# Bài 8    
if False:
    def UCLN(m, n):
        while m != n:
            if m > n:
                m -= n
            else:
                n -= m
        return m

    def BCNN(m, n):
        return (m * n) // UCLN(m, n)

    m, n = map(int, input("Nhap 2 so tu nhien bat ki (cach nhau boi dau cach): ").split())
    result = BCNN(m, n)
    print(f"BCNN({m},{n}) = {result}")

    
# Bài 9   
if False:
    def identical_elements_in_the_two_lists(list1, list2):
        list3 = []

        for i in list1:
            for j in list2:
                if i == j and i not in list3:
                    list3.append(i)
                    break

        for i in list3:
            print(i, end=' ')

    
    list1 = [1, 2, 4, 5, 8, 9, 10]
    list2 = [5, 1, 2, 6, 5, 9, 11]
    identical_elements_in_the_two_lists(list1, list2)

    
# Bài 10   
if False:
    def tao_danh_sach_rieng(list1, list2):
        # Sử dụng set để lưu trữ các phần tử duy nhất từ cả hai danh sách
        unique_elements = set(list1 + list2)
        # Chuyển set thành list để trả về kết quả
        result = list(unique_elements)
        return result

    # Nhập vào hai danh sách từ người dùng
    list1 = list(map(int, input("Nhập danh sách thứ nhất, cách nhau bằng dấu cách: ").split()))
    list2 = list(map(int, input("Nhập danh sách thứ hai, cách nhau bằng dấu cách: ").split()))

    # Gọi hàm và in ra kết quả
    ket_qua = tao_danh_sach_rieng(list1, list2)
    print("Các phần tử riêng biệt từ hai danh sách là:", ket_qua)
