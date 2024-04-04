#include<iostream>
#include<regex>
#include<fstream>
using namespace std;
int main(){
    ifstream ifile("abc.txt");
    ofstream ofile("number.txt");
    string s = " ";
    string data((istreambuf_iterator<char>(ifile)), istreambuf_iterator<char>());
    regex pattern("\\d+");
    sregex_iterator next(data.begin(), data.end(), pattern);
    sregex_iterator end;
    while (next != end){
        ofile << (*next).str() << endl;
        ++next;
    }
    ifile.close();
    ofile.close();
    return 0;
}