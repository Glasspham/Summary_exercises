# Hàm kiểm tra số nguyên tố
def is_prime(n):
    if n <= 1:
        return False
    for i in range(2, int(n ** 0.5) + 1):
        if n % i == 0:
            return False
    return True

# Hàm tính tổng các số nguyên tố trong một dãy số
def sum_of_primes(arr):
    return sum(num for num in arr if is_prime(num))

# Đọc dữ liệu từ file input
with open('E:\Project Visual Studio Code\Summary_exercises\Bai_31\LISMAXSUMPRIME.INP', 'r') as f_in:
    t = int(f_in.readline().strip())
    for _ in range(t):
        n = int(f_in.readline().strip())
        sequence = list(map(int, f_in.readline().strip().split()))

        # Tìm dãy con tăng liên tiếp dài nhất và tính tổng các số nguyên tố trong dãy đó
        max_length = 1
        max_sum_prime = sum_of_primes([sequence[0]])
        current_length = 1
        current_sum_prime = sum_of_primes([sequence[0]])

        for i in range(1, n):
            if sequence[i] > sequence[i - 1]:
                current_length += 1
                current_sum_prime += sum_of_primes([sequence[i]])

                if current_length > max_length or (current_length == max_length and current_sum_prime > max_sum_prime):
                    max_length = current_length
                    max_sum_prime = current_sum_prime
            else:
                current_length = 1
                current_sum_prime = sum_of_primes([sequence[i]])

        # Ghi kết quả ra file output
        with open('E:\Project Visual Studio Code\Summary_exercises\Bai_31\LISMAXSUMPRIME.OUT', 'a') as f_out:
            f_out.write(f"{max_length} {max_sum_prime}\n")
