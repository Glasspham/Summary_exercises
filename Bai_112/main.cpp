#include <iostream>
#include <vector>

using namespace std;

int main() {
    int k; cin >> k;
    const int intmax = 1000000;
    vector<int> arr(intmax, 1);
    int curr = 2, res = 0;

    // Sàng Eratosthenes
    while(curr < intmax) {
        if(arr[curr] == 1){
            for(int temp = curr * 2; temp < intmax; temp += curr)
                arr[temp] = 0;
        }
        curr++;
    }

    vector<int> arr1(k);
    for(int i = 0; i < k; ++i) cin >> arr1[i];
    for (int i = 0; i < k; ++i)
        if (arr[arr1[i]] == 1) 
            res++;
    cout << res << endl;
    return 0;
}
