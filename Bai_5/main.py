def fibonacci(n):
    if n <= 1:
        return n
    return fibonacci(n - 1) + fibonacci(n - 2)

# Hàm để tìm các số Fibonacci trong dãy số đã nhập
def find_fibonacci_in_sequence(sequence):
    fibonacci_numbers = []
    for num in sequence:
        # Kiểm tra nếu số trong dãy là số Fibonacci
        i = 0
        while fibonacci(i) <= num:
            if fibonacci(i) == num:
                fibonacci_numbers.append(num)
                break
            i += 1
    return fibonacci_numbers

# Nhập dãy số từ người dùng
user_input = input("Nhập vào dãy số cách nhau bằng dấu cách: ")
numbers = list(map(int, user_input.split()))

# Tìm và in ra các số Fibonacci trong dãy số đã nhập
fibonacci_in_sequence = find_fibonacci_in_sequence(numbers)
if fibonacci_in_sequence:
    print("Các số Fibonacci trong dãy số đã nhập là:")
    print(fibonacci_in_sequence)
else:
    print("Không có số Fibonacci nào trong dãy số đã nhập.")
