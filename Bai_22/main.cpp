#include <iostream>
#include <fstream>
#include <vector>
#include <algorithm>

using namespace std;

int main() {
    ifstream file("E:\\Language\\Baitaptonghop\\Bai_22\\DONXE.INP");
    ofstream outFile("E:\\Language\\Baitaptonghop\\Bai_22\\DONXE.OUT");

    int n;
    file >> n;
    int good_count = 0;
    
    vector<pair<int, int>> good_cars;

    for (int i = 0; i < n; ++i) {
        int m, k;
        file >> m >> k;
        int total_passengers = m + k;
        if (total_passengers < 60) {
            good_cars.push_back(make_pair(total_passengers, i + 1));
        }
    }

    sort(good_cars.begin(), good_cars.end());

    if (!good_cars.empty()) {
        int min_passengers = good_cars[0].first;
        int min_count = count_if(good_cars.begin(), good_cars.end(), [&](pair<int, int> car) {
            return car.first == min_passengers;
        });
        outFile << min_count;
    } else {
        outFile << 0;
    }

    file.close();
    outFile.close();
    return 0;
}
