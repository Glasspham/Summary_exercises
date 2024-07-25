#include<bits/stdc++.h>
using namespace std;

bool valid_number(const string &number, const set<char> &digits) {
    for(char digit : number)
        if(digits.find(digit) != digits.end())
            return false;
    return true;
}

int find_number(int P, const set<char> &digits){
    for(int num = P; num > 0; --num){
        string str_num = to_string(num);
        if (valid_number(str_num, digits))
            return num;
    }
    return -1;
}

int main(){
    ios::sync_with_stdio(false);
    cin.tie(nullptr);
    freopen("SODB.INP","r",stdin);
    freopen("SODB.OUT","w",stdout);
    int P; cin >> P;
    string S; cin >> S;
    set<char> digits(S.begin(), S.end());
    int result = find_number(P, digits);
    cout << result << endl;
    fclose(stdin);
    fclose(stdout);
    return 0;
}
