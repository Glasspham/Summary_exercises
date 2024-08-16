#include<bits/stdc++.h>
using namespace std;

using ll = long long;

int main(){
    ios::sync_with_stdio(false);
    cin.tie(nullptr);
    freopen("MINP.INP","r",stdin);
    freopen("MINP.OUT","w",stdout);
    int n; cin >> n;
    int a[n]; for(int &x : a) cin >> x;
    sort(a, a + n);
    if(a[0] < 0) cout << a[0] * a[n - 1];
    else cout << a[0] * a[1];
    return 0;
}