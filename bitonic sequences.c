#include <iostream>
#include <vector>
using namespace std;
const int MOD = 1e9 + 7;
int main() {
    int M;
    cin >> M;
    vector<int> dp(M + 1, 0);
    dp[0] = 1;
    for (int num = 1; num <= M; num++) {
        for (int sum = M; sum >= num; sum--) {
            dp[sum] = (dp[sum] + dp[sum - num]) % MOD;
        }
    }
    for (int n = 1; n <= M; n++) {
        int result = (dp[n] - 1 + MOD) % MOD;
        cout << result << "\n";
    }
    return 0;
}
