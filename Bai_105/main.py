def find_max_sum(triangle, N):
    # Tạo một mảng dp để lưu trữ tổng lớn nhất tại mỗi điểm
    dp = [[0] * (i + 1) for i in range(N)]
    
    # Khởi tạo giá trị cho hàng cuối cùng của dp bằng hàng cuối cùng của tam giác
    dp[N-1] = triangle[N-1]
    
    # Tính toán từ dưới lên trên
    for i in range(N - 2, -1, -1):
        for j in range(i + 1):
            dp[i][j] = triangle[i][j] + max(dp[i+1][j], dp[i+1][j+1])
    
    # Kết quả là giá trị tại đỉnh của dp
    return dp[0][0]


# Nhập số hàng của tam giác
N = int(input())

# Nhập dữ liệu tam giác
triangle = []
for i in range(N):
    row = list(map(int, input().split()))
    triangle.append(row)

# Tìm tổng lớn nhất
Smax = find_max_sum(triangle, N)
print(f"Smax={Smax}")
