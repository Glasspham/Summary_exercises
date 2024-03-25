with open("E:\Project Visual Studio Code\Summary_exercises\Bai_75\TONG.INP", "r") as infile:
    p = int(infile.readline().strip())
    M = list(map(int, infile.readline().split()))
    q = int(infile.readline().strip())
    N = list(map(int, infile.readline().split()))

M.reverse()
N.reverse()

carry = 0
sum_result = []
i, j = 0, 0
while i < p or j < q or carry:
    m_digit = M[i] if i < p else 0
    n_digit = N[j] if j < q else 0
    digit_sum = m_digit + n_digit + carry
    sum_result.append(digit_sum % 10)
    carry = digit_sum // 10
    i += 1
    j += 1

sum_result.reverse()

with open("E:\Project Visual Studio Code\Summary_exercises\Bai_75\TONG.OUT", "w") as outfile:
    outfile.write(str(len(sum_result)) + "\n")
    outfile.write(" ".join(map(str, sum_result)) + "\n")