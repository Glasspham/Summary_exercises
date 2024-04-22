def count_ways(n):
    ways_count = 0
    for ten in range(n // 10 + 1):
        for five in range((n - ten * 10) // 5 + 1):
            two = n - ten * 10 - five * 5
            if two % 2 == 0:
                ways_count += 1
    return ways_count

N = int(input("Nhập số tiền cần đổi (N <= 50): "))
if N <= 50:
    print("Có tổng cộng", count_ways(N), "phương án.")
else:
    print("Số tiền cần đổi không được lớn hơn 50.")




def print_ways(n):
    i = 1
    for ten in range(n // 10 + 1):
        for five in range((n - ten * 10) // 5 + 1):
            two = n - ten * 10 - five * 5
            if two % 2 == 0:
                one = two // 2
                print(f"{i} : {ten} tờ 10, {five} tờ 5, {one} tờ 2")
                i += 1

N = int(input("Nhập số tiền cần đổi (N <= 50): "))
if N <= 50:
    print("Các phương án đổi tiền:")
    print_ways(N)
else:
    print("Số tiền cần đổi không được lớn hơn 50.")
