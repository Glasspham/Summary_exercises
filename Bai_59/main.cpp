#include<bits/stdc++.h>
using namespace std;
int main()
{
    string s; getline(cin,s);
    stringstream iss(s);
    string str;
    vector<string> a, tmp;
    while (iss >> str)
    {    
        a.push_back(str);
        for(char &x : str)
            x = toupper(x);
        tmp.push_back(str);
    }

    int index;
    for(int i = 0; i < tmp.size(); i++)
        if(tmp[i] == "FACEBOOK")
            index = i;
        
    a[index] = "Phở Bò";
    for(string i : a)
        cout << i << ' ';    
}