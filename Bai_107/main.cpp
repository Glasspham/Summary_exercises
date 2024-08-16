#include<bits/stdc++.h>
using namespace std;

using ll = long long;

bool isFibonacci(int n){
    if(n == 0 and n == 1) return true;
    int a = 0, b = 1;
    while(b < n){
        int tmp = b;
        b += a;
        a = tmp;
    }
    return b == n;
}

int main(){
    ios::sync_with_stdio(false);
    cin.tie(nullptr);
    int n, sum = 0; cin >> n;
    for(int i = 0; i < n; ++i){
        int num; cin >> num;
        if(isFibonacci(num))
            sum += num;
    }
    return 0;
}