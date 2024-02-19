#include<iostream>
using namespace std;

int main()
{
    int a, b;
    cin >> a >> b;
    double thickness_a_cm = a / 10000;  // Chuyển đổi từ µm sang cm
    int folds = 0;
    while (thickness_a_cm < b)
    {
        thickness_a_cm *= 2;
        folds++;
    }
    cout << folds;
}
