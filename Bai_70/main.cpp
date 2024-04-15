#include<iostream>
using namespace std;
int sum_of_divisors(int n){
    int total = 1;
    int i = 2;
    while(i * i <= n){
        if(n % i == 0){
            total += i;
            if(i != n / i)
                total += n / i;
        }
        ++i;
    }
    return total;
}

int count_special_numbers(int L, int R){
    int count = 0;
    for(int i = L; i <= R; ++i)
        if(sum_of_divisors(i) > i)
            count++;
    return count;
}

int main(){
    int L, R;
    freopen("sodacbiet.inp","r",stdin);
    cin >> L >> R;
    freopen("sodacbiet.out","w",stdout);
    cout << count_special_numbers(L, R);
    return 0;
}