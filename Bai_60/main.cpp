#include<iostream>
#include<cmath>
#include<fstream>
using namespace std;

int Kamenetsky(int n)
{
    if(n <= 1)
        return 0;
    return floor(n * log10(n / exp(1)) + log10(2 * M_PI * n) / 2) + 1;
}

int solve(int n)
{
    int l = 0, r = 2 * n;
    while (l <= r)
    {
        int m = (l + r) >> 1;
        if(Kamenetsky(m) >= n && Kamenetsky(m - 1) < n)
            return m;
        else if(Kamenetsky(m) < n)
            l = m + 1;
        else
            r = m - 1;
    }
    return l;
}

int main()
{
    ifstream ifile("Bai_4.INP");
    ofstream ofile("Bai_4.OUT");
    int n; ifile >> n;
    if(n < 0)
        ofile << -1;
    else
        ofile << solve(n) << endl;
    return 0;
}