# Open the input and output files
with open('MINK.INP', 'r') as inp, open('MINK.OUT', 'w') as out:
    N = int(inp.readline().strip())  # Read the number of elements
    k = int(inp.readline().strip())  # Read the value of k
    arr = list(map(int, inp.readline().split()))  # Read the array elements

    arr.sort()  # Sort the array in ascending order

    out.write(str(arr[k - 1]))  # Write the k-th smallest element to the output file