#include<bits/stdc++.h>
using namespace std;
int main()
{
    // Bài 1
    int a1[5];
    for(int &i : a1) i = rand() % 100 - rand() % 100;
    for(int i : a1) cout << i << ' ';

    // Bài 2
    cout << endl;
    string a2[5] = {"Alice", "Bob", "Charlie", "David", "Emma"};    
    for(string i : a2) cout << i << ' ';

    // Bài 3
    cout << endl;
    string a3[5] = {"Glas", "100", "29,7", "Emma", "28,43"};
    for(string i : a3) cout << i << ' ';
}