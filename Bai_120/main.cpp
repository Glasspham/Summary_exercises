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

int main(){
    ios::sync_with_stdio(false);
    cin.tie(nullptr);
    int n; cin >> n;
    vector<int> res, tmp;
    for(int i = 0; i < n; ++i){
        int num; cin >> num;
        if(isPrime(num))
            tmp.push_back(num);
        else{
            if(tmp.size() >= res.size())
                res = tmp;
            tmp.clear();
        }
    }
    cout << res.size() << endl;
    for(int it : res) cout << it << ' ';
    return 0;
}