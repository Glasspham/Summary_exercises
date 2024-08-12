#include <iostream>
#include <vector>
#include <algorithm>
using namespace std;

int main()
{
    freopen("MINK.INP", "r", stdin);  // Redirects standard input to MINK.INP
    freopen("MINK.OUT", "w", stdout); // Redirects standard output to MINK.OUT

    int N, k;
    cin >> N >> k;

    vector<int> arr(N);
    for (int i = 0; i < N; ++i)
    {
        cin >> arr[i];
    }

    sort(arr.begin(), arr.end()); // Sort the array in ascending order

    cout << arr[k - 1]; // Output the k-th smallest element

    return 0;
}