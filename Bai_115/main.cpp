#include<bits/stdc++.h>
using namespace std;

using ll = long long;

int main(){
    ios::sync_with_stdio(false);
    cin.tie(nullptr);
    int n, m; cin >> n >> m;
    int a[n + 1][m + 1], f[n + 1][m + 1] = {0};
    for(int i = 1; i <= n; ++i)
        for(int j = 1; j <= m; ++j)
            cin >> a[i][j];

    for(int i = 0; i < m; ++i)
        f[0][i] = f[n + 1][i] = -1e9;

    for(int j = 1; j <= m; ++j)
        for(int i = 1; i <= n; ++i)
            f[i][j] = max({f[i - 1][j - 1], f[i][j - 1], f[i + 1][j - 1]}) + a[i][j];
    
    int ans = -1e9;
    for(int i = 1; i <= n; ++i)
        ans = max(ans, f[i][m]);
    cout << ans;
    return 0;
}