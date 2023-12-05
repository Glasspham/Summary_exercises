#include <iostream>
#include <fstream>
#include <vector>
#include <algorithm>

using namespace std;

int main() {
    ifstream file("E:/Language/Baitaptonghop/Bai_2/olympic.inp");
    int n, k;
    file >> n >> k;
    vector<vector<int>> tasks(n, vector<int>(2));

    for (int i = 0; i < n; ++i) {
        file >> tasks[i][0] >> tasks[i][1];
    }
    file.close();

    sort(tasks.begin(), tasks.end());

    int skill_level = k;
    int solved = 0;

    for (auto &task : tasks) {
        if (skill_level >= task[0]) {
            solved++;
            skill_level += task[1];
        }
    }

    ofstream outfile("E:/Language/Baitaptonghop/Bai_2/olympic.out");
    outfile << solved;
    outfile.close();

    return 0;
}
