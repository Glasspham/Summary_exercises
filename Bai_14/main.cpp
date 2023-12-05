#include <iostream>
#include <fstream>
#include <vector>
#include <algorithm>
using namespace std;

pair<int, int> solve_fence(int n, vector<int>& heights) {
    sort(heights.begin(), heights.end());  // Sắp xếp các độ cao để dễ tính toán

    // Tìm giá trị trung vị (median) của các độ cao
    int median = heights[n / 2];

    // Tính tổng chi phí cần phải trả để đưa các thanh sắt về độ cao trung vị
    int total_cost = 0;
    for (int height : heights) {
        total_cost += abs(height - median);
    }

    return make_pair(median, total_cost);
}

int main() {
    ifstream file_in("E:/Language/Baitaptonghop/Bai_14/HANGRAO.INP");
    int n;
    file_in >> n;
    vector<int> heights(n);

    for (int i = 0; i < n; ++i) {
        file_in >> heights[i];
    }
    file_in.close();

    pair<int, int> result = solve_fence(n, heights);

    ofstream file_out("E:/Language/Baitaptonghop/Bai_14/HANGRAO.OUT");
    file_out << result.first << "\n" << result.second;
    file_out.close();

    return 0;
}
