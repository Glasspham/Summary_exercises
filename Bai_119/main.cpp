#include<bits/stdc++.h>
using namespace std;
#define maxn 30001
using ll = long long;
vector<int> a[maxn];
int f[maxn];
int main(){
    ios::sync_with_stdio(false);
    cin.tie(nullptr);
    int n; cin >> n;
    for(int i = 1; i <= n; ++i){
        int p, k; cin >> p >> k;
        a[k].push_back(p);
    }
    for(int i = 1; i < maxn; ++i){
        f[i] = f[i - 1];
        for(int j = 0; j < a[i].size(); ++j)
            f[i] = max(f[i], f[a[i][j]] + i - a[i][j]);
    }
    cout << f[maxn - 1];
    return 0;
}