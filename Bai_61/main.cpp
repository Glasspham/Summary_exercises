#include <iostream>
using namespace std;

const int MOD = 2018;

long long binomial_coefficient(long long n, long long k) {
    if(k > n - k) k = n - k;
    long long res = 1;
    for(long long i = 0; i < k; i++){
        res *= (n - i);
        res %= MOD; // Sử dụng phép toán modulo
        res /= (i + 1);
    }
    return res % MOD;
}

int main() {
    long long n, k;
    freopen("BAI1.INP", "r", stdin);
    cin >> n >> k;
    freopen("BAI1.OUT", "w", stdout);
    cout << binomial_coefficient(n, k);
    return 0;
}
