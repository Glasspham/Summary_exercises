#include<iostream>
#include<map>
using namespace std;
void prime_factorization(long long n){
    map<long long, int> factors;
    long long i = 2;
    while(i * i <= n){
        if(n % i == 0){
            int cnt = 0;
            while(n % i == 0){
                n /= i;
                cnt += 1;
            }
            factors[i] = cnt;
        }
        i += 1;
    }
    if(n > 1) factors[n] = 1;
    for(auto factor: factors)
        cout << factor.first << "^" << factor.second << " ";
    cout << endl;
}

int main(){
    long long n;
    do{
        cin >> n;
        if(n == 0) break;
        prime_factorization(n);
    } while (n != 0);
    return 0;
}