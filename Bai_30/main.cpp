#include<iostream>
#include<cmath>
#include <fstream>
using namespace std;

bool KTSCP(int x)
{
    int n = sqrt(x);
    if(n * n == x)
        return true;
    return false;
}

int main()
{
    int x, y;
    std::ifstream fileinp("E:\\Project Visual Studio Code\\Summary_exercises\\Bai_30\\CHINHPHUONG.INP");
    std::ofstream fileout("E:\\Project Visual Studio Code\\Summary_exercises\\Bai_30\\CHINHPHUONG.OUT");

    fileinp >> x >> y;
    for(int i = x; i <= y; i++)
        if(KTSCP(i))
            fileout << i << ' ';
}