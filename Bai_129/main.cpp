#include<bits/stdc++.h>
using namespace std;

using ll = long long;

int main(){
    ios::sync_with_stdio(false);
    cin.tie(nullptr);
    freopen("SUM.INP", "r", stdin);
    freopen("SUM.OUT", "w", stdout);
    int n, k; cin >> n >> k;
    int a[n], s1 = 0;
    for(int i = 0; i < n; ++i){
        cin >> a[i];
        s1 += a[i];
    }
    sort(a, a + n);
    // Cách 1
    cout << accumulate(a + k, a + n, 0) << ' ' << accumulate(a + k, a + n, 0);
    // Cách 2
    int s2 = s1;
    for(int i = 0; i < k; ++i){
        s1 -= a[i];
        s2 -= a[n - 1 - i];
    }
    cout << s1 << ' ' << s2;
    return 0;
}