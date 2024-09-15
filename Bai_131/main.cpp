#include<bits/stdc++.h>
using namespace std;

using ll = long long;
string ktn(ll n, int k, int t) {
    ll m = n;
    string kq = "";
    while (t != k) {
        int h = n % 10;
        n /= 10;
        if (h != 5) 
            t += 1;
        kq = "5" + kq;
    }
    if (stoll(to_string(n) + kq) < m) 
        n += 1;
    return to_string(n) + kq;
}

string ktl(ll n, int k, int t) {
    string num = to_string(n);
    t = 0;
    for (int i = 0; i < num.length(); i++) {
        if (num[i] == '5') 
            t += 1;
        if (t == k + 1) 
            return num.substr(0, i) + "6" + string(num.length() - i - 1, '0');
    }
    return num;
}

int main() {
    ios::sync_with_stdio(false);
    cin.tie(nullptr);
    freopen("MIN.INP", "r", stdin);
    freopen("MIN.OUT", "w", stdout);
    ll n; int k; cin >> n >> k;
    int t = 0;
    for (char c : to_string(n)) 
        if (c == '5') 
            t += 1;
    if (t < k) cout << ktn(n, k, t);
    else cout << ktl(n, k, t);
    return 0;
}
