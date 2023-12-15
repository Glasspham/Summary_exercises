#if 0 // Bài 1
#include <iostream>
using namespace std;

// Hàm tính diện tích hình chữ nhật
int tinh_dien_tich_chu_nhat(int a, int b) {
    return a * b;
}

int main() {
    int a1, b1, a2, b2;

    // Nhập thông tin cho hai mảnh vườn
    cin >> a1 >> b1;
    cin >> a2 >> b2;

    // Tính diện tích của hai mảnh vườn
    int dien_tich_1 = tinh_dien_tich_chu_nhat(a1, b1);
    int dien_tich_2 = tinh_dien_tich_chu_nhat(a2, b2);

    // Tính tổng diện tích và in kết quả
    int tong_dien_tich = dien_tich_1 + dien_tich_2;
    cout << "Tổng diện tích: " << tong_dien_tich << endl;

    return 0;
}
#endif

#if 0 // Bài 2
#include <iostream>
#include <cmath>
using namespace std;

// Hàm tính diện tích tam giác theo công thức Heron
double tinh_dien_tich_tam_giac(double a, double b, double c) {
    double p = (a + b + c) / 2;
    double dien_tich = sqrt(p * (p - a) * (p - b) * (p - c));
    return dien_tich;
}

int main() {
    double a, b, c;

    // Nhập độ dài ba cạnh của tam giác
    cin >> a >> b >> c;

    // Tính diện tích tam giác và in kết quả
    double dien_tich_tam_giac = tinh_dien_tich_tam_giac(a, b, c);
    cout << "Diện tích tam giác: " << dien_tich_tam_giac << endl;

    return 0;
}
#endif

#if 0 // Bài 3
#include <iostream>
using namespace std;

// Hàm đếm số lần xuất hiện của xâu S2 trong phạm vi từ L đến R trong xâu S1
int dem_xuat_hien(string S1, string S2, int L, int R) {
    int count = 0;
    for (int i = L - 1; i <= R - S2.length(); ++i) {
        if (S1.substr(i, S2.length()) == S2) {
            count++;
        }
    }
    return count;
}

int main() {
    string S1, S2;
    int L, R;

    // Nhập thông tin
    cin >> S1 >> S2 >> L >> R;

    // Đếm và in kết quả
    int so_lan_xuat_hien = dem_xuat_hien(S1, S2, L, R);
    cout << "Số lần S2 xuất hiện: " << so_lan_xuat_hien << endl;

    return 0;
}
#endif

#if 0 // Bài 4
#include <iostream>
using namespace std;

int main() {
    string S, x, y;

    // Nhập thông tin
    cin >> S >> x >> y;

    // Thay thế xâu x bằng xâu y trong xâu S
    size_t pos = 0;
    while ((pos = S.find(x, pos)) != string::npos) {
        S.replace(pos, x.length(), y);
        pos += y.length();
    }

    // In ra xâu mới sau khi thay thế
    cout << S << endl;

    return 0;
}
#endif

#if 0 // Bài 5
#include <iostream>
#include <vector>
using namespace std;

int main() {
    int n;
    cin >> n;
    vector<int> numbers(n);

    // Nhập các số nguyên
    for (int i = 0; i < n; ++i) {
        cin >> numbers[i];
    }

    // Tính tổng các số chẵn
    int tong_chan = 0;
    for (int num : numbers) {
        if (num % 2 == 0) {
            tong_chan += num;
        }
    }

    // In ra tổng các số chẵn
    cout << "Tổng các số chẵn: " << tong_chan << endl;

    return 0;
}
#endif

#if 0 // Bài 6
#include <iostream>
#include <vector>
using namespace std;

int main() {
    int n;
    cin >> n;
    vector<int> numbers(n);

    // Nhập các số nguyên
    for (int i = 0; i < n; ++i) {
        cin >> numbers[i];
    }

    // Tính tổng các số
    int tong = 0;
    for (int num : numbers) {
        tong += num;
    }

    // In ra tổng các số
    cout << "Tổng các số: " << tong << endl;

    return 0;
}
#endif
