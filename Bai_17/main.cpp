#include <iostream>
#include <fstream>
#include <vector>
#include <algorithm>

int main() {
    std::ifstream file("E:\\Language\\Baitaptonghop\\Bai_17\\DAUTHAU.INP");
    std::vector<int> a;

    int n, k;
    file >> n >> k;

    int num;
    for (int i = 0; i < n; ++i) {
        file >> num;
        a.push_back(num);
    }
    file.close();

    std::sort(a.begin(), a.end());

    int result = a[n - k] / 2 + 1;

    std::ofstream file_out("E:\\Language\\Baitaptonghop\\Bai_17\\DAUTHAU.OUT");
    file_out << result;
    file_out.close();

    return 0;
}
