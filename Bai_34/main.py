import math

def is_prime(n):
    if n < 2:
        return False
    for i in range(2, int(math.sqrt(n)) + 1):
        if n % i == 0:
            return False
    return True

with open('E:\\Project Visual Studio Code\\Summary_exercises\\Bai_34\\NTMAX.INP', 'r') as infile:
    T = infile.readline().strip()
    digit_count = 0
    max_prime = 0
    current_number = ""

    for c in T:
        if c.isdigit():
            digit_count += 1
            current_number += c
        else:
            if current_number:
                number = int(current_number)
                if is_prime(number) and number > max_prime:
                    max_prime = number
                current_number = ""

    if current_number:
        number = int(current_number)
        if is_prime(number) and number > max_prime:
            max_prime = number

with open('E:\\Project Visual Studio Code\\Summary_exercises\\Bai_34\\NTMAX.OUT', 'w') as outfile:
    outfile.write(str(digit_count) + '\n')
    outfile.write(str(max_prime) + '\n')