# a
def fibonacci(n):
    if n <= 1: return n
    return fibonacci(n - 1) + fibonacci(n - 2)   

n = int(input())
for i in range(n):
    print(fibonacci(i), end = ' ')
print(end = '\n')

# b
def fibonacci_sum(n):
    fib_numbers = [1, 1]
    while fib_numbers[-1] <= n:
        fib_numbers.append(fib_numbers[-1] + fib_numbers[-2])
    result = []
    i = len(fib_numbers) - 1
    while n > 0:
        while fib_numbers[i] > n:
            i -= 1
        result.append(fib_numbers[i])
        n -= fib_numbers[i]
    return result

n = int(input(""))
result = fibonacci_sum(n)
print(f"Tổng của các số Fibonacci cho {n} là: {result}")
