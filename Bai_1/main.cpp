#include <iostream>
#include <string>
using namespace std;
// Chưa tối ưu
#if 1 // Không dùng function
int main() {
    int T;
    cin >> T;
    while (T--) {
        string n;
        cin >> n;
        for (char &c : n) 
            if (c == '0') 
                c = '5';
        cout << n << endl;
    }
    return 0;
}
#endif

#if 0 // Dùng function
int t;
string n;

void solve() {
    for(int i = 0; i < n.size(); ++i) 
        if(n[i] == '0') 
            n[i] = '5';
    cout << n << '\n';
}


int main() {
    cin >> t;
    while(t--) {
        cin >> n;
        solve();
    }
    return 0;
}
#endif

// Đã Tối ưu
#include <iostream>
#include <string>
using namespace std;
int main(){
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
    int n; cin >> n;
    while(n--){
        string s; cin >> s;
        for(char &c : s)
            if(c == '0')
                c = '5';
        cout << s << endl;
    }
    return 0;
}
