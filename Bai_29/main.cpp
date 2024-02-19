#include<iostream>
#include<fstream>
using namespace std;

int main()
{
    ifstream ifile("E:\\Project Visual Studio Code\\Summary_exercises\\Bai_26\\XAU.INP");
    ofstream ofile("E:\\Project Visual Studio Code\\Summary_exercises\\Bai_26\\XAU.OUT");
    string s1,s2;
    ifile >> s1;
    ifile >> s2;

    int count(0);
    int index = s2.find(s1);

    while(index != -1)
    {
        count += 1;
        index = s2.find(s1, index + 1);
    }
    
    ofile << count;

    return 0;
}