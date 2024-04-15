def sum_of_divisors(n):
    total = 1
    i = 2
    while i * i <= n:
        if n % i == 0:
            total += i
            if i != n // i:
                total += n // i
        i += 1
    return total

def count_special_numbers(L, R):
    count = 0
    for num in range(L, R+1):
        if sum_of_divisors(num) > num:
            count += 1
    return count

with open('sodacbiet.inp','r') as f:
    L, R = map(int, f.readline().split())
with open('sodacbiet.out','w') as f:
    f.write(str(count_special_numbers(L, R)))