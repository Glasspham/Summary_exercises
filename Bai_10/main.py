# Hàm nhập ma trận Anxn từ bàn phím
def input_matrix(STT):
    n = 3 + STT % 3
    matrix = []
    print(f"Nhập ma trận {n}x{n}:")
    for _ in range(n):
        row = list(map(int, input().split()))
        matrix.append(row)
    return matrix

# Hàm kiểm tra ma trận có phải tam giác trên không
def is_upper_triangular(matrix):
    n = len(matrix)
    for i in range(1, n):  # Bắt đầu từ hàng thứ 2 vì hàng đầu tiên không cần kiểm tra
        for j in range(i):  # Chỉ cần kiểm tra phần bên dưới đường chéo chính
            if matrix[i][j] != 0:
                return False
    return True

# Hàm sắp xếp ma trận và chèn số x
def sort_and_insert(matrix, x):
    flattened_matrix = [element for row in matrix for element in row]
    flattened_matrix.append(x)
    flattened_matrix.sort(reverse=True)
    
    # Chuyển lại thành ma trận và duy trì tính chất giảm dần từ trái qua phải, từ trên xuống dưới
    n = int(len(flattened_matrix) ** 0.5)  # Tính lại kích thước của ma trận
    sorted_matrix = [flattened_matrix[i * n:(i + 1) * n] for i in range(n)]
    return sorted_matrix

# Sử dụng các hàm trên
STT = int(input("Nhập số thứ tự: "))
inputted_matrix = input_matrix(STT)
print("Ma trận vừa nhập là:")
for row in inputted_matrix:
    print(row)

is_upper = is_upper_triangular(inputted_matrix)
if is_upper:
    print("Ma trận vừa nhập là ma trận tam giác trên.")
else:
    print("Ma trận vừa nhập không phải là ma trận tam giác trên.")

x = int(input("Nhập số x bất kỳ: "))
result_matrix = sort_and_insert(inputted_matrix, x)
print("Ma trận sau khi chèn số x và sắp xếp giảm dần:")
for row in result_matrix:
    print(row)