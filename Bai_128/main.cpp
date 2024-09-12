#include<bits/stdc++.h>
using namespace std;

using ll = long long;

int main(){
    ios::sync_with_stdio(false);
    cin.tie(nullptr);
    ll N; cin >> N;
    ll K = 2, result = 0;

    while (true) {
        ll sum = (K * (K - 1)) / 2;
        if (N - sum <= 0) break;
        if ((N - sum) % K == 0) 
            result = K;
        K++;
    }
    cout << result << endl;
    return 0;
}
