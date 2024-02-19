#include<iostream>
#include<vector>
 
using namespace std;
vector<int> fibonacci_sum(int n)
{
    vector<int> fib_numbers = {1,1};
    while (fib_numbers.back() < n)
    {
        int index = fib_numbers.size();
        fib_numbers.push_back(fib_numbers[index - 1] + fib_numbers[index - 2]);
    }
    vector<int> result;
    int i = fib_numbers.size() - 1;
    while (n > 0)
    {
        while(fib_numbers[i] > n)
            i --;
        
        result.push_back(fib_numbers[i]);
        n -= fib_numbers[i];
        
    }
    return result;
}

int fibonacci(int n)
{
    if(n <= 1)  return n;
    return fibonacci(n - 1) + fibonacci(n - 2);
}

int main()
{

    // a
    int n; cin >> n;
    for(int i = 0; i < n; i++)
        cout << fibonacci(i) << ' ';
    cout << endl;

    // b
    cin >> n;
    vector<int> result = fibonacci_sum(n);
    cout << "Tong cua cac so fibonacci cho " << n << " la: ";
    for(int i : result)
        cout << i << ' ';
    return 0;
}
