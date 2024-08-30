import sys
input_file = open("D:\\Code\\Project Visual Studio Code\\Summary_exercises\\Bai_121\\CAU4.INP", "r")
output_file = open("CAU4.OUT", "w")

n, k = map(int, input_file.readline().split())
a = list(map(int, input_file.readline().split()))
v = []
value = None

for i in range(len(a)):
    if i == k - 1:
        value = a[i]
        del a[i]
        break
    
a = [x for x in a if x != value]

v = a.copy()
res1 = 0
res2 = 0

a.sort()
a.insert(k - 1, value)
for i in range(len(a) - 1):
    res1 += abs(a[i + 1] - a[i])

v.sort(reverse=True)
v.insert(k - 1, value)
for i in range(len(v) - 1):
    res2 += abs(v[i] - v[i + 1])

output_file.write(str(min(res1, res2)) + "\n")

input_file.close()
output_file.close()