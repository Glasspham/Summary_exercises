#include<bits/stdc++.h>
using namespace std;

int max(int a, int b) {
    return (a > b) ? a : b;
}

int min(int m, int n) {
    return (m < n) ? m : n;
}

int main() {

    ifstream ifile("PHANCONG.INP");
    ofstream ofile("PHANCONG.OUT");
    int m1, n1, k1, m2, n2, k2, m3, n3, k3, kq, t;
    kq = 100;

    ifile >> m1 >> n1 >> k1;
    ifile >> m2 >> n2 >> k2;
    ifile >> m3 >> n3 >> k3;

    t = max(m1, max(n2, k3));
    kq = min(t, kq);
    t = max(m1, max(n3, k2));
    kq = min(t, kq);
    t = max(n1, max(m2, k3));
    kq = min(t, kq);
    t = max(n1, max(m3, k2));
    kq = min(t, kq);
    t = max(k1, max(m2, n3));
    kq = min(t, kq);
    t = max(k1, max(m3, n2));
    kq = min(t, kq);

    ofile << kq;

    return 0;
}
