# Đọc dữ liệu từ file input
with open('MAX.INP', 'r') as f:
    A = f.readline().strip()  # Đọc xâu A từ dòng đầu tiên
    B = f.readline().strip()  # Đọc xâu B từ dòng thứ hai

# Hàm để tìm số C lớn nhất từ xâu A và B
def find_largest_common_subsequence(A, B):
    # Tạo ma trận để lưu độ dài của các chuỗi con chung
    dp = [[0] * (len(B) + 1) for _ in range(len(A) + 1)]
    result = ''  # Chuỗi kết quả

    # Xây dựng ma trận dp để tìm độ dài chuỗi con chung
    for i in range(1, len(A) + 1):
        for j in range(1, len(B) + 1):
            if A[i - 1] == B[j - 1]:
                dp[i][j] = dp[i - 1][j - 1] + 1
            else:
                dp[i][j] = max(dp[i - 1][j], dp[i][j - 1])

    # Duyệt ngược từ dp[len(A)][len(B)] để xây dựng chuỗi con chung lớn nhất
    i, j = len(A), len(B)
    while i > 0 and j > 0:
        if A[i - 1] == B[j - 1]:
            result = A[i - 1] + result
            i -= 1
            j -= 1
        elif dp[i - 1][j] > dp[i][j - 1]:
            i -= 1
        else:
            j -= 1

    return result if result else '-1'  # Trả về chuỗi con lớn nhất hoặc '-1' nếu không có chuỗi con chung

# Tìm chuỗi con lớn nhất và ghi vào file MAX.OUT
result = find_largest_common_subsequence(A, B)

# Ghi kết quả ra file output
with open('MAX.OUT', 'w') as f:
    f.write(result + '\n')  # Ghi kết quả vào file MAX.OUT
