while True:
    a = float(input("a="))
    b = float(input("b="))
    c = input("Toan tu:")
    if c == '+':
        print(a, c, b,"=",a+b)
    elif c == '-':
        print(a, c, b,"=",a-b)
    elif c == '*':
        print(a, c, b,"=",a*b)
    elif c == '/':
        print(a, c, b,"=",a/b)
    d = input("Tiep tuc:")
    if d == 't' or d == "T":
        break