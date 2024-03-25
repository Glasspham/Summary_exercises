#include <iostream>
#include <fstream>
#include <vector>
#include <algorithm>

using namespace std;

int main() {
    ifstream infile("TONG.INP");
    ofstream outfile("TONG.OUT");

    int p, q;
    infile >> p;
    vector<int> M(p);
    for (int i = 0; i < p; ++i) {
        infile >> M[i];
    }

    infile >> q;
    vector<int> N(q);
    for (int i = 0; i < q; ++i) {
        infile >> N[i];
    }

    reverse(M.begin(), M.end());
    reverse(N.begin(), N.end());

    int carry = 0;
    vector<int> sum;
    int i = 0, j = 0;
    while (i < p || j < q || carry) {
        int m_digit = (i < p) ? M[i] : 0;
        int n_digit = (j < q) ? N[j] : 0;
        int digit_sum = m_digit + n_digit + carry;
        sum.push_back(digit_sum % 10);
        carry = digit_sum / 10;
        ++i;
        ++j;
    }

    reverse(sum.begin(), sum.end());

    outfile << sum.size() << endl;
    for (int digit : sum) {
        outfile << digit << " ";
    }
    outfile << endl;

    infile.close();
    outfile.close();

    return 0;
}
