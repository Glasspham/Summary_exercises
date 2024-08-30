#include<bits/stdc++.h>
using namespace std;

using ll = long long;

int main(){
    ios::sync_with_stdio(false);
    cin.tie(nullptr);
    int n; cin >> n;
    int a[n + 1], f[n + 1], ans = 0;
    for(int i = 1; i <= n; ++i) cin >> a[i];
    for(int i = 1; i <= n; ++i){
        f[i] = 1;
        for(int j = 1; j < i; ++j){
            if(a[j] < a[i]){
                if(f[j] + 1 > f[i])
                    f[i] = f[j] + 1;
            }
        }
    }
    for(int i = 1; i <= n; ++i)
        if(f[i] > ans)
            ans = f[i];
    cout << ans;
    return 0;
}