def longest_repeated_substring(s):
    n = len(s)
    maxlen = 0
    substr_freq = {}
    for i in range(n):
        for j in range(i + 1, n + 1):
            substr = s[i:j]
            substr_freq[substr] = substr_freq.get(substr, 0) + 1
            if substr_freq[substr] > 1 and len(substr) > maxlen:
                maxlen = len(substr)
    return maxlen


with open("E:\Project Visual Studio Code\Summary_exercises\Bai_62\XAU.INP", "r") as infile:
    L = int(infile.readline())
    s = infile.readline().strip()
result = longest_repeated_substring(s)

with open("E:\Project Visual Studio Code\Summary_exercises\Bai_62\XAU.OUT", "w") as outfile:
    outfile.write(str(result))


