#include <iostream>
#include <fstream>
#include <vector>
#include <cmath>

using namespace std;

// Hàm kiểm tra số nguyên tố
bool isPrime(int n) {
    if (n <= 1) return false;
    if (n <= 3) return true;
    if (n % 2 == 0 || n % 3 == 0) return false;
    for (int i = 5; i * i <= n; i += 6) {
        if (n % i == 0 || n % (i + 2) == 0) return false;
    }
    return true;
}

// Hàm kiểm tra số nguyên tố song sinh
bool isTwinPrime(int n) {
    if (!isPrime(n)) return false;
    int reversed = 0, temp = n;
    while (temp > 0) {
        reversed = reversed * 10 + temp % 10;
        temp /= 10;
    }
    return isPrime(reversed) && reversed != n;
}

int main() {
    ifstream inputFile("TWINS.INP");
    ofstream outputFile("TWINS.OUT");

    if (!inputFile.is_open() || !outputFile.is_open()) {
        cout << "Failed to open files." << endl;
        return 1;
    }

    int T;
    inputFile >> T;

    for (int i = 0; i < T; ++i) {
        int a, b;
        inputFile >> a >> b;
        int primeSum = 0, twinPrimeCount = 0;

        for (int j = a; j <= b; ++j) {
            if (isPrime(j)) primeSum += j;
            if (isTwinPrime(j)) twinPrimeCount++;
        }

        outputFile << primeSum << " " << twinPrimeCount << endl;
    }

    inputFile.close();
    outputFile.close();

    return 0;
}
