def find_subarrays(arr, target):
    result = []
    for i in range(len(arr)):
        sum = 0
        for j in range(i, len(arr)):
            sum += arr[j]
            if sum == target:
                result.append(arr[i:j+1])
            elif sum > target:
                break
    return result

def solve_problem():
    with open('E:\Project Visual Studio Code\Summary_exercises\Bai_76\DAYCONLT.INP', 'r') as file:
        n, m = map(int, file.readline().split())
        arr = list(map(int, file.readline().split()))
    subarrays = find_subarrays(arr, m)
    with open('E:\Project Visual Studio Code\Summary_exercises\Bai_76\DAYCONLT.OUT', 'w') as file:
        if subarrays:
            for subarray in subarrays:
                file.write(' '.join(map(str, subarray)) + '\n')
        else:
            file.write('0')

solve_problem()