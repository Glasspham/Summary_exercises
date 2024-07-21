while False: # Phứt tạp
    import os
    with open("E:\\Project Visual Studio Code\\Summary_exercises\\Bai_51\\CUM.INP", "r") as ifile:
        s = ifile.readline().strip()

    with open("E:\\Project Visual Studio Code\\Summary_exercises\\Bai_51\\CUM.TXT", "w") as otempfile:
        for i in range(len(s) - 1):
            cnt_start = 0
            cnt_end = 0
            index_start = 0
            index_end = 0

            if s[i] == '(':
                cnt_start += 1
                index_start = i
                for j in range(i + 1, len(s)):
                    if s[j] == '(':
                        cnt_start += 1
                    if s[j] == ')':
                        cnt_end += 1
                        if cnt_start == cnt_end:
                            index_end = j
                            break
                otempfile.write(s[index_start:index_end + 1] + '\n')

    with open("E:\\Project Visual Studio Code\\Summary_exercises\\Bai_51\\CUM.TXT", "r") as itempfile:
        word_length = {}
        for line in itempfile:
            word = line.strip()
            word_length[word] = len(word)

        sorted_word_length = sorted(word_length.items(), key=lambda x: x[1])
    os.remove("E:\\Project Visual Studio Code\\Summary_exercises\\Bai_51\\CUM.TXT")

    with open("E:\\Project Visual Studio Code\\Summary_exercises\\Bai_51\\CUM.OUT", "w") as ofile:
        cnt = s.count('(')
        ofile.write(str(cnt) + '\n')
        for word, length in sorted_word_length:
            ofile.write(word + '\n')

while True: # Tối ưu và đơn giản
    with open("CUM.INP", "r") as ifile:
        s = ifile.readline().strip()
        idx = []
        polynomials = []
        cnt = 0

        for i in range(len(s)):
            if s[i] == '(':
                idx.append(i)
                cnt += 1
            if s[i] == ')':
                cnt -= 1
                st = idx.pop()
                tmp = s[st:i+1]
                polynomials.append(tmp)
        with open("CUM.OUT", "w") as ofile:
            if cnt == 0:
                ofile.write(str(len(polynomials)) + '\n')
                for poly in polynomials:
                    ofile.write(str(poly) + '\n')
            else:
                ofile.write(str(-1) + '\n')

