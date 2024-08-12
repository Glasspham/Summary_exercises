#include <iostream>
#include <fstream>
#include <vector>
#include <algorithm>

using namespace std;

int main()
{
    ifstream file("MUAHOA.INP");
    int n, m;
    file >> n >> m;
    vector<vector<int>> flowers(n, vector<int>(2));

    for (int i = 0; i < n; ++i)
    {
        file >> flowers[i][0] >> flowers[i][1];
    }
    file.close();

    sort(flowers.begin(), flowers.end(), [](const vector<int> &a, const vector<int> &b)
         { return a[0] < b[0]; });

    int total_flowers = 0;
    int total_cost = 0;

    for (auto &flower : flowers)
    {
        int price = flower[0];
        int quantity = flower[1];
        int can_buy = min(quantity, (m - total_cost) / price);
        total_cost += can_buy * price;
        total_flowers += can_buy;
    }

    ofstream outfile("MUAHOA.OUT");
    outfile << total_flowers;
    outfile.close();

    return 0;
}
