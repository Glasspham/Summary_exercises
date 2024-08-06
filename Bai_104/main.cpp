#include<bits/stdc++.h>
using namespace std;

using ll = long long;
int n, cnt = 0;
void Try(int i, int sum){
    for(int j = 1; j <= 9; ++j){
        if(i == 4 and sum + j == n) ++cnt;
        else if(i < 4 and sum + j < n) 
            Try(i + 1, sum + j);
    }
}

int main(){
    ios::sync_with_stdio(false);
    cin.tie(nullptr);
    int t; cin >> t;
    while(t--){
        cnt = 0;
        cin >> n;
        Try(1,0);
        cout << cnt << endl;
    }
    return 0;
}