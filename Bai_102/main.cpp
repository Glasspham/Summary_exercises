#include <bits/stdc++.h>
#define ll long long
using namespace std;
ll tich_cs(ll n){
   ll tich = 1;
    while(n != 0){
        ll chu_so = n % 10;
        if(chu_so != 0) tich *= chu_so;
        n /= 10;
    }
    return tich;
}


int main(){
    ll a,b; cin >> a >> b;
    ll dem = 0;
    ll tich, san_pham;
    for(int i = 1; 1LL * i * i < b; ++i){
        san_pham = i * tich_cs(i);
        if(san_pham >= a && san_pham < b)
            dem++; 
    }
    cout << dem;
    return 0;
}