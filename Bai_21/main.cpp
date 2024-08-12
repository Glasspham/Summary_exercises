#include <iostream>
#include <fstream>
#include <cmath>

using namespace std;
// Function to check if a number is prime
bool is_prime(int num)
{
    if (num < 2)
    {
        return false;
    }
    for (int i = 2; i <= sqrt(num); ++i)
    {
        if (num % i == 0)
        {
            return false;
        }
    }
    return true;
}

// Function to count prime pairs with a difference of 2 in a range
int count_prime_pairs(int L, int R)
{
    int count = 0;
    for (int i = L; i < R; ++i)
    {
        if (is_prime(i) && is_prime(i + 2))
        {
            count++;
        }
    }
    return count;
}

int main()
{
    ifstream infile("HANGXOM.INP");
    ofstream outfile("HANGXOM.OUT");
    int L, R;
    infile >> L >> R;

    // Counting prime pairs and printing the result
    int result = count_prime_pairs(L, R + 1); // Adding 1 to R to include R in the range
    outfile << result;

    return 0;
}
