n = int(input())
arr = [list(map(int, input().split())) for _ in range(n)]
sum_dgcheochinh = sum(arr[i][i] for i in range(n))
sum_dgcheophu = sum(arr[i][n - i - 1] for i in range(n))
print("Tong duong cheo chinh: ", sum_dgcheochinh)
print("Tong duong cheo phu: ", sum_dgcheophu)