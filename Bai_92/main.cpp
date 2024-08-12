#include <iostream>
#include <string>
#include <algorithm>
using namespace std;

int main() {
    ios::sync_with_stdio(false);
    cin.tie(nullptr);
    freopen("BIGNUM.INP","r",stdin);
    freopen("BIGNUM.OUT","w",stdout);
    string x, a = ""; int k;
    cin >> x >> k;

    for(char i : x) if(isdigit(i)) a += i;

    for(int i = k - 1; i > -1; --i){
        char kq = *max_element(a.begin(), a.end() - i);
        cout << kq;
        a = a.substr(a.find(kq) + 1);
    }

    return 0;
}