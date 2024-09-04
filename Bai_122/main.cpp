#include<bits/stdc++.h>
using namespace std;

using ll = long long;
bool Check(int a[], int n){
    for(int i = 1; i <= n; ++i)
        if(a[i] != a[n - i + 1])
            return false;
    return true;
}

int main(){
    ios::sync_with_stdio(false);
    cin.tie(nullptr);
    int n; cin >> n;
    int a[n + 1]; 
    for(int i = 1; i <= n; ++i) cin >> a[i];
    if(Check(a, n)) cout << "YES\n";
    else cout << "NO\n";
    return 0;
}