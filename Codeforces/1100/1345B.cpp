#include <bits/stdc++.h>
using namespace std;

map<long long, long long> dp;
long long hMax = 0;

void solve() {
    long long n;
    cin >> n;

    dp[1] = 2;
   
    long long h = 1;
    if (dp[hMax] > n)  {
        n -= dp[hMax];
        h = hMax;
        while (dp[h++] < n) dp[h] = dp[h - 1] + (h * 2) + (h - 1);
        if (h-- > hMax) hMax = h;
    }

    long long i, count = 0;
    while (n > 1) {
        i = 1;
        while (dp[i] < n && i < dp.size()) i++;
        if (n - dp[i] >= 0) n -= dp[i];
        else n -= dp[i - 1];
        count++;
    }

    cout << count << endl;
}

int main() {
    ios_base::sync_with_stdio(0);
    cin.tie(0);
    cout.tie(0);
    int t = 1;
    cin >> t;
    while (t--) solve();
}
