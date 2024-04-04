#include <iostream>
using namespace std;
int main(){
    int arr[101][101];
    int n; cin >> n;
    for (int i = 0; i < n; i++)
        for (int j = 0; j < n; j++)
            cin >> arr[i][j];
    long long sum_dgcheochinh = 0;
    for(int i = 0; i < n; i++)
        sum_dgcheochinh += arr[i][i];
    long long sum_dgcheophu = 0;
    for (int i = 0; i < n; i++)
        sum_dgcheophu += arr[i][n - i - 1];
    cout << "Tong duong cheo chinh: " << sum_dgcheochinh << endl;
    cout << "Tong duong cheo phu: " << sum_dgcheophu << endl;
    return 0;
}