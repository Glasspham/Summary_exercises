#include<iostream>
#include<algorithm>
#include<string>
using namespace std;

int main()
{
    char x,y; cin >> x >> y;
    string n; 
    cin.ignore(numeric_limits<streamsize>::max(), '\n'); 
    getline(cin, n);
    
    if(count(n.begin(),n.end(),x) + count(n.begin(),n.end(),y) == stoi(string(1, x)) || count(n.begin(),n.end(),x) + count(n.begin(),n.end(),y) == stoi(string(1, y)))
        cout << "YES \n";
    else cout << "NO \n";
    return 0;
}