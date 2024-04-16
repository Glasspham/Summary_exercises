#include <iostream>
#include <fstream>
#include <stack>
#include <string>

using namespace std;

int main() {
    ifstream inputFile("BAI2.INP");
    ofstream outputFile("BAI2.OUT");
    
    string n;
    int k;
    
    // Đọc dữ liệu từ file
    if (inputFile.is_open()) {
        inputFile >> n >> k;
        inputFile.close();
    } else {
        cout << "Không thể mở file đầu vào." << endl;
        return 1;
    }
    
    // Xác định vị trí của k chữ số lớn nhất để xoá
    stack<char> st;
    int remaining = k;
    for (char digit : n) {
        while (!st.empty() && remaining > 0 && st.top() < digit) {
            st.pop();
            remaining--;
        }
        st.push(digit);
    }
    
    // Xoá k chữ số
    string result = "";
    while (!st.empty()) {
        if (remaining > 0) {
            st.pop();
            remaining--;
        } else {
            result = st.top() + result;
            st.pop();
        }
    }
    
    // Ghi kết quả vào file
    if (outputFile.is_open()) {
        outputFile << result;
        outputFile.close();
    } else {
        cout << "Không thể mở file đầu ra." << endl;
        return 1;
    }
    
    return 0;
}
