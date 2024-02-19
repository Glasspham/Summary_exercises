#include <iostream>
#include <vector>
#include <tuple> 
using namespace std;
int countCoinCombinations(int N, int M) 
{
    vector<int> denominations = {5000, 2000, 1000, 500, 200};
    int count = 0;
    vector<tuple<int, int, vector<int>>> stack; // (remaining_value, index, combination)
    stack.push_back(make_tuple(N, 0, vector<int>()));

    while(!stack.empty()) 
    {
        int remaining_value, index;
        vector<int> combination;
        tie(remaining_value, index, combination) = stack.back();
        stack.pop_back();

        if(remaining_value == 0) 
        {
            if(combination.size() <= M) 
                count += 1;
            continue;
        }

        if(index >= denominations.size()) 
            continue;

        int max_coins = min(remaining_value / denominations[index], M - static_cast<int>(combination.size()));
        for(int num_coins = 0; num_coins <= max_coins; ++num_coins) 
        {
            vector<int> new_combination = combination;
            for(int i = 0; i < num_coins; ++i) 
                new_combination.push_back(denominations[index]);
            int new_remaining_value = remaining_value - num_coins * denominations[index];
            stack.push_back(make_tuple(new_remaining_value, index + 1, new_combination));
        }
    }

    return count;
}

int main() 
{
    int N, M;
    cout << "N: ";
    cin >> N;
    cout << "M: ";
    cin >> M;

    int result = countCoinCombinations(N, M);
    cout << "Co " << result << " phuong an doi tien" << endl;

    return 0;
}
