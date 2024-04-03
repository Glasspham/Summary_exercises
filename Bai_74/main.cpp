#include<iostream>
using namespace std;

int Day(int month, int year){
    switch (month)
    {
    case 1: case 3: case 5: case 7: case 8: case 10: case 12:
        return 31;
    case 4: case 6: case 9: case 11:
        return 30;
    default:
        if(year % 4 == 0 && year % 100 != 0 || year % 400 == 0)
            return 29;
        else
            return 28;
    }
}

int main(){
    int month, year;
    cin >> month >> year;
    cout << Day(month, year) << endl;
    return 0;
}