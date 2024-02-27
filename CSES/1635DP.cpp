#include <bits/stdc++.h>
using namespace std;

#define MOD 1000000007

vector<long long> coins, dp;

long long forms(long long x) {
    if (x < 0) return 0;
    if (dp[x] != -1) return dp[x];

    long long sum = 0;
    for (auto a : coins) sum += forms(x - a) % MOD;
    dp[x] = sum;

    return sum;
}

void solve() {
    int n, x;
    cin >> n >> x;

    coins.assign(n, 0);
    dp.assign(x + 1, -1);
    dp[0] = 1;
    for (auto &a : coins) cin >> a;

    cout << (forms(x) % MOD) << endl;
}

int main() {
    ios_base::sync_with_stdio(0);
    cin.tie(0);
    cout.tie(0);
    int t = 1;
    // cin >> t;
    while (t--) solve();
}
