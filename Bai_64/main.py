def find_index(a):
    tong = sum(a)
    mang1 = a[0]
    k = 0
    for i in range(1, len(a)):
        if abs(tong - 2 * mang1) >= abs(tong - 2 * (mang1 + a[i])):
            k = i
        mang1 += a[i]
    return k

if __name__ == "__main__":
    n = int(input())
    a = [int(input()) for _ in range(n)]
    print(find_index(a))