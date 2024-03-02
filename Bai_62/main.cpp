#include <iostream>
#include <fstream>
#include <string>
#include <unordered_map>

using namespace std;

int longestRepeatedSubstring(const string& str) {
    int n = str.length();
    int maxlen = 0;
    unordered_map<string, int> substrFreq;

    // Tìm tất cả các xâu con và đếm số lần xuất hiện của mỗi xâu con
    for (int i = 0; i < n; ++i) {
        string substr;
        for (int len = 1; len <= n - i; ++len) {
            substr = str.substr(i, len);
            substrFreq[substr]++;
            if (substrFreq[substr] > 1 && len > maxlen) {
                maxlen = len;
            }
        }
    }

    return maxlen;
}

int main() {
    ifstream inFile("XAU.INP");
    ofstream outFile("XAU.OUT");
    int L;
    string str;

    // Đọc dữ liệu từ file đầu vào
    inFile >> L;
    inFile >> str;

    // Tìm độ dài của xâu con dài nhất xuất hiện ít nhất 2 lần
    int result = longestRepeatedSubstring(str);

    // Ghi kết quả vào file đầu ra
    outFile << result << endl;

    // Đóng file
    inFile.close();
    outFile.close();

    return 0;
}
