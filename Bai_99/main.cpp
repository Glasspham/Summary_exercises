#include<bits/stdc++.h>
using namespace std;

bool isLeapYear(int year){
    return (year % 4 == 0 && year % 100 != 0) || (year % 400 == 0);
}

bool isValidDate(int day, int month, int year){
    if(month < 1 || month > 12) return false;
    int daysInMonth[13] = {0, 31, 28, 31, 30, 31, 30, 31, 31, 30, 31, 30, 31};
    if(month == 2 && isLeapYear(year)) daysInMonth[2] = 29;
    return day >= 1 && day <= daysInMonth[month];
}

vector<string> processDateString(const string& s){
    vector<string> validDates;
    int year = 2000 + stoi(s.substr(s.size() - 2));
    string dayStr, monthStr; int day,month;
    if(s.size() == 5){
        dayStr = s.substr(0,2); day = stoi(dayStr);
        monthStr = s.substr(2,1); month = stoi(monthStr);
        if(isValidDate(day, month, year))
            validDates.push_back(dayStr + "/" + monthStr + "/" + to_string(year));
    }
    dayStr = s.substr(0,1); day = stoi(dayStr);
    monthStr = s.substr(1,s.size() - 3); month = stoi(monthStr);
    if(isValidDate(day, month, year))
        validDates.push_back(dayStr + "/" + monthStr + "/" + to_string(year));
    return validDates;
}

int main(){
    ifstream inputFile("Ngay.inp");
    ofstream outputFile("Ngay.out");
    int N; inputFile >> N;
    for(int i = 0; i < N; ++i) {
        string s; inputFile >> s;
        vector<string> validDates = processDateString(s);
        if(validDates.empty()) outputFile << "NO";
        for(int i = 0; i < validDates.size(); ++i){
            outputFile << validDates[i];
            if(i != validDates.size() - 1) outputFile << ';';
        }
        outputFile << endl;
    }
    inputFile.close();
    outputFile.close();
    return 0;
}
