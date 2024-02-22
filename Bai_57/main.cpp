#include<bits/stdc++.h>
using namespace std;
int main()
{
    int num = 1;
    vector<int> list;
    for(int i = 1; i < 51; i++)
        list.push_back(i * i);
    
    for(int i : list)
        if(i % 2 != 0)
            cout << i << ' ';
}