#include <iostream>
#include <fstream>
#include <string>

using namespace std;

bool isDistinct(int num){
    int Save[256] = {0};
    string numStr = to_string(num);
    for(char c : numStr){
        if(c == '0') return false;
        if(Save[c] > 0) return false;
        Save[c]++;
    }
    return true;
}

int main() {
    ifstream inputFile("SOBATLAP.INP");
    ofstream outputFile("SOBATLAP.OUT");
    
    int N;
    while(inputFile >> N){
        int result = N;
        while(!isDistinct(result))
            result++;
        outputFile << result << endl;
    }

    inputFile.close();
    outputFile.close();
    return 0;
}
