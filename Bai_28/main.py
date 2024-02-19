def KTSNT(a):
    if a <= 1:
        return False
    for i in range(2,a):
        if a % i == 0:
            return False
    return True
    
N = int(input("Nhập số phần tử SNT cần biết: "))
list= []
count = 2
while len(list) < N:
    if KTSNT(count):
        list.append(count)
    count += 1
        
print(list)    