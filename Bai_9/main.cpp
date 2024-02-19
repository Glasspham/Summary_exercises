#include <iostream>
using namespace std;
// Cách 1: Sử dụng vòng lặp for
int tongqua(int n, int a) {
    int sum_val = 0;
    for (int i = 1; i <= n; ++i) {
        sum_val += (a * (n - i) + 1);
    }
    return sum_val;
}

int main() {
    int n, a;
    cin >> n >> a;
    cout << tongqua(n, a) << endl;

    // Cách 2: Sử dụng công thức tổng của cấp số cộng
    int sum = n * (2 + (n - 1) * a) / 2;
    cout << sum << endl;

    return 0;
}
