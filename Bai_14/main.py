def solve_fence(n, heights):
    heights.sort()  # Sắp xếp các độ cao để dễ tính toán

    # Tìm giá trị trung vị (median) của các độ cao
    median = heights[n // 2]

    # Tính tổng chi phí cần phải trả để đưa các thanh sắt về độ cao trung vị
    total_cost = sum(abs(height - median) for height in heights)

    return median, total_cost

# Đọc dữ liệu từ file input
with open('HANGRAO.INP', 'r') as file_in:
    n = int(file_in.readline().strip())
    heights = list(map(int, file_in.readline().strip().split()))

# Gọi hàm để giải quyết bài toán
result_height, min_cost = solve_fence(n, heights)

# Ghi kết quả ra file output
with open('HANGRAO.OUT', 'w') as file_out:
    file_out.write(f"{result_height}\n{min_cost}")
