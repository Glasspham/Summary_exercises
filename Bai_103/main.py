def isDistinct(num):
    Save = [0] * 256
    numstr = str(num)
    for c in numstr:
        if c == '0': return False
        if Save[ord(c)] > 0: return False
        Save[ord(c)] += 1
    return True

if __name__ == "__main__":
    with open('SOBATLAP.INP','r') as ifile: 
        with open("SOBATLAP.OUT", "w") as ofile:
            for line in ifile:
                N = int(line.strip())
                res = N
                while not isDistinct(res):
                    res += 1
                ofile.write(f"{res}\n")