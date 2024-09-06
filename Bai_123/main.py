MOD = 10**9 + 7

def solve(N, K):
    dp = [0] * (N + 1)
    dp[0] = 1

    total_sum = 1
    
    for i in range(1, N + 1):
        dp[i] = total_sum % MOD
        if i >= K:
            total_sum = (total_sum + dp[i] - dp[i - K]) % MOD
        else:
            total_sum = (total_sum + dp[i]) % MOD
    
    return dp[N]

T = int(input())
for _ in range(T):
    N, K = map(int, input().split())
    print(solve(N, K))
