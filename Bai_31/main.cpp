#include <iostream>
#include <fstream>
#include <vector>
using namespace std;

// Hàm kiểm tra số nguyên tố
bool isPrime(int n) {
    if (n <= 1) {
        return false;
    }
    for (int i = 2; i * i <= n; ++i) {
        if (n % i == 0) {
            return false;
        }
    }
    return true;
}

// Hàm tính tổng các số nguyên tố trong một dãy số
int sumOfPrimes(const vector<int>& arr) {
    int sum = 0;
    for (int num : arr) {
        if (isPrime(num)) {
            sum += num;
        }
    }
    return sum;
}

int main() {
    ifstream inputFile("E:\\Project Visual Studio Code\\Summary_exercises\\Bai_31\\LISMAXSUMPRIME.INP");
    ofstream outputFile("E:\\Project Visual Studio Code\\Summary_exercises\\Bai_31\\LISMAXSUMPRIME.OUT");

    if (!inputFile.is_open() || !outputFile.is_open()) {
        cerr << "Cannot open input or output file!" << endl;
        return 1;
    }

    int T;
    inputFile >> T;

    for (int t = 0; t < T; ++t) {
        int N;
        inputFile >> N;

        vector<int> sequence(N);
        for (int i = 0; i < N; ++i) {
            inputFile >> sequence[i];
        }

        int maxLength = 1;
        int maxSumPrime = sumOfPrimes({sequence[0]});
        int currentLength = 1;
        int currentSumPrime = sumOfPrimes({sequence[0]});

        for (int i = 1; i < N; ++i) {
            if (sequence[i] > sequence[i - 1]) {
                ++currentLength;
                currentSumPrime += sumOfPrimes({sequence[i]});

                if (currentLength > maxLength || (currentLength == maxLength && currentSumPrime > maxSumPrime)) {
                    maxLength = currentLength;
                    maxSumPrime = currentSumPrime;
                }
            } else {
                currentLength = 1;
                currentSumPrime = sumOfPrimes({sequence[i]});
            }
        }

        outputFile << maxLength << " " << maxSumPrime << "\n";
    }

    inputFile.close();
    outputFile.close();

    return 0;
}
