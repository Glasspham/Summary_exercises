#include <bits/stdc++.h>
using namespace std;

int main() {
    freopen("XAU.INP","r",stdin);
    freopen("XAU.OUT","w",stdout);
    string s;
    while(getline(cin, s)){        
        stringstream ss(s);
        string str, res = "";
        while(ss >> str)
            if(str.size() > res.size())
                res = str;
        cout << res << endl;
    }
    return 0;
}