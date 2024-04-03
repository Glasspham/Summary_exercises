#include<iostream>
#include<math.h>
using namespace std;
int main(){
    freopen("trangtri.inp","r", stdin);
    freopen("trangtri.out","w", stdout);
    int n, x;
    cin >> n >> x;
    cout << ceil((float)n/2)*x;
    return 0;
}