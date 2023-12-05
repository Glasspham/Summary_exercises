def check_SHT(n):
    S = 0
    for i in range(1, n):
        if n % i == 0:
            S += i 

    if S == n:
        return True  
    return False  

def main():
    n = int(input("nhap so nguyen duong ma muon kiem tra: "))
    result = check_SHT(n)
    if result == True:
        print(n, "la mot so hoan thien!")
    else:
        print(n, "la mot so khong hoan thien!")

if __name__ == "__main__":
    main()
