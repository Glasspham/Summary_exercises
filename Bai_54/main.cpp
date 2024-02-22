#include<bits/stdc++.h>
using namespace std;
int main()
{
    ifstream ifile("SORT.INP");
    ofstream ofile("SORT.OUT");
    int n, k, m;
    ifile >> n >> k >> m;
    m += 1;
    int i = 0;
    while (i < k)
    {
        int a = i;
        int b = ((n - a) / k) * k + a;
        int s = (b - a) / k + 1;
        if(m <= s) break;
        m -= s;
        i += 1;
    }
    ofile << i + k * (m - 1);
}