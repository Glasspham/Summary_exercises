#include <iostream>
#include <fstream>
#include <string>
#include <sstream>
#include <vector>
using namespace std;

// Hàm tách các từ từ một chuỗi
vector<string> splitWords(const string& input) {
    vector<string> words;
    istringstream iss(input);
    string word;
    while (iss >> word) {
        words.push_back(word);
    }
    return words;
}

// Hàm tìm từ dài nhất trong một chuỗi
string findLongestWord(const string& input) {
    vector<string> words = splitWords(input);
    string longestWord = "";
    for (const string& word : words) {
        if (word.length() > longestWord.length()) {
            longestWord = word;
        }
    }
    return longestWord;
}

// Hàm tìm chuỗi dài nhất trong một vector các chuỗi
string findLongestString(const vector<string>& strings) {
    string longestString = "";
    for (const string& str : strings) {
        if (str.length() > longestString.length()) {
            longestString = str;
        }
    }
    return longestString;
}

int main() {
    ifstream inputFile("STR.INP");
    ofstream outputFile("STR.OUT");

    int n;
    inputFile >> n;
    inputFile.ignore();
    vector<string> strings;
    for (int i = 0; i < n; ++i) {
        string line;
        getline(inputFile, line);
        strings.push_back(line);
    }

    // a. Tìm từ dài nhất của mỗi chuỗi
    outputFile << "CAU a:" << endl;
    for (const string& str : strings)
        outputFile << findLongestWord(str) << endl;

    // b. Tìm chuỗi con chứa từ bên trái và từ bên phải của mỗi chuỗi
    outputFile << "CAU b:" << endl;
    for (const string& str : strings) {
        vector<string> words = splitWords(str);
        if (words.size() >= 2) 
            outputFile << words[0] << " " << words[words.size() - 1] << endl;
    }

    // c. Tìm chuỗi dài nhất trong file
    outputFile << "CAU c:" << endl;
    outputFile << findLongestString(strings) << endl;

    // d. Đếm số từ trong file
    int totalWords = 0;
    for (const string& str : strings) {
        totalWords += splitWords(str).size();
    }
    outputFile << "CAU d:" << endl;
    outputFile << totalWords << endl;

    // e. Đếm số từ "your" trong file
    int countYour = 0;
    for (const string& str : strings) {
        vector<string> words = splitWords(str);
        for (const string& word : words) {
            if (word == "your") {
                countYour++;
            }
        }
    }
    outputFile << "CAU e:" << endl;
    outputFile << countYour << endl;

    inputFile.close();
    outputFile.close();

    return 0;
}