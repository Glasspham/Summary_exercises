# # Đọc dữ liệu từ file input
with open('E:\Language\Baitaptonghop\Bai_21\HANGXOM.INP','r') as file:
    L, R = map(int, file.read().split())

# Function to check if a number is prime
def is_prime(num):
    if num < 2:
        return False
    for i in range(2, int(num ** 0.5) + 1):
        if num % i == 0:
            return False
    return True

# Function to count prime pairs with a difference of 2 in a range
def count_prime_pairs(L, R):
    count = 0
    for i in range(L, R):
        if is_prime(i) and is_prime(i + 2):
            count += 1
    return count

# Counting prime pairs and printing the result
result = count_prime_pairs(L, R + 1)  # Adding 1 to R to include R in the range

# Ghi kết quả ra file output
with open('E:\Language\Baitaptonghop\Bai_21\HANGXOM.OUT', 'w') as file:
    file.write(str(result))

