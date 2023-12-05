# Đọc dữ liệu từ file input
with open('E:\Language\Baitaptonghop\Bai_8\MUAHOA.INP', 'r') as file:
    n, m = map(int, file.readline().split())
    flowers = [list(map(int, file.readline().split())) for _ in range(n)]

# Sắp xếp loại hoa theo giá từ thấp đến cao
flowers.sort(key=lambda x: x[0])

total_flowers = 0
total_cost = 0

# Duyệt qua từng loại hoa
for price, quantity in flowers:
    # Số lượng hoa có thể mua với số tiền hiện tại và số lượng hoa còn lại trong cửa hàng
    can_buy = min(quantity, (m - total_cost) // price)
    total_cost += can_buy * price  # Cập nhật tổng số tiền đã sử dụng
    total_flowers += can_buy  # Cập nhật tổng số lượng hoa đã mua

# Ghi kết quả vào file output
with open('E:\Language\Baitaptonghop\Bai_8\MUAHOA.OUT', 'w') as file:
    file.write(str(total_flowers))
