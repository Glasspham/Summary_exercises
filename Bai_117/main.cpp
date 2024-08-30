#include<bits/stdc++.h>
using namespace std;
#define mod 14062008
using ll = long long;

int main(){
    ios::sync_with_stdio(false);
    cin.tie(nullptr);
    int n, k; cin >> n >> k;
    int a[n + 1] = {0}, f[n + 1] = {0};
    for(int i = 1; i <= k; ++i){
        int x; cin >> x;
        a[x] = 1;
    }
    f[1] = 1;
    for(int i = 2; i <= n; ++i){
        if(a[i]) continue;
        f[i] = (f[i - 1] + f[i - 2]) % mod;
    }
    cout << f[n];
    return 0;
}