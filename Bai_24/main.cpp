#include <iostream>
#include <fstream>
#include <vector>
#include <cmath>

// Function to check if a number is prime
bool isPrime(int n)
{
    if (n <= 1)
    {
        return false;
    }
    for (int i = 2; i <= sqrt(n); ++i)
    {
        if (n % i == 0)
        {
            return false;
        }
    }
    return true;
}

int main()
{
    std::ifstream infile("DOANNT.INP");
    std::ofstream outfile("DOANNT.OUT");

    int Q;
    infile >> Q;
    std::vector<int> results;

    for (int q = 0; q < Q; ++q)
    {
        int L, R;
        infile >> L >> R;
        int count = 0;
        for (int num = L + 1; num < R; ++num)
        {
            if (isPrime(num))
            {
                count++;
            }
        }
        results.push_back(count);
    }

    for (int result : results)
    {
        outfile << result << "\n";
    }

    infile.close();
    outfile.close();

    return 0;
}
