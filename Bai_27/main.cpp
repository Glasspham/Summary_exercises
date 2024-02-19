#include <iostream>
#include <fstream>
using namespace std;

int main() {
    // Đọc dữ liệu từ file XAUGON.INP
    ifstream ifile("E:\\Project Visual Studio Code\\Summary_exercises\\Bai_27\\XAUGON.INP");
    ofstream ofile("E:\\Project Visual Studio Code\\Summary_exercises\\Bai_27\\XAUGON.OUT");
    string input_str;
    ifile >> input_str;

    // Xây dựng xâu SG từ xâu S
    string output_str;
    output_str += input_str[0]; // Khởi tạo xâu SG với ký tự đầu tiên của xâu S

    // Duyệt qua các ký tự còn lại của xâu S
    for(int i = 1; i < input_str.length(); ++i) 
    {
        // Nếu ký tự hiện tại khác với ký tự trước đó, thêm vào xâu SG
        if(input_str[i] != input_str[i - 1]) 
            output_str += input_str[i];
    }

    // In xâu SG ra file XAUGON.OUT
    ofile << output_str;

    return 0;
}
