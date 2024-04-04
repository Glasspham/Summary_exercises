#include<iostream>
using namespace std;

bool check(string &s, char &a, char &b){
    int luonga = 0, luongb = 0;
    for(char i : s){
        if(i == a)
            ++luonga;
        if(i == b)
            ++luongb;
    }
    if(luonga == 1 || luongb == 1)
        return true;
    return false;
}

int main(){
    char a, b; cin >> a >> b;
    string s = " ";
    cin >> s;
    if(check(s,a,b))
        cout << "YES\n";
    else cout << "NO\n";
    return 0;
}