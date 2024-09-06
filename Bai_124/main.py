MOD = 111539786

class Matrix:
    def __init__(self, x, y):
        self.x = x
        self.y = y
        self.a = [[0] * (y + 1) for _ in range(x + 1)]

    def __mul__(self, other):
        result = Matrix(self.x, other.y)
        for i in range(1, result.x + 1):
            for j in range(1, result.y + 1):
                result.a[i][j] = 0
                for k in range(1, self.y + 1):
                    result.a[i][j] = (result.a[i][j] + self.a[i][k] * other.a[k][j] % MOD) % MOD
        return result

def power(matrix, exp):
    if exp == 1:
        return matrix
    half = power(matrix, exp // 2)
    if exp % 2:
        return half * half * matrix
    else:
        return half * half

def main():
    a = Matrix(2, 1)
    a.a[1][1] = 2
    a.a[2][1] = 1

    x = Matrix(2, 2)
    x.a[1][1] = x.a[1][2] = x.a[2][1] = 1

    t = int(input())
    for _ in range(t):
        n = int(input())
        if n <= 2:
            print(n)
            continue
        ans = power(x, n - 2) * a
        print(ans.a[1][1])

if __name__ == "__main__":
    main()
