#include <iostream>
using namespace std;

int find_index(int a[], int &n){
    int tong = 0;
    for(int i = 0; i < n; i++)
        tong += a[i];
    int mang1 = a[0];
    int k = 0;
    for(int i = 1; i < n; i++){
        if(abs(tong - 2 * mang1) >= abs(tong - 2 * (mang1 + a[i])))
            k = i;
        mang1 += a[i];
    }
    return k;
}

int main(){
    int a[100001];
    int n; cin >> n;
    for(int i = 0; i < n; i++)
        cin >> a[i];
    cout << find_index(a, n) << endl;
    return 0;
}