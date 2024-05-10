import re
def main(S):
    digits = ''.join(filter(str.isdigit, S))

    a = int(''.join(filter(str.isdigit, S)))
    print("a = ", a)

    b = digits
    while(int(b) % 5 != 0):
         b=b[:-1]     
    print("b = ", int(b))
    
    tmp = re.sub(r'[^0-9]', ' ', S)
    tmp = tmp.split()
    t = sum(int(i) for i in tmp)
    print("T = ",t)   
 
def main2(S):
    S +="s" # tạo điểm dừng
    so = "0123456789"
    t = 0
    a = ""
    tmp = ""
    for i in S:
        if i in so:
            tmp += i
        else:
            if len(tmp) > 0:
                t += int(tmp)
                a += tmp
                tmp = ""   
    b = int(a)                   
    print("a =",a)
    while b % 5 != 0:
        b //= 10  
    if b != 0:
        print("b =",b)
    else:
        print("Không")
    print("T =",t)
        
if __name__ == "__main__":
    S = input("Nhập chuỗi kí tự: ")
    main(S)
    main2(S)
