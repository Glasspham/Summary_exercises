#include<bits/stdc++.h>
#include<fstream>
using namespace std;
#define ll long long
string str;
ll n;

ll maxpalin(ll l, ll r)
{
    while (str[l]==str[r]&&l>=0&&r<n)
    {
        l--;
        r++;
    }
    return r - l - 1;
}

int main() 
{
    ifstream ifile("E:/Project Visual Studio Code/Summary_exercises/Bai_40/MAXPALIN.INP");
    ofstream ofile("E:/Project Visual Studio Code/Summary_exercises/Bai_40/MAXPALIN.OUT");

    
    ifile >> n;
    ifile >> str;

    ll ans = 1;
    for (ll i = 1; i < n; i++)
    {
        if (str[i-1]==str[i])
        {
            ans = max(ans, maxpalin(i - 1, i));
        }
    }
    for (ll i = 2; i < n; i++)
    {
        if (str[i-2]==str[i])
        {
            ans = max(ans, maxpalin(i - 2, i));
        }
    }
    ofile << ans;
}
