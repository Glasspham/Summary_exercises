import time
# Bài 1
def linear_search(arr, key):
    start_time = time.time() 
    found = False
    for i in range(len(arr)):
        if arr[i] == key:
            found = True
            break
    end_time = time.time() 
    elapsed_time = end_time - start_time
    return found, elapsed_time

A = list(map(int, input("Nhập dãy số nguyên A, cách nhau bởi dấu cách: ").split()))
K = int(input("Nhập phần tử K cần tìm: "))
found, time_taken = linear_search(A, K)
if found:
    print(f"Phần tử {K} được tìm thấy trong dãy số.")
else:
    print(f"Phần tử {K} không tồn tại trong dãy số.")
print(f"Thời gian thực hiện tìm kiếm: {time_taken} giây.")




# Bài 2
def insertion_sort(arr):
    start_time = time.time()
    for i in range(1, len(arr)):
        key = arr[i]
        j = i - 1
        while j >= 0 and arr[j] < key:
            arr[j + 1] = arr[j]
            j -= 1
        arr[j + 1] = key
    end_time = time.time()
    elapsed_time = end_time - start_time
    return elapsed_time

def selection_sort(arr):
    start_time = time.time()
    for i in range(len(arr)):
        max_idx = i
        for j in range(i + 1, len(arr)):
            if arr[j] > arr[max_idx]:
                max_idx = j
        arr[i], arr[max_idx] = arr[max_idx], arr[i]
    end_time = time.time()
    elapsed_time = end_time - start_time
    return elapsed_time

def bubble_sort(arr):
    start_time = time.time()
    n = len(arr)
    for i in range(n):
        for j in range(0, n - i - 1):
            if arr[j] < arr[j + 1]:
                arr[j], arr[j + 1] = arr[j + 1], arr[j]
    end_time = time.time()
    elapsed_time = end_time - start_time
    return elapsed_time

A = list(map(int, input("Nhập dãy số nguyên A, cách nhau bởi dấu cách: ").split()))

A_insertion = A.copy()
A_selection = A.copy()
A_bubble = A.copy()

time_insertion = insertion_sort(A_insertion)
time_selection = selection_sort(A_selection)
time_bubble = bubble_sort(A_bubble)

print(f"Thời gian thực hiện sắp xếp chèn: {time_insertion} giây.")
print(f"Thời gian thực hiện sắp xếp chọn: {time_selection} giây.")
print(f"Thời gian thực hiện sắp xếp nổi bọt: {time_bubble} giây.")




# Bài 3
def quick_sort(arr):
    if len(arr) <= 1:
        return arr
    else:
        pivot = arr[0]
        less = [x for x in arr[1:] if x <= pivot]
        greater = [x for x in arr[1:] if x > pivot]
        return quick_sort(less) + [pivot] + quick_sort(greater)

def binary_search(arr, key):
    start_time = time.time()
    found = False
    low = 0
    high = len(arr) - 1
    while low <= high:
        mid = (low + high) // 2
        if arr[mid] == key:
            found = True
            break
        elif arr[mid] < key:
            low = mid + 1
        else:
            high = mid - 1
    end_time = time.time()
    elapsed_time = end_time - start_time
    return found, elapsed_time

A = list(map(int, input("Nhập dãy số nguyên A, cách nhau bởi dấu cách: ").split()))
K = int(input("Nhập phần tử K cần tìm: "))

start_sorting = time.time()
A_sorted = quick_sort(A)
end_sorting = time.time()
time_sorting = end_sorting - start_sorting
found, time_search = binary_search(A_sorted, K)

if found:
    print(f"Phần tử {K} được tìm thấy trong dãy số sau khi sắp xếp.")
else:
    print(f"Phần tử {K} không tồn tại trong dãy số sau khi sắp xếp.")
print(f"Thời gian thực hiện sắp xếp: {time_sorting} giây.")
print(f"Thời gian thực hiện tìm kiếm nhị phân: {time_search} giây.")