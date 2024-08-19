
with open("XAU.INP", "r") as infile, open("XAU.OUT", "w") as outfile:
    for line in infile:
        words = line.split()
        res = max(words, key = len) if words else ""
        outfile.write(res + "\n")
