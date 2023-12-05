#include <iostream>
#include <string>
using namespace std;

#if 1 // Không dùng function
int main() {
    int T;
    cin >> T;
    while (T--) {
        string n;
        cin >> n;
        for (char &c : n) {
            if (c == '0') {
                c = '5';
            }
        }
        cout << n << endl;
    }
   
    return 0;
}
#endif

#if 0 // Dùng function
int t;
string n;

void solve() 
{
    for(int i = 0; i < n.size(); ++i) 
    {
        if(n[i] == '0') 
            n[i] = '5';
    }
    cout << n << '\n';
}


int main() 
{
    cin >> t;
    while(t--) 
    {
        cin >> n;
        solve();
    }
    
    return 0;
}
#endif


