#include <iostream>
#include <fstream>
#include <vector>
#include <algorithm>
using namespace std;

int max_divisible_elements(int n, int k, vector<int>& arr) {
    vector<int> count_mod_k(k, 0);

    for (int num : arr) {
        count_mod_k[num % k]++;
    }

    int result = min(count_mod_k[0], 1);

    if (k % 2 == 0) {
        result += min(count_mod_k[k / 2], 1);
    }

    for (int i = 1; i <= k / 2; ++i) {
        if (i != k - i) {
            result += max(count_mod_k[i], count_mod_k[k - i]);
        }
    }

    return result;
}

int main() 
{
    ifstream file_in("E:\\Project Visual Studio Code\\Summary_exercises\\Bai_42\\MODK.INP");
    ofstream file_out("E:\\Project Visual Studio Code\\Summary_exercises\\Bai_42\\MODK.OUT");
    int n, k, num;
    file_in >> n >> k;

    vector<int> arr(n);
    while (file_in >> num)
        arr.push_back(num);
    
    int result = max_divisible_elements(n, k, arr);

    file_out << result;

    return 0;
}
