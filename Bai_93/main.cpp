#include <bits/stdc++.h>
using namespace std;

void findConsecutiveNumbers(int n) {
    bool found = false;
    for (int length = 2; length * (length + 1) / 2 <= n; ++length) {
        int start = (2 * n / length - length + 1) / 2;
        if (start <= 0) continue;
        int sum = length * (2 * start + length - 1) / 2;
        if (sum == n) {
            found = true;
            string str = "(";
            for (int i = 0; i < length; ++i) {
                cout << start + i << " ";
                str += to_string(start + i);
                if(i < length - 1)
                    str += "+";
            }
            str += "=" + to_string(n) + ")";
            cout << str << endl;
        }
    }
    if (!found)
        cout << -1 << endl;
}

int main() {
    int n;
    cin >> n;
    findConsecutiveNumbers(n);
    return 0;
}
