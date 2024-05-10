#include<iostream>
#include<iomanip>
#define ll long long
using namespace std;
// Cách 1
int main(){
    int number = 12345600;
    string formatted_number = to_string(number);
    int length = formatted_number.length();
    for (int i = length - 3; i > 0; i -= 3)
        formatted_number.insert(i, ".");
    cout << formatted_number << endl;
    return 0;
}

// Cách 2
int main(){
    string n; cin >> n;
    if(n.length() % 3 == 0){
        int j = 0;
        for(int i = 0; i < n.length(); ++i){
            cout << n[i];
            j++;
            if(j == 3) cout << '.';
        }
    }
    else if(n.length() % 3 == 1){
        cout << n[0] << '.';
        int j = 0;
        for(int i = 1; i < n.length(); ++i){
            cout << n[i];
            j++;
            if(j == 3) cout << '.';
        }
    }
    else if(n.length() % 3 == 2){
        cout << n[0] << n[1] << '.';
        int j = 0;
        for(int i = 2; i < n.length(); ++i){
            cout << n[i];
            j++;
            if(j == 3) cout << '.';
        }
    }
    return 0;
}