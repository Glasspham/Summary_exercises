#include <iostream>
using namespace std;

int main() {
    // Mở file input và output
    freopen("SCISSOR.INP", "r", stdin);
    freopen("SCISSOR.OUT", "w", stdout);

    // Đọc dữ liệu vào từ file input
    int n, m;
    cin >> n >> m;

    // Tính tổng độ dài đường cắt
    int total_length = 0;
    for (int i = 0; i < m; ++i) {
        total_length += n; // Đường cắt dọc
        if (i % 2 == 0) {
            total_length += (n - 1); // Đường cắt ngang
        }
    }

    // In kết quả ra file output
    cout << total_length << endl;

    return 0;
}
