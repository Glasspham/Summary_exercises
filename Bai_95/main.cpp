#include<bits/stdc++.h>
using namespace std;

int Sum(int n) {
    int total = 0;
    for(int i = 2; i * i <= n; ++i){
        if(n % i == 0){
            total += i;
            while(n % i == 0)
                n /= i;
        }
    }
    return (n > 1) ? total + n: total;
}

int main() {
    int n; cin >> n;
    int res = Sum(n);
    cout << res << endl;

    int a, b;
    cin >> a >> b;
    vector<int> save;
    for(int i = a; i <= b; ++i) 
        if(Sum(i) == res) 
            save.push_back(i);

    for(int num : save) cout << num << " ";
    cout << endl << save.size() << endl;

    return 0;
}
