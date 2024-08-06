#include <iostream>
#include <vector>
#include <algorithm>

using namespace std;

int main() {
    int N;
    cin >> N;

    // Read the triangle into a 2D vector
    vector<vector<int>> triangle(N);
    for(int i = 0; i < N; ++i){
        triangle[i] = vector<int>(i + 1);
        for (int j = 0; j <= i; ++j)
            cin >> triangle[i][j];
    }

    // Dynamic programming to find the maximum path sum
    vector<vector<int>> dp(N);
    for(int i = 0; i < N; ++i) dp[i] = vector<int>(i + 1);

    // Initialize the last row of dp with the last row of the triangle
    for(int j = 0; j < N; ++j) dp[N-1][j] = triangle[N-1][j];
    

    // Fill the dp table
    for (int i = N - 2; i >= 0; --i) 
        for (int j = 0; j <= i; ++j)
            dp[i][j] = triangle[i][j] + max(dp[i+1][j], dp[i+1][j+1]);

    // The top element of dp table will be the result
    int Smax = dp[0][0];
    cout << "Smax=" << Smax << endl;

    return 0;
}
