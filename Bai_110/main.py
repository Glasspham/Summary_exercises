def job_scheduling(N, a, b):
    jobs = []
    for i in range(N):
        jobs.append((i + 1, a[i], b[i]))

    group1 = [job for job in jobs if job[1] <= job[2]]
    group2 = [job for job in jobs if job[1] > job[2]]

    group1.sort(key=lambda x: x[1])
    group2.sort(key=lambda x: x[2], reverse=True)

    schedule = group1 + group2

    time_A, time_B, T = 0, 0, 0
    for job in schedule:
        time_A += job[1]
        time_B = max(time_A, time_B) + job[2]
        T = time_B

    return T, [job[0] for job in schedule]

# Sample Input
N = int(input())
a = list(map(int, input().split()))
b = list(map(int, input().split()))

# Get the result
T, schedule = job_scheduling(N, a, b)

# Output the result
print(T)
print(' '.join(map(str, schedule)))
