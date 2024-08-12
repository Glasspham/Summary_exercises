with open("BIGNUM.INP", "r") as ifile: 
    with open("BIGNUM.OUT", "a") as ofile:
        so = "1234567890"
        data = ifile.read().strip()
        
        a_str, k_str = data[:-1], data[-1]
        k = int(k_str)

        a = ""
        for i in a_str:
            if i in so: 
                a += i

        result = []
        a_len = len(a)
        for i in range(k):
            max_digit = max(a[:a_len - k + i + 1])
            result.append(max_digit)
            a = a[a.index(max_digit) + 1:]

        ofile.write("".join(result) + "\n")
