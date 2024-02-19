#include<iostream>
#include<vector>
using namespace std;

bool KTSNT(int a)
{
    if(a <= 1)
        return false;
    for(int i = 2; i < a; i++)
        if(a % i == 0)
            return false;
    return true;
}

int main()
{
    int N;
    cout << "Nhap so phan tu SNT can coi: ";
    cin >> N;
    vector<int> list;
    int count(2);
    while (list.size() < N)
    {
        if(KTSNT(count))
            list.push_back(count);
        count += 1;
    }
    
    for(int i : list)
        cout << i << ' ';

    return 0;
}