#include <iostream>
#include <unordered_map>
#include <vector>
using namespace std;
int main() {
    vector<int> numbers;
    int num;

    // Nhập danh sách các số
    cout << "Nhap danh sach cac so (cach nhau bang dau cach): ";
    while (cin >> num) {
        numbers.push_back(num);
    }

    // Đếm số lần xuất hiện của mỗi số
    unordered_map<int, int> count;
    for (int num : numbers) {
        if (count.find(num) != count.end()) {
            count[num]++;
        } else {
            count[num] = 1;
        }
    }

    // In số lần xuất hiện của mỗi số
    for (const auto& pair : count) {
        cout << "Số " << pair.first << " lặp lại " << pair.second << " lần\n";
    }

    return 0;
}
