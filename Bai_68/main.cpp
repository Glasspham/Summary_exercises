#include <iostream>
#include <vector>

std::vector<int> findLongestIncreasingSubsequence(const std::vector<int>& arr) {
    int n = arr.size();
    int start = 0;
    int maxLength = 1;
    int currentLength = 1;

    for (int i = 1; i < n; ++i)
    {
        if (arr[i] > arr[i - 1])
            currentLength++;
        else
        {
            if (currentLength > maxLength)
            {
                maxLength = currentLength;
                start = i - maxLength;
            }
            currentLength = 1;
        }
    }

    if (currentLength > maxLength) 
        start = n - currentLength;

    return std::vector<int>(arr.begin() + start, arr.begin() + start + maxLength);
}

int main() {
    std::vector<int> a = {5, 2, 8, 6, 3, 6, 9, 7};

    std::vector<int> result = findLongestIncreasingSubsequence(a);

    std::cout << "Longest Increasing Subsequence: ";
    for (int num : result)
        std::cout << num << " ";
    return 0;
}