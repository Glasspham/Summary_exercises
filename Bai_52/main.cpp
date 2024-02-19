#include <iostream>
#include <fstream>
#include <vector>
#include <cmath>
using namespace std;

int sumOfDivisors(int n)
{
    int sum = 0;
    for(int i = 1; i <= sqrt(n); i++)
    {
        if(n % i == 0)
        {
            sum += i;
            if(n / i != i) // Tránh trường hợp n là bình phương của một số
                sum += n / i;
        }
    }
    return sum;
}

int main() {
    
    ifstream ifile("TONGUOC.INP");
    ofstream ofile("TONGUOC.OUT");

    int K, Q;
    ifile >> K >> Q;
    while (Q--)
    {
        int L, R;
        ifile >> L >> R;
        int cnt = 0;
        for (int j = L; j <= R; j++) 
            if (sumOfDivisors(j) >= K) 
                cnt ++;
        ofile << cnt << endl;
    }
    ifile.close();
    ofile.close();

    return 0;
}