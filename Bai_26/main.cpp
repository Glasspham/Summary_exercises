#include <iostream>
#include <vector>
using namespace std;

// Hàm để đếm số lần xuất hiện của chữ số k trong dãy A
int countDigitOccurrences(vector<int> A, int k) 
{
    int count = 0;
    for(int number : A) 
    {
        string numStr = to_string(number);
        for(char digit : numStr) 
        {
            if (digit - '0' == k) 
            {
                count++;
            }
        }
    }
    return count;
}

int main() 
{
    int T;
    cin >> T;

    for (int t = 0; t < T; ++t) 
    {
        int n, k;
        cin >> n >> k;

        vector<int> A(n);
        for (int i = 0; i < n; ++i) 
        {
           cin >> A[i];
        }

        // Gọi hàm để đếm số lần xuất hiện của chữ số k trong dãy A và in ra kết quả
        int result = countDigitOccurrences(A, k);
        cout << result << endl;
    }

    return 0;
}
