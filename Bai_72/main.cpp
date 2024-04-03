#include<iostream>
using namespace std;
int main(){
    char d;
    do
    {   
        float a, b;
        cout << "a="; cin >> a;
        cout << "b="; cin >> b;
        char c;
        cout << "Toan tu:"; cin >> c;
        switch (c){
        case '+': cout << a << c << d << "=" << a + b; break;
        case '-': cout << a << c << d << "=" << a - b; break;
        case '*': cout << a << c << d << "=" << a * b; break;
        case '/': cout << a << c << d << "=" << a / b; break;
        }
        cout << "\nTiep tuc:"; cin >> d;
    } while (d != 't' && d != 'T');
    return 0;
}