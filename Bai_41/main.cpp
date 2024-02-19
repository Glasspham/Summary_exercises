#include<iostream>
#include<fstream>
#include<vector>
using namespace std;
int main()
{
    ifstream ifile("E:/Project Visual Studio Code/Summary_exercises/Bai_41/SUM.INP");
    ofstream ofile("E:/Project Visual Studio Code/Summary_exercises/Bai_41/SUM.OUT");
    int N,K,B;
    ifile >> N >> K >> B;
    vector<int>sequence(N);
    for(int i = 0; i < N; ++i) 
        ifile >> sequence[i];
    
    int total_sum(0);
    for(int i = B - 1; i < B - 1 + K; i++)
        total_sum += sequence[i % N];

    ofile << total_sum;
    return 0;
}