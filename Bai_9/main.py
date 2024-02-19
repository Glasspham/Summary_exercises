#Cách 1 Dùng vòng lặp For()
def tongqua(n, a):
    sum_val = 0
    for i in range(1, n + 1):
        sum_val += (a * (n - i) + 1)
    return sum_val

n, a = map(int, input().split())
print(tongqua(n, a))

#Cách 2 Dùng tổng của cấp số cộng
print(n*(2+(n-1)*(a))//2)