def good_positions(n, a):
    cnt = 0
    for j in range(n):
        if a[j] <= 0: continue
        sum = 0
        good = True
        for k in range(n):
            sum += a[(j + k) % n]
            if sum <= 0:
                good = False
                break
        if good:
            cnt += 1
    
    return cnt

n = int(input())
a = list(map(int, input().split()))
res = good_positions(n, a)
print(res)