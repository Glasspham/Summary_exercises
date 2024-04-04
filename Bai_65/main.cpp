#include<iostream>
#include<fstream>
#define ll long long
using namespace std;

bool check(ll &n){
    string s = to_string(n);
    if(s[0] == s[s.length() - 1])
        return true;
    return false;
}

int main(){
    ifstream ifile("CIRCLE.INP");
    ofstream ofile("CIRCLE.OUT");
    ll a,b; ifile >> a >> b;
    ll cnt = 0;
    for(ll i = a; i < b; i++)
        if(check(i))
            ++cnt;
    ofile << cnt << endl;
}