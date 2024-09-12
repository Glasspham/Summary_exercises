#include <bits/stdc++.h>
using namespace std;
using ll = long long;

#if 1 // Cách 1
unordered_map<ll, vector<ll>> as;
vector<ll> collatz(ll n) {
    vector<ll> s;
    while (n != 1) {
        if (as.find(n) != as.end()) { 
            s.insert(s.end(), as[n].begin(), as[n].end());
            break;
        }
        s.push_back(n);
        if (n % 2 == 0) n /= 2;
        else n = 3 * n + 1;
    }
    s.push_back(1);
    
    for (size_t i = 0; i < s.size(); ++i) 
        if (as.find(s[i]) == as.end()) 
            as[s[i]] = vector<ll>(s.begin() + i, s.end());
    
    return s;
}

int main() {
    ios::sync_with_stdio(false);
    cin.tie(nullptr);
    ll n; cin >> n;
    vector<ll> result = collatz(n);
    for (ll num : result) 
        cout << num << " ";
    cout << endl;
    return 0;
}
#endif

#if 1 // Cách 2
int main(){
    ios::sync_with_stdio(false);
    cin.tie(nullptr);
    ll n; cin >> n;
    while(n != 1){
        cout << n << " ";
        if(n & 1) n = 3 * n + 1; // phép AND bitwise (n & 1) kiểm tra xem n có phải số lẻ không nếu
        // nếu n là số lẻ thì n = 3 * n + 1
        else n /= 2;
    }
    cout << n << endl;
    return 0;
}
#endif