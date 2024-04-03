#include<iostream>
#include<fstream>
using namespace std;
long long nCk(long long n, long long k){
    if(k == 0 || k == n) return 1;
    return nCk(n-1,k-1) + nCk(n-1,k);
}

int main(){
    ifstream ifile("ISOSCELE.INP");
    ofstream ofile("ISOSCELE.OUT");
    long long n; ifile >> n;
    ofile << nCk(n,1ll * 3) << endl;
}