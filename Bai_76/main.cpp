#include <fstream>
#include <vector>

std::vector<std::vector<int>> find_subarrays(std::vector<int> arr, int target) {
    std::vector<std::vector<int>> result;
    for (int i = 0; i < arr.size(); i++) {
        int sum = 0;
        for (int j = i; j < arr.size(); j++) {
            sum += arr[j];
            if (sum == target) {
                result.push_back(std::vector<int>(arr.begin() + i, arr.begin() + j + 1));
            } else if (sum > target) {
                break;
            }
        }
    }
    return result;
}

int main() {
    std::ifstream input("DAYCONLT.INP");
    std::ofstream output("DAYCONLT.OUT");
    int n, m;
    input >> n >> m;
    std::vector<int> arr(n);
    for (int i = 0; i < n; i++) {
        input >> arr[i];
    }
    std::vector<std::vector<int>> subarrays = find_subarrays(arr, m);
    if (!subarrays.empty()) {
        for (const auto& subarray : subarrays) {
            for (int num : subarray) {
                output << num << ' ';
            }
            output << '\n';
        }
    } else {
        output << '0';
    }
    return 0;
}