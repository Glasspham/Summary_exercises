def ReadingFile(ten_tap_tin):
    with open(ten_tap_tin, 'r') as file:
        return [int(line.strip()) for line in file]

def Sort_up_ascending(dayso):
    return sorted(dayso)

def Sort_descending(dayso):
    return sorted(dayso, reverse=True)

def The_longest_row_of_poplars(dayconduong):
    max_len = 0
    current_len = 0
    start_index = 0
    max_start_index = 0

    for i, num in enumerate(dayconduong):
        if num > 0:
            current_len += 1
            if current_len > max_len:
                max_len = current_len
                max_start_index = start_index
        else:
            current_len = 0
            start_index = i + 1

    return dayconduong[max_start_index:max_start_index + max_len]

# Nhập dãy số từ tệp tin
list = ReadingFile('E:\Project Visual Studio Code\Summary_exercises\Bai_50\dayso.txt')

while True:
    lua_chon = int(input())
    if lua_chon == 1:
        print('dayso')
        for i in Sort_up_ascending(list):
            print(i, end = '\n')
    elif lua_chon == 2:
        print('dayso')
        for i in Sort_descending(list):
            print(i, end = '\n')
    elif lua_chon == 3:
        print('dayconduong')
        for i in The_longest_row_of_poplars(list):
            print(i, end = '\n')
    elif lua_chon <= 0 or lua_chon >= 4:
        break
