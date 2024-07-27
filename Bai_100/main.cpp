#include<bits/stdc++.h>
using namespace std;

bool isPrime(int n){
    if(n <= 1) return false;
    if(n <= 3) return true;
    if(n % 2 == 0 || n % 3 == 0) return false;
    for(int i = 5; i * i <= n; i += 6)
        if (n % i == 0 || n % (i + 2) == 0) return false;
    return true;
}

bool ThreeDivisors(int n){
    int root = sqrt(n);
    return root * root == n && isPrime(root);
}

int main(){
    ios::sync_with_stdio(false);
    cin.tie(nullptr);
    int n, cnt = 0; cin >> n;
    for(int i = 2; i * i <= n; ++i)
        if(ThreeDivisors(i * i))
            cnt++;
    cout << cnt;
    return 0;
}
