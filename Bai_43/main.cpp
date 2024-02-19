#include<iostream>
#include<vector>
#include<sstream>
using namespace std;

int main()
{
    string str = " ";
    cin >> str;
    stringstream ss(str);
    char b;
    int number;
    vector<int> list;
    while (ss >> number)
    {
        list.push_back(number);
        if(ss.peek() == '-')  // Kiểm tra xem kí tự tiếp theo sau số có phải là hyphen không và bỏ qua nó
            ss.ignore(); // Bỏ qua dấu gạch ngang
    }
        
    int sum(0);
    for(int i : list)
        sum += i;

    int max = list[0];
    for(int value : list)
        if(value > max)
            max = value;
    
    cout << "Tong: " << sum << endl;
    cout << "Gia tri lon nhat: " << max << endl;

}