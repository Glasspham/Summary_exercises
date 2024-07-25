#include <iostream>
#include <vector>
using namespace std;

int good_positions(int n, vector<int>& a) {
    int cnt = 0;
    for (int j = 0; j < n; ++j) {
        if (a[j] <= 0) continue;
        int sum = 0;
        bool good = true;
        for (int k = 0; k < n; ++k){
            sum += a[(j + k) % n];
            if (sum <= 0) {
                good = false;
                break;
            }
        }
        
        if (good) ++cnt;
    }
    return cnt;
}

int main() {
    int n;
    cin >> n;
    vector<int> a(n);
    for (int i = 0; i < n; ++i) 
        cin >> a[i];
    int result = good_positions(n, a);
    cout << result << endl;
    return 0;
}
