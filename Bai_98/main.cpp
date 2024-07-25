#include<bits/stdc++.h>
using namespace std;

int gcd(int a, int b) {
    while (b != 0) {
        int temp = b;
        b = a % b;
        a = temp;
    }
    return a;
}

int find_max_gcd(const vector<int>& numbers){
    int max_gcd = 0;
    int n = numbers.size();
    for (int i = 0; i < n; ++i){
        for (int j = i + 1; j < n; ++j){
            int current_gcd = gcd(numbers[i], numbers[j]);
            if (current_gcd > max_gcd) 
                max_gcd = current_gcd;
        }
    }
    return max_gcd;
}

int main() {
    ifstream infile("input.txt");
    ofstream outfile("output.txt");
    int Q; infile >> Q;
    for (int q = 0; q < Q; ++q) {
        int n;
        infile >> n;
        vector<int> numbers(n);
        for (int i = 0; i < n; ++i)
            infile >> numbers[i];
        int max_gcd = find_max_gcd(numbers);
        outfile << max_gcd << endl;
    }
    infile.close();
    outfile.close();
    return 0;
}
