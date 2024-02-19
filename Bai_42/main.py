def max_divisible_elements(n, k, arr):
    count_mod_k = [0] * k  # Mảng để đếm số lượng phần tử chia hết cho K
    for num in arr:
        count_mod_k[num % k] += 1

    result = min(count_mod_k[0], 1)  # Số lượng phần tử chia hết cho K mặc định là count_mod_k[0]

    if k % 2 == 0:
        result += min(count_mod_k[k // 2], 1)  # Nếu K chẵn, thêm vào kết quả count_mod_k[K//2]

    for i in range(1, k // 2 + 1):
        if i != k - i:
            result += max(count_mod_k[i], count_mod_k[k - i])  # Thêm vào kết quả lớn nhất giữa hai giá trị count_mod_k[i] và count_mod_k[K-i]

    return result

# Đọc dữ liệu từ file input
with open("E:\Project Visual Studio Code\Summary_exercises\Bai_42\MODK.INP", "r") as file:
    n, k = map(int, file.readline().split())
    arr = list(map(int, file.readline().split()))

# Tính kết quả
result = max_divisible_elements(n, k, arr)

# Ghi kết quả vào file output
with open("E:\Project Visual Studio Code\Summary_exercises\Bai_42\MODK.OUT", "w") as file_out:
    file_out.write(str(result))
