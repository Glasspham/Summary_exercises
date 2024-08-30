#include<bits/stdc++.h>
using namespace std;

using ll = long long;

int main(){
    ios::sync_with_stdio(false);
    cin.tie(nullptr);
    int n; cin >> n;
    int a[n], f[n + 1] = {0}; 
    for(int i = 1; i < n; ++i) cin >> a[i];
    f[2] = a[1], f[3] = a[1] + a[2];
    for(int i = 4; i <= n; ++i)
        f[i] = min(f[i - 2] + a[i - 1], f[i - 1] + a[i - 1]);
    cout << f[n];
    return 0;
}