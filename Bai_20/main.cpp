#include <iostream>
#include <fstream>
#include <vector>
#include <algorithm>

using namespace std;

string find_largest_common_subsequence(const string &A, const string &B)
{
    int m = A.length();
    int n = B.length();

    // Tạo ma trận để lưu độ dài của các chuỗi con chung
    vector<vector<int>> dp(m + 1, vector<int>(n + 1, 0));

    // Xây dựng ma trận dp để tìm độ dài chuỗi con chung
    for (int i = 1; i <= m; ++i)
    {
        for (int j = 1; j <= n; ++j)
        {
            if (A[i - 1] == B[j - 1])
            {
                dp[i][j] = dp[i - 1][j - 1] + 1;
            }
            else
            {
                dp[i][j] = max(dp[i - 1][j], dp[i][j - 1]);
            }
        }
    }

    // Duyệt ngược từ dp[m][n] để xây dựng chuỗi con chung lớn nhất
    int i = m, j = n;
    string result = "";
    while (i > 0 && j > 0)
    {
        if (A[i - 1] == B[j - 1])
        {
            result = A[i - 1] + result;
            --i;
            --j;
        }
        else if (dp[i - 1][j] > dp[i][j - 1])
        {
            --i;
        }
        else
        {
            --j;
        }
    }

    return result.empty() ? "-1" : result;
}

int main()
{
    ifstream infile("MAX.INP");
    ofstream outfile("MAX.OUT");

    string A, B;
    infile >> A >> B;

    string result = find_largest_common_subsequence(A, B);

    outfile << result << "\n";

    infile.close();
    outfile.close();

    return 0;
}
