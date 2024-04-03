# Bài 1
def Sorted_decreasing(lst):
    for i in range(1, len(lst)):
        key = lst[i]
        j = i - 1
        while j >= 0 and key > lst[j]:
            lst[j + 1] = lst[j]
            j -= 1
        lst[j + 1] = key
    return lst
lst = [1, 3, 2, 4, 5, 6, 7, 8, 9, 10]
print(Sorted_decreasing(lst))


# Bài 2
def SumOddRow(lst,i):
    sum = 0
    for j in range(len(lst[i])):
        if lst[i][j] % 2 != 0:
            sum += lst[i][j]
    return sum

def AddValue(lst):
    for i in range(len(lst)):
        lst[i].append(SumOddRow(lst,i))
    return lst

def delElement(lst, cnt):
    for i in range(len(lst)):
        lst[i] = lst[i][:-cnt]
    return lst

lst = [[1, 2, 3], [4, 5, 6], [7, 8, 9]]
cnt = 1
print(SumOddRow(lst, 1))
print(AddValue(lst))
print(delElement(lst, cnt))
