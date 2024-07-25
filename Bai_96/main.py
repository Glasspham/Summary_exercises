def valid_number(number, S):
    for digit in S:
        if digit in number:
            return False
    return True

def find_number(P, S):
    str_P = str(P)
    length_P = len(str_P)
    for num in range(P, 0, -1):
        str_num = str(num)
        if valid_number(str_num, S):
            return num
    return -1

with open('SODB.INP', 'r') as file:
    P = int(file.readline().strip())
    S = file.readline().strip()
with open('SODB.OUT', 'w') as file:
    result = find_number(P, S)
    file.write(str(result) + '\n')