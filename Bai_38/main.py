def mergeSortedList(A, B):
    C = []
    lenA, lenB = len(A), len(B)
    i, j = 0, 0
    
    while i < lenA and j < lenB:
        if A[i] <= B[j]:
            C.append(A[i])
            i += 1
        else:
            C.append(B[j])
            j += 1
    
    while i < lenA:
        C.append(A[i])
        i += 1
    while j < lenB:
        C.append(B[j])
        j += 1
    
    return C

A= [1, 2, 2, 3, 7, 15] 
B= [1, 3, 6, 6,12]
C = mergeSortedList(A, B)
print(C)