#include<bits/stdc++.h>
using namespace std;

using ll = long long;
string F[101];
string add(string a, string b){
    int x = a.size() - b.size();
    x = abs(x);
    string c = "";
    for(int i = 0; i < x; ++i)
        c += "0";
    if(a.size() < b.size()) a = c + a;
    else b = c + b;
    int n = a.size();
    string t = "";
    int r = 0;
    for(int i = n - 1; i >= 0; --i){
        int s = a[i] + b[i] - '0' - '0' + r;
        if(s > 9) r = 1, s -= 10;
        else r = 0;
        t += (char) (s + '0');
    }
    if(r) t += "1";
    reverse(t.begin(), t.end());
    return t;
}

void sieve(){
    F[1] = "1";
    F[2] = "2";
    for(int i = 3; i <= 100; ++i)
        F[i] = add(F[i - 1], F[i - 2]);
}

int main(){
    ios::sync_with_stdio(false);
    cin.tie(nullptr);
    sieve();
    int t; cin >> t;
    while(t--){
        int num; cin >> num;
        cout << F[num] << endl;
    }
    return 0;
}