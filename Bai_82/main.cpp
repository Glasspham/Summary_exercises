#include<iostream>
#include<algorithm>
using namespace std;
long long n,a[100009],maxx[100009],maxn[100009],s=0;
int main(){
    cin >> n;
    for(int i = 0; i < n; ++i)
        cin >> a[i];
    for(int i = 0; i < n; ++i){
        cout << "maxx[i - 1] = " << maxx[i - 1] << endl;
        cout << "a[i] = " << a[i] << endl;
        maxx[i] = max(maxx[i - 1],a[i]);
        cout << "maxx[i] = " << maxx[i] << endl;
        cout << "---------------------------------\n";
    }
    for(int i = 0; i < n; ++i) cout << maxx[i] << " ";
    cout << endl;
    cout << "---------------------------------\n";

    for(int i = n-1; i >= 0; --i){
        cout << "maxn[i + 1] = " << maxn[i + 1] << endl;
        cout << "a[i] = " << a[i] << endl;
        maxn[i] = max(maxn[i + 1],a[i]);
        cout << "maxn[i] = " << maxn[i] << endl;
        cout << "---------------------------------\n";
    }
    for(int i = 0; i < n; ++i) cout << maxn[i] << " ";
    cout << endl;
    cout << "---------------------------------\n";
    
    for(int i = 0; i < n; ++i){
        cout << "s = " << s << endl;
        cout << "maxx[i - 1] = " << maxx[i - 1] << endl;
        cout << "a[i] = " << a[i] << endl;
        cout << "maxn[i + 1] = " << maxn[i + 1] << endl;
        cout << "2 * maxx[i - 1] - 3 * a[i] + 5 * maxn[i + 1] = " << 2 * maxx[i - 1] - 3 * a[i] + 5 * maxn[i + 1] << endl;
        s = max(s, 2 * maxx[i - 1] - 3 * a[i] + 5 * maxn[i + 1]);
        cout << "s = " << s << endl;
        cout << "---------------------------------\n";
    }
    cout << s;
}