#include <iostream>
#include <fstream>
#include <cmath>

int main() {
    int dem = 0;

    std::ifstream file("E:\\Language\\Baitaptonghop\\Bai_16\\DEBIEN.INP");
    int n;
    file >> n;

    for (int i = 0; i < n; ++i) {
        int l, r;
        file >> l >> r;
        int s1 = std::ceil(std::sqrt(l));
        int s2 = std::floor(std::sqrt(r));
        dem += (s2 - s1 + 1);
    }
    file.close();

    std::ofstream file_out("E:\\Language\\Baitaptonghop\\Bai_16\\DEBIEN.OUT");
    file_out << dem << "\n";
    file_out.close();

    return 0;
}
