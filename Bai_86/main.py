def print_ways(n):
    i = 1
    ways_count = 0
    for ten in range(n // 10 + 1):
        for five in range((n - ten * 10) // 5 + 1):
            two = n - ten * 10 - five * 5
            if two % 2 == 0:
                one = two // 2
                print(f"{i} : {ten} tờ 10, {five} tờ 5, {one} tờ 2")
                i += 1
                ways_count += 1
    print("Có tổng cộng", ways_count, "phương án.")

while True:
    N = int(input("Nhập số tiền cần đổi (N <= 50): "))
    if N < 0 or N > 50:
        print("Nhập lại số tiền cần đổi (N <= 50).")
    else: 
        break

print_ways(N)
