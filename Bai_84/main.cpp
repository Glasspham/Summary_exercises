#include <iostream>
#include <fstream>
#include <string>
#include <cctype>

bool isStrongPassword(const std::string& password) {
    if (password.length() < 8) {
        return false;
    }
    bool hasDigit = false;
    bool hasUpper = false;
    bool hasLower = false;
    bool hasSpecial = false;
    for (char c : password) {
        if (isdigit(c)) {
            hasDigit = true;
        } else if (isupper(c)) {
            hasUpper = true;
        } else if (islower(c)) {
            hasLower = true;
        } else {
            hasSpecial = true;
        }
    }
    return hasDigit && hasUpper && hasLower && hasSpecial;
}

int main() {
    std::ifstream inputFile("BAI3.INP");
    std::string password;
    std::getline(inputFile, password);

    std::ofstream outputFile("BAI3.OUT");
    if (isStrongPassword(password)) {
        outputFile << "Tối ưu";
    } else {
        outputFile << "Không tối ưu";
    }

    return 0;
}