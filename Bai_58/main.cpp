#include <iostream>
#include <vector>
#include <algorithm>
using namespace std;

struct Item {
    int weight;
    int value;
};

bool compare(Item a, Item b) {
    return (a.value * 1.0 / a.weight) > (b.value * 1.0 / b.weight);
}

int main() {
    freopen("SAMPLE.INP", "r", stdin);
    freopen("SAMPLE.OUT", "w", stdout);

    int N, M;
    cin >> N >> M;

    vector<Item> items(N);
    for (int i = 0; i < N; ++i) {
        cin >> items[i].weight >> items[i].value;
    }

    vector<int> capacities(M);
    for (int i = 0; i < M; ++i) {
        cin >> capacities[i];
    }

    sort(items.begin(), items.end(), compare);

    long long totalValue = 0;
    for (int i = 0; i < N && M > 0; ++i) {
        for (int j = 0; j < M; ++j) {
            if (capacities[j] >= items[i].weight) {
                totalValue += items[i].value;
                capacities[j] -= items[i].weight;
                break;
            }
        }
    }

    cout << totalValue << endl;

    return 0;
}
