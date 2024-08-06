def Try(i, sum, n):
    global cnt
    for j in range(1, 10):
        if i == 4 and sum + j == n:
            cnt += 1
        elif i < 4 and sum + j < n:
            Try(i + 1, sum + j, n)

def main():
    global cnt
    t = int(input())
    for _ in range(t):
        cnt = 0
        n = int(input())
        Try(1, 0, n)
        print(cnt)

if __name__ == "__main__":
    cnt = 0
    main()
