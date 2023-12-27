#Cách 1
# Định nghĩa hàm để đếm số lần xuất hiện của chữ số k trong dãy A
def count_digit_occurrences(A, k):
    count = 0
    for number in A:
        count += str(number).count(str(k))
    return count
# Đọc số lượng bộ dữ liệu
T = int(input())
# Xử lý từng bộ dữ liệu
for _ in range(T):
    n, k = map(int, input().split())
    A = list(map(int, input().split()))
    # Gọi hàm để đếm số lần xuất hiện của chữ số k trong dãy A và in ra kết quả
    result = count_digit_occurrences(A, k)
    print(result)

#Cách 2
n,k = map(int, input().split())
A = input()
print(A.count(str(k)))