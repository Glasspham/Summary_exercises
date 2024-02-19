def nhap_ma_tran(n, m):
    matrix = []
    for i in range(n):
        row = list(map(int, input().split()))
        matrix.append(row)
    return matrix

def xuat_ma_tran(matrix):
    for row in matrix:
        print(" ".join(map(str, row)))

def tim_gia_tri_lon_nhat(matrix):
    flat_matrix = [element for row in matrix for element in row]
    sorted_values = sorted(flat_matrix, reverse=True)
    return sorted_values[:3]

def tim_gia_tri_nho_nhat(matrix):
    flat_matrix = [element for row in matrix for element in row]
    sorted_values = sorted(flat_matrix)
    return sorted_values[:3]

def in_so_xuat_hien_nhieu_nhat(matrix):
    flat_matrix = [element for row in matrix for element in row]
    most_common = max(set(flat_matrix), key=flat_matrix.count)
    frequency = flat_matrix.count(most_common)
    print(f"Số xuất hiện nhiều nhất: {most_common}, Tần suất: {frequency}")

def tong_so_chia_het_cho_2(matrix):
    flat_matrix = [element for row in matrix for element in row]
    return sum(x for x in flat_matrix if x % 2 == 0)

def tich_so_chia_het_cho_2(matrix):
    flat_matrix = [element for row in matrix for element in row]
    result = 1
    for x in flat_matrix:
        if x % 2 == 0:
            result *= x
    return result

def in_so_nguyen_to(matrix):
    flat_matrix = [element for row in matrix for element in row]
    primes = [x for x in flat_matrix if all(x % i != 0 for i in range(2, int(x**0.5) + 1)) and x > 1]
    print("Các số nguyên tố trong ma trận:", primes)

# Sử dụng các hàm theo yêu cầu
n, m = map(int, input("Nhập số hàng và số cột của ma trận (cách nhau bởi dấu cách): ").split())
matrix = nhap_ma_tran(n, m)

print("\nMa trận vừa nhập:")
xuat_ma_tran(matrix)

print("\n3 giá trị lớn nhất của ma trận:", tim_gia_tri_lon_nhat(matrix))
print("3 giá trị nhỏ nhất của ma trận:", tim_gia_tri_nho_nhat(matrix))

in_so_xuat_hien_nhieu_nhat(matrix)

print("Tổng các số chia hết cho 2:", tong_so_chia_het_cho_2(matrix))
print("Tích các số chia hết cho 2:", tich_so_chia_het_cho_2(matrix))

in_so_nguyen_to(matrix)






import numpy as np
import math
a=[]

#----------------Ham nhap------------------
def nhap(a):
  for i in range(n):
      row=[]
      for j in range(m):
          x = int(input(f'[{i},{j}]= '))
          row.append(x)
      a.append(row)

#-- ---Ham in so xuat hien nhieu nhat------
def nhieu_nhat(x) :
  k=[]
  for i in x:
    for j in i:
      k.append(j)
  b=[]
  c=[]
  for i in range(len(k)):
    b.append(k.count(k[i]))
  for i in range(len(b)):
    if b[i] == max(b):
      c.append(k[i])
  return(list(set(c)))

#---------Ham tim 3 gia tri lon nhat--------
def max1(a):
  max = a[0][0]
  for i in range(n):
    for j in range(m):
        if(a[i][j]>max):
            max = a[i][j]
  return max

def max2(a):
  max = max1(a)
  max2 = max
  for i in range(n):
    for j in range(m):
      if(a[i][j]!=max):
          max2 = a[i][j]
          break
  for i in range(n):
    for j in range(m):
      if(a[i][j]>max2 and a[i][j]!=max):
          max2 = a[i][j]
  return max2

def max3(a):
  m1 = max1(a)
  m2 = max2(a)
  max3 = m2
  for i in range(n):
    for j in range(m):
      if(a[i][j]!=m1 and a[i][j]!=m2):
          max3 = a[i][j]
          break
  for i in range(n):
    for j in range(m):
      if(a[i][j]>max3 and a[i][j]!=m1 and a[i][j]!=m2):
          max3 = a[i][j]
  return max3

#---------Ham tim 3 gia tri nho nhat--------
def min1(a):
  min = a[0][0]
  for i in range(n):
    for j in range(m):
        if(a[i][j]<min):
            min = a[i][j]
  return min

def min2(a):
  min = min1(a)
  min2 = min
  for i in range(n):
    for j in range(m):
      if(a[i][j]!=min):
          min2 = a[i][j]
          break
  for i in range(n):
    for j in range(m):
      if(a[i][j]<min2 and a[i][j]!=min):
          min2 = a[i][j]
  return min2

def min3(a):
  m1 = min1(a)
  m2 = min2(a)
  min3 = m2
  for i in range(n):
    for j in range(m):
      if(a[i][j]!=m1 and a[i][j]!=m2):
          min3 = a[i][j]
          break
  for i in range(n):
    for j in range(m):
      if(a[i][j]<min3 and a[i][j]!=m1 and a[i][j]!=m2):
          min3 = a[i][j]
  return min3

#---------Ham tong chia het cho 2------------
def chia_tong(a):
  s=0
  for i in range(n):
    for j in range(m):
        if(a[i][j]%2==0):
            s = s + a[i][j]
  return s

#---------Ham tich chia het cho 2-----------
def chia_tich(a):
  t=1
  for i in range(n):
    for j in range(m):
        if(a[i][j]%2==0):
            t = t * a[i][j]
  return t

#---------Ham in cac so nguyen to-----------
def snt(n):
  if(n<2):
    return False
  for i in range(2, n):
      if n % i == 0:
          return False
  return True

def xuat_snt(a):
  b = []
  for i in range(n):
    for j in range(m):
      if snt(a[i][j]):
        b.append(a[i][j])
  return b

#-----------------tan suat-----------------------
def tan_suat(x,x1):
  k=[]
  for i in x:
    for j in i:
      k.append(j)
  return k.count(x1[0])

#----------------Ham xuat------------------
def xuat(a):
  print('Mảng vừa nhập là: \n',np.array(a))
  print('3 giá trị lớn nhất lần lượt là: ',max1(a),max2(a),max3(a))
  print('3 giá trị nhỏ nhất lần lượt là: ',min1(a),min2(a),min3(a))
  print('Số xuất hiện nhiều nhất là: ', nhieu_nhat(a))
  print('tần xuất: ',tan_suat(a,nhieu_nhat(a)))
  print('Tổng các số chia hết cho 2 là: ',chia_tong(a))
  print('Tích các số chia hết cho 2 là: ',chia_tich(a))
  print('Các số nguyên tố là: ')
  print(xuat_snt(a))

#------------------------------------------

n=int(input('Nhập số hàng n= '))
m=int(input('Nhập số cột m= '))
nhap(a)
xuat(a)