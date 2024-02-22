with open('E:\Project Visual Studio Code\Summary_exercises\Bai_54\SORT.INP', 'r') as input_file:
    n, k, m = map(int, input_file.readline().split())

m += 1
i = 0

while i < k:
    a = i
    b = ((n - a) // k) * k + a
    s = (b - a) // k + 1
    
    if m <= s:
        break
    
    m -= s
    i += 1

with open('E:\Project Visual Studio Code\Summary_exercises\Bai_54\SORT.OUT', 'w') as output_file:
    output_file.write(str(i + k * (m - 1)) + '\n')
