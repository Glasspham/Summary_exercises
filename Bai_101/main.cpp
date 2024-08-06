#include<bits/stdc++.h>
using namespace std;

using ll = long long;

bool isPrime(int num){
    if(num <= 1) return false;
    if(num <= 3) return true;
    if(num % 2 == 0 || num % 3 == 0) return false;
    for(int i = 5; i * i <= num; i += 6)
        if(num % i == 0 || num % (i + 2) == 0)
            return false;
    return true;
}

void check(int n){
    // e : số lượng ước
    // p : tổng số mũ của các ước
    map<int,int> mp;
    int e = 0, p = 0;
    for(int i = 2; i <= sqrt(n); ++i){
        if(n % i == 0){
            ++e;
            while(n % i == 0){
                mp[i]++;
                n /= i;
                p++;
            }
        }
    }
    
    if(n != 1){
        e++;
        p++;
        mp[n]++;
    }

    if(e >= 3){
        cout << "YES\n";
        ll res = 1;
        int i = 0;
        for(auto it : mp){
            ++i;
            if(i <= 2){
                cout << it.first << ' ';
                it.second -= 1;
            }
            res *= pow(it.first, it.second);
        }
        cout << res << endl;
        return;
    }
    if(e == 2 and p >= 4){
        cout << "YES\n";
        ll res = 1;
        for(auto it : mp){
            cout << it.first << ' ';
            res *= 1ll * pow(it.first, it.second - 1);
        }
        cout << res << endl;
        return;
    }
    if(e == 1 and p >= 6){
        cout << "YES\n";
        auto it = mp.begin();
        cout << it->first << ' ' << 1ll * pow(it->first,2) << ' ' << 1ll * pow(it->first, it->second - 3) << endl;
        return;
    }
    cout << "NO";
}

int main(){
    ios::sync_with_stdio(false);
    cin.tie(nullptr);
    int t; cin >> t;
    while(t--){
        int n; cin >> n;
        if(isPrime(n)) cout << "NO\n"; 
        else check(n);
    }
    return 0;
}