#include<bits/stdc++.h>

using namespace std;

bool isPrime(int n) {
    if (n < 2) return false;
    if (n == 2 || n == 3) return true;
    if (n % 2 == 0 || n % 3 == 0) return false;
    for (int i = 5; i <= sqrt(n); i += 6) 
        if (n % i == 0 || n % (i + 2) == 0) return false;
    return true;
}

int main() {
    ifstream fin("nguyento.inp");
    ofstream fout("nguyento.out");

    int N; fin >> N;
    int a[N]; for(int &x : a) fin >> x;

    int maxLen = 0, startIdx = -1;
    int currentLen = 0, currentStart = -1;

    for(int i = 0; i < N; ++i){
        if (isPrime(a[i])) {
            if(currentLen == 0)
                currentStart = i;
            if(currentLen == 0 || a[i] > a[i-1]) 
                currentLen++;
            else{
                currentLen = 1;
                currentStart = i;
            }
        } else currentLen = 0;
        if(currentLen > maxLen){
            maxLen = currentLen;
            startIdx = currentStart;
        }
    }

    fout << maxLen << endl;
    if(maxLen > 0){
        for (int i = 0; i < maxLen; ++i)
            fout << a[startIdx + i] << " ";
        fout << endl;
    }

    fin.close();
    fout.close();
    return 0;
}
