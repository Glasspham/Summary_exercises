#include<bits/stdc++.h>
using namespace std;

using ll = long long;

int main(){
    ios::sync_with_stdio(false);
    cin.tie(nullptr);
    freopen("MINP.INP","r",stdin);
    freopen("MINP.OUT","w",stdout);
    int n; cin >> n;
    #if 0
    int a[n]; for(int &x : a) cin >> x;
    sort(a, a + n);
    if(a[0] < 0) cout << a[0] * a[n - 1];
    else cout << a[0] * a[1];
    #endif

    #if 1
    int min_1 = INT_MAX, min_2 = INT_MAX, max_1 = INT_MIN;
    for(int i = 0; i < n; ++i){
        int num; cin >> num;
        if(num < min_1){
            min_2 = min_1;
            min_1 = num;
        } else if(num < min_2)
            min_2 = num;
        if(num > max_1) max_1 = num;
    }
    if(min_1 < 0) cout << min_1 * max_1;
    else cout << min_1 * min_2;
    #endif
    return 0;
}