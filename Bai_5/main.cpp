#include <iostream>
#include <vector>
using namespace std;

int fibonacci(int n) 
{
    if (n <= 1) 
    {
        return n;
    }
    return fibonacci(n - 1) + fibonacci(n - 2);
}

vector<int> findFibonacciInSequence(vector<int> sequence) 
{
    vector<int> fibonacciNumbers;
    for (int num : sequence) 
    {
        int i = 0;
        while (fibonacci(i) <= num) 
        {
            if (fibonacci(i) == num) 
            {
                fibonacciNumbers.push_back(num);
                break;
            }
            i++;
        }
    }
    return fibonacciNumbers;
}

int main() 
{
    cout << "Nhap vao mot day so: ";
    vector<int> numbers;
    int input;
    while (cin >> input) 
    {
        numbers.push_back(input);
        if (cin.peek() == '\n') 
        {
            break;
        }
    }

    vector<int> fibonacciInSequence = findFibonacciInSequence(numbers);
    if (!fibonacciInSequence.empty()) 
    {
        cout << "Cac so Fibonacci trong day so da nhap la:" << endl;
        for (int num : fibonacciInSequence) 
        {
            cout << num << " ";
        }
        cout << endl;
    } 
    else 
    {
        cout << "Khong co so Fibonacci nao trong day so da nhap." << endl;
    }

    return 0;
}
