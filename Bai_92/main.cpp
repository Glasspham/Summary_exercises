#include <iostream>
#include <fstream>
#include <string>

using namespace std;

#if 1
// Hàm kiểm tra xem một số có đúng K chữ số khác 0 không
bool Check(int num, int K) {
    int cnt = 0;
    while (num > 0) {
        if (num % 10 != 0) 
            cnt++;
        num /= 10;
    }
    return cnt == K;
}

int main() {
    ifstream infile("DEMSO.INP");
    ofstream outfile("DEMSO.OUT");

    int N, K;
    infile >> N >> K;

    int cnt = 0;
    for (int i = 1; i <= N; ++i) 
        if (Check(i, K)) 
            cnt++;

    outfile << cnt << endl;

    infile.close();
    outfile.close();

    return 0;
}
#endif

#if 1

#endif