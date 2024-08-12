#include <bits/stdc++.h>
using namespace std;
long long tongdoan(int l, int r, const vector<long long> &a)
{
    long long s = 0;
    for (int i = l; i <= r; i++)
        s = s + a[i];
    return s;
}
long long n, k, maxx, cnt, d, s;
int main()
{
    ios_base::sync_with_stdio(0);
    cin.tie(0);
    cout.tie(0);
    freopen("THICONG.INP", "r", stdin);
    freopen("THICONG.INPOUT", "w", stdout);
    cin >> n >> k;

    vector<long long> a(n);
    for (int i = 0; i < n; i++)
        cin >> a[i];

    maxx = tongdoan(0, k - 1, a);
    cnt = k - 1;
    s = maxx;
    d = a[cnt];

    for (int i = n - 1; i >= n - k; i--)
    {
        s = s - d;
        s = s + a[i];
        if (s > maxx)
            maxx = s;
        if (cnt > 0)
            cnt--;
        d = a[cnt];
    }

    cout << maxx;
    return 0;
}