# Đọc dữ liệu từ file input
with open('DONXE.INP', 'r') as file:
    n = int(file.readline())
    good_count = 0
    # Danh sách lưu trữ thông tin của các xe tốt
    good_cars = []
    for _ in range(n):
        m, k = map(int, file.readline().split())
        total_passengers = m + k
        if total_passengers < 60:
            # Lưu thông tin của xe tốt vào danh sách
            good_cars.append((total_passengers, _ + 1))  

# Sắp xếp các xe có hành khách theo thứ tự tăng dần
good_cars.sort()

# Ghi kết quả ra file output
with open('DONXE.OUT', 'w') as f:

    # In ra số lượng xe nhỏ nhất trong các xe có tổng khánh < 60 (nếu danh sách không rỗng)
    if good_cars:

        # Ta lấy giá trị nhỏ nhất vì ta sort lại từ nhỏ đến lớn
        min_passengers = good_cars[0][0]

        '''
        Đây là một biểu thức tạo một vòng lặp qua từng phần tử trong good_cars và kiểm tra xem số lượng hành khách của mỗi xe có 
        bằng min_passengers không. Nếu bằng, nó sẽ tăng biến đếm min_count lên 1.
        '''
        min_count = sum(1 for car in good_cars if car[0] == min_passengers)
        f.write(str(min_count))

    # In ra nếu danh sách rỗng
    else:
        f.write(str(0))
