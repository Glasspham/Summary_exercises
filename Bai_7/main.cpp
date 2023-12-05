#include <iostream>
using namespace std;

int TongUocSo(int &n)
{
    int sum(0);
    for(int i = 1; i < n; i++)
    {
        if(n % i == 0)
            sum += i;
    }
    return sum;
}

int main()
{
    int n;
    cout << "Nhap so nguyen duong ma muon kiem tra: ";
    cin >> n;

    if(TongUocSo(n) == n)
        cout << n << " la mot so hoan thien!" << endl;
    else    
        cout << n << " khong phai la so hoan thien!" << endl;

    
    return 0;
}