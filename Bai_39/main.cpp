#include<iostream>
#include<vector>
using namespace std;

void beautiful_permutation(int N)
{
    if(N < 1)
    {
        cout << 1 << endl;
        return;
    }
    if(N < 4)
    {
        cout << "NO SOLUTION" << endl;
        return;
    }
    vector<int>permutation;
    for(int i = N; i >= 1; i--)
        if(i % 2 == 0)
            permutation.push_back(i);
    for(int i = N; i >= 1; i--)
        if(i % 2 != 0)
            permutation.push_back(i);
    for(int i : permutation)
        cout << i << ' ';
}

int main()
{
    int N; cin >> N;
    beautiful_permutation(N);
}