#include <iostream>
#include <fstream>
#include <string>
#include <unordered_set>

using namespace std;
int main() {
    ifstream file_in("E:/Language/Baitaptonghop/Bai_13/DIFFSSTR.INP");
    int n;
    file_in >> n;
    string s;
    file_in >> s;
    file_in.close();

    int result = n;

    for (int length = 1; length <= n; ++length) {
        unordered_set<string> seen;
        bool found = true;

        for (int i = 0; i <= n - length; ++i) {
            string substring = s.substr(i, length);

            if (seen.find(substring) != seen.end()) {
                found = false;
                break;
            }

            seen.insert(substring);
        }

        if (found) {
            result = length;
            break;
        }
    }

    ofstream file_out("E:/Language/Baitaptonghop/Bai_13/DIFFSSTR.OUT");
    file_out << result;
    file_out.close();

    return 0;
}
