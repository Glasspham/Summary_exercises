#include<bits/stdc++.h>
using namespace std;

int main()
{
    int n,k;
    cin >> n >> k;
    int arr[n];
    multiset<int> s;
    for(int &x : arr)
        cin >> x;
    for(int i = 0; i < k; i++)
        s.insert(arr[i]);
    for(int i = k; i < n; i++)
    {
        cout << *s.rbegin() << ' ';
        s.erase(s.find(arr[i - k]));
        s.insert(arr[i]);
    }
    cout << *s.rbegin() << ' ';
    return 0;
}