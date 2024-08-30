#include<bits/stdc++.h>
using namespace std;

using ll = long long;

int main(){
    ios::sync_with_stdio(false);
    cin.tie(nullptr);
    int n; cin >> n;
    int t[n + 1], r[n], f[n + 1] = {0};
    for(int i = 1; i <= n; ++i) cin >> t[i];
    for(int i = 1; i < n; ++i) cin >> r[i];
    f[1] = t[1];
    for(int i = 2; i <= n; ++i)
        f[i] = min(f[i - 1] + t[i], f[i - 2] + r[i - 1]);
    cout << f[n];
    return 0;
}