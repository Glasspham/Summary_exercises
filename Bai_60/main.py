from math import *
def Kamenetsky(n):
	if n <= 1:
		return 0
	return floor(n * log10(n/e) + log10(2 * pi * n) / 2) + 1
def solve(n):
	l = 0
	r = 2 * n
	while (l <= r):
		m = (l + r) >> 1
		if Kamenetsky(m) >= n and Kamenetsky(m - 1) < n:
			return m
		elif Kamenetsky(m) < n:
			l = m + 1
		else:
			r = m - 1
	return l

with open('E:\Project Visual Studio Code\Summary_exercises\Bai_60\Bai_4.INP','r') as file:
		n = int(file.readline().strip())
		result = solve(n)
with open('E:\Project Visual Studio Code\Summary_exercises\Bai_60\Bai_4.OUT','w') as ofile:
		ofile.write(str(result))