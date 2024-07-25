#include<bits/stdc++.h>
using namespace std;

int main() {
    string compressed;
    cin >> compressed;
    string res;
    for(int i = 0; i < compressed.size(); ++i){
        if(isdigit(compressed[i])) {
            int count = 0;
            while (i < compressed.size() && isdigit(compressed[i])) {
                count = count * 10 + (compressed[i] - '0');
                ++i;
            }
            if (i < compressed.size() && isalpha(compressed[i])) 
                res.append(count, compressed[i]);
        } 
        else res.push_back(compressed[i]);
    }
    cout << res;
    return 0;
}
