#include<iostream>
#include<fstream>
#include<vector>

using namespace std;

int main()
{
    ifstream infile("E:/Language/Baitaptonghop/Bai_23/INPUT.INP");
    ofstream outfile("E:/Language/Baitaptonghop/Bai_23/OUTPUT.OUT");

    int n;
    infile >> n;

    vector<int> divisors;
    for(int i = 1; i <= n; i++)
        if(n % i == 0)
            divisors.push_back(i);

    for(int i : divisors)
        outfile << i << '\n';

    infile.close();
    outfile.close();
}

