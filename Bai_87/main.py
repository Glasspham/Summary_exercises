compressed = input()
result = []
i = 0
length = len(compressed)
while i < length:
    if compressed[i].isdigit():
        count = 0
        while i < length and compressed[i].isdigit():
            count = count * 10 + int(compressed[i])
            i += 1
        if i < length and compressed[i].isalpha():
            result.append(compressed[i] * count)
    else:
        result.append(compressed[i])
    i += 1
print(''.join(result))
