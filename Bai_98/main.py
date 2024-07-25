import math
from itertools import combinations

def find_max_gcd(numbers):
    max_gcd = 0
    for a, b in combinations(numbers, 2):
        gcd = math.gcd(a, b)
        if gcd > max_gcd:
            max_gcd = gcd
    return max_gcd


with open('input.txt', 'r') as infile:
    lines = infile.readlines()
    Q = int(lines[0].strip())
    output = []
    index = 1
    for _ in range(Q):
        n = int(lines[index].strip())
        index += 1
        numbers = list(map(int, lines[index].strip().split()))
        index += 1
        max_gcd = find_max_gcd(numbers)
        output.append(max_gcd)
    with open('output.txt', 'w') as outfile:
        for res in output:
            outfile.write(str(res) + '\n')
