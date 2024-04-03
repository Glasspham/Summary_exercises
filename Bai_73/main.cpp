#include<iostream>
#include<time.h>
#define _CRT_SECURE_NO_WARNINGS
using namespace std;
int main(){
    int currentYear;
    time_t now = time(0);
    tm* ltm = localtime(&now);
    currentYear = ltm -> tm_year + 1900;
    int yourbrithyear;
    cin >> yourbrithyear;
    cout << currentYear - yourbrithyear << endl;
    return 0;
}