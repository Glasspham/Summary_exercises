#include<iostream>
#include<string>
#include <regex>
using namespace std;

void func1(string s){
    s += "s"; // tạo điểm dừng
    string tmp = "",a = "";
    int t = 0;
    for(char c : s){
        if('0' <= c && c <= '9')
            tmp += c;
        else{
            if(tmp.length() > 0){
                a += tmp;
                t += stoi(tmp);
                tmp = "";
            }
        }
    }
    cout << "a = " << a << "\n";
    int b = stoi(a);
    while(b % 5 != 0)
        b /= 10;
    cout << "b = " << b << "\n";
    cout << "T = " << t << "\n";
}

void func2(string s){
    string digits;
    for(char c : s)
        if(isdigit(c))
            digits += c;

    cout << "a = " << digits << "\n";
    string b = digits;
    while(stoi(b) % 5 != 0)
        b.pop_back(); //  b = b.substr(0, b.length() - 1);
    cout << "b = " << b << "\n";
    regex pattern("[0-9]+");
    smatch matches;
    int t = 0;
    while (regex_search(s, matches, pattern)) {
        for (auto match : matches) 
            t += stoi(match.str());
        s = matches.suffix().str();
    }
    cout << "T = " << t << endl;
}

int main(){
    string s; cin >> s;
    func1(s);
    func2(s);
    return 0;
}