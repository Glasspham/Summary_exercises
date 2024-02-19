def find_min_max(arr):
    min_val = max_val = arr[0]
    for num in arr[1:]:
        if num < min_val:
            min_val = num
        if num > max_val:
            max_val = num
    return min_val, max_val

if __name__ == "__main__":
    size = int(input("Nhập kích thước của mảng: "))
    arr = []
    print("Nhập các phần tử của mảng:")
    for _ in range(size):
        arr.append(int(input()))

    min_val, max_val = find_min_max(arr)

    print("Giá trị nhỏ nhất của mảng:", min_val)
    print("Giá trị lớn nhất của mảng:", max_val)
