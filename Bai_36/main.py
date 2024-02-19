import random

def nhap_mang(arr, N):
    random.seed()
    for i in range(N):
        arr[i] = random.randint(-100, 99)  # Generating random integers between -100 and 99

def xuat_mang(arr, N):
    for i in range(N):
        print(arr[i], end=' ')

def hoa_vi(a, b):
    temp = a
    a = b
    b = temp
    return a, b

def function_sort(arr, N):
    # Sắp xếp dãy theo chiều tăng dần
    for i in range(N - 1):
        for j in range(i + 1, N):
            if arr[i] > arr[j]:
                arr[i], arr[j] = hoa_vi(arr[i], arr[j])

    # Sắp xếp các số âm theo chiều giảm dần
    for i in range(N - 1):
        for j in range(i + 1, N):
            if arr[i] < arr[j] and arr[i] < 0 and arr[j] < 0:
                arr[i], arr[j] = hoa_vi(arr[i], arr[j])


N = int(input("Nhap so phan tu: "))
arr = [0] * N

nhap_mang(arr, N)

print("Day so ban dau:")
xuat_mang(arr, N)
print()

print("Day da duoc sap xep theo de:")
function_sort(arr, N)
xuat_mang(arr, N)
