#include<bits/stdc++.h>
using namespace std;

using ll = long long;
int main() {
    ll n, divisors[] = {2, 3, 4, 5, 6, 7, 8, 9, 10};
    int k = 9; cin >> n;
    ll total = n, count = 0;
    for (int mask = 1; mask < (1 << k); mask++) {
        ll lcm = 1;
        int bits = 0;
        for (int i = 0; i < k; i++) {
            if (mask & (1 << i)) {
                lcm = std::lcm(lcm, divisors[i]);
                bits++;
            }
        }
        if (bits % 2 == 1) count += n / lcm;
        else count -= n / lcm;
    }
    cout << total - count << endl;
    return 0;
}
