with open("MINP.INP","r") as ifile:
    n = int(ifile.readline().strip())
    arr = list(map(int, ifile.readline().split()))
    arr.sort()
    with open("MINP.OUT","w") as ofile:
        if arr[0] < 0: ofile.write(str(arr[0] * arr[n - 1]))

        else: ofile.write(str(arr[0] * arr[1]))