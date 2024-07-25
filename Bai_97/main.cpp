#include <iostream>
#include <vector>
using namespace std;

int main() {
    int N, S;
    cin >> N >> S;
    if (S > 9 * N) {
        cout << -1 << endl;
        return 0;
    }
    vector<int> result(N, 0);
    for(int i = 0; i < N; i++){
        if(S >= 9) {
            result[i] = 9;
            S -= 9;
        }else{
            result[i] = S;
            S = 0;
        }
    }
    for (int i = 0; i < N; i++)
        cout << result[i];
    cout << endl;
    return 0;
}
