#include <iostream>
#include <fstream>
#include <string>
#include <cmath>

using namespace std;

bool is_prime(int n) {
    if (n < 2) return false;
    for (int i = 2; i <= sqrt(n); i++) {
        if (n % i == 0) return false;
    }
    return true;
}

int main() {
    // Mở file đầu vào NTMAX.INP
    ifstream infile("E:\\Project Visual Studio Code\\Summary_exercises\\Bai_34\\NTMAX.INP");
    // Mở file đầu ra NTMAX.OUT
    ofstream outfile("E:\\Project Visual Studio Code\\Summary_exercises\\Bai_34\\NTMAX.OUT");
    
    string T;
    getline(infile, T); // Đọc xâu từ file

    infile.close(); // Đóng file sau khi đọc xong

    // Các bước tiếp theo giống như trong mã nguồn trước

    int digit_count = 0;
    int max_prime = 0;
    string current_number = "";

    for(char c : T) 
    {
        if(isdigit(c)) 
        {
            digit_count++;
            current_number += c;
        } 
        else 
        {
            if(!current_number.empty()) 
            {
                int number = stoi(current_number);
                if (is_prime(number) && number > max_prime) 
                    max_prime = number;

                current_number = "";
            }
        }
    }

    if (!current_number.empty()) 
    {
        int number = stoi(current_number);
        if (is_prime(number) && number > max_prime) 
            max_prime = number;
    }

    // In kết quả ra file
    outfile << digit_count << endl;
    outfile << max_prime << endl;

    // Đóng file đầu ra
    outfile.close();

    return 0;
}
