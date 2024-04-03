#include<iostream>
#include<fstream>
#include<cmath>
using namespace std;

double last_digit_power(int m, int n){
    double last_digit = m % 10;
    if(last_digit == 0 || last_digit == 1 || last_digit == 5 || last_digit == 6) 
        return last_digit;
    double exp = n % 4;
    if(exp == 0) exp = 4;
    return static_cast<int>(pow(last_digit, exp)) % 10;
}

int main(){
    ifstream file("CHUSO.INP");
    ofstream file1("CHUSO.OUT");
    int m, n;
    file >> m >> n;
    file1 << last_digit_power(m, n);
    file.close();
    file1.close();
    return 0;
}