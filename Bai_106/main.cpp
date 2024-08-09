#include <iostream>
using namespace std;
using ll = long long;

int main() {
    ll n, a, b, c; cin >> n >> a >> b >> c;
    if(b > n) cout << n / a << endl;
    else{
        ll so_lit = (n - c) / (b - c); 
        ll tien_con_lai = n - so_lit * (b - c);
        so_lit += tien_con_lai / a;
        cout << max(n / a, so_lit) << endl;
    }
    return 0;
}
