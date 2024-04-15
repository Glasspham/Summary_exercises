def binomial_coefficient(n, k):
    if k > n - k:
        k = n - k
    res = 1
    for i in range(k):
        res *= (n - i)
        res //= (i + 1)
    return res % 2018

with open("BAI1.INP", "r") as f_in:
    n, k = map(int, f_in.readline().split())

result = binomial_coefficient(n, k)

with open("BAI1.OUT", "w") as f_out:
    f_out.write(str(result))