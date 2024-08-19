k = int(input())
intmax = 1000000
arr = [1] * intmax
curr = 2
res = 0

while curr < intmax:
    if arr[curr] == 1:
        temp = curr
        while temp < intmax:
            arr[temp] = 0
            temp += curr
    curr += 1

arr1 = list(map(int, input().split()))
for i in arr1:
    res += 1 if arr[i] == 1 else 0

print(res)