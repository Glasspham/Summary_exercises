#include <bits/stdc++.h>
using namespace std;

int main() {
    freopen("CAU4.INP","r",stdin);
    freopen("CAU4.OUT","w",stdout);
    int n, k; cin >> n >> k;
    vector<int> a, v;
    int value;
    for(int i = 0; i < n; ++i){
        int num; cin >> num;
        if(i == k - 1) value = num;
        else a.push_back(num);
    }
    a.erase(remove(a.begin(), a.end(), value), a.end());
    v = a;
    
    int res1 = 0, res2 = 0;
    sort(a.begin(), a.end());
    a.insert(a.begin() + k - 1, value);
    for(int i = 0; i < a.size() - 1; ++i)
        res1 += abs(a[i + 1] - a[i]);

    sort(v.begin(), v.end(), greater<int>());
    v.insert(v.begin() + k - 1, value);
    for(int i = 0; i < v.size() - 1; ++i)
        res2 += abs(v[i] - v[i + 1]);

    cout << min({res1, res2});
    return 0;
}
