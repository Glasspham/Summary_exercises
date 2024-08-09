n, a, b, c = map(int, input().split())
if b > n: print(n // a)
else:
    so_lit = (n - c) // (b - c)
    tien_con_lai = n - so_lit * (b - c)
    so_lit += tien_con_lai // a
    print(max(n // a, so_lit))