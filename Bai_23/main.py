with open('INPUT.INP','r') as file:
    n = int(file.readline().strip())
    divisors = []    
    for i in range(1, n + 1):
        if n % i == 0:
            divisors.append(i)  
    divisors.sort()

with open('OUTPUT.OUT','w') as file_out:
    for i in divisors:
        file_out.write(str(i) + '\n')