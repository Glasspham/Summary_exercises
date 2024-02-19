from collections import deque
def max_in_subarray(arr, k):
    n = len(arr)
    dq = deque()
    for i in range(k):
        while dq and arr[i] >= arr[dq[-1]]:
            dq.pop()
        dq.append(i)
    for i in range(k, n):
        print(arr[dq[0]], end=' ')
        while dq and dq[0] <= i - k:
            dq.popleft()
        while dq and arr[i] >= arr[dq[-1]]:
            dq.pop()
        dq.append(i)
    print(arr[dq[0]])

n, k = map(int, input().split())
arr = list(map(int, input().split()))
max_in_subarray(arr, k)