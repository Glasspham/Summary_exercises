
#include<bits/stdc++.h>
using namespace std;
#if 1 // Time 0.44s
using ll = long long;
ll mod = 1e9 + 7;
int main(){
    ios::sync_with_stdio(false);
    cin.tie(nullptr);
    int t; cin >> t;
    while(t--){
        int n, k; cin >> n >> k;
        ll dp[100001] = {0};
        dp[0] = dp[1]= 1;
        for(int i = 2; i <= n; ++i)
            for(int j = 1; j <= k; ++j)
                if (i >= j)
                    dp[i] = (dp[i] + dp[i - j]) % mod;
        cout << dp[n] << endl;
    }
    return 0;
}
#endif

#if 1 // 0.09s
const int N = 1e5 + 1;
const int K = 101;
const int M = 1e9 + 7;
int f[N][K];
int main() {
	f[0][0] = 1;
	for (int i = 1; i < N; ++i) f[i][0] = 0;
	for (int j = 1; j < K; ++j) {
		int ans = 1;
		f[0][j] = 1;
		for (int i = 1; i < j; ++i) {
			f[i][j] = ans;
			ans = (ans + f[i][j]) % M;
		}
		for (int i = j; i < N; ++i) {
			f[i][j] = ans;
			ans = (ans - f[i - j][j] + M) % M;
			ans = (ans + f[i][j]) % M;
		}
	}
	int t; cin >> t;
	while (t--) {
		int n, k; cin >> n >> k;
		cout << f[n][k] << '\n';
	}
	return 0;
}
#endif