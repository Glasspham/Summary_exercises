def tich_cs(n):
    tich = 1
    while n != 0:
        chu_so = n % 10
        if chu_so != 0: tich *= chu_so
        n //= 10
    return tich

if __name__ == "__main__":
    a, b = map(int, input().split())
    cnt = 0
    for i in range(1, int(b ** 0.5) + 1):
        san_pham = i * tich_cs(i)
        if a <= san_pham < b:
            cnt += 1
    print(cnt) 