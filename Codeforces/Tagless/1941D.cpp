#include <bits/stdc++.h>
using namespace std;

int n, m;
set<int> ans;
vector<pair<int, char>> tr;
vector<vector<pair<int, int>>> dp;

int func(int cur, char c, int i) {
    if (i == m) {
        ans.insert(cur);
        return cur;
    }

    if (c == '0' && dp[i][cur].first != -1) return dp[i][cur].first;
    if (c == '1' && dp[i][cur].second != -1) return dp[i][cur].second;
    
    if (c == '0') return dp[i][cur].first = func((cur + tr[i].first) % n, tr[i + 1].second, i + 1);
    if (c == '1') {
        if (cur - tr[i].first < 0) return dp[i][cur].second = func(n + cur - tr[i].first, tr[i + 1].second, i + 1);
        else return dp[i][cur].second = func(cur - tr[i].first, tr[i + 1].second, i + 1);
    }

    dp[i][cur].first = func((cur + tr[i].first) % n, tr[i + 1].second, i + 1);
    if (cur - tr[i].first < 0) dp[i][cur].second = func(n + cur - tr[i].first, tr[i + 1].second, i + 1);
    else dp[i][cur].second = func(cur - tr[i].first, tr[i + 1].second, i + 1);
}

void solve() {
    int x;
    cin >> n >> m >> x;
    tr.assign(m, pair(0, 0));
    dp.assign(m, vector<pair<int, int>>(n, pair(-1, -1)));
    
    for (auto &[r, c] : tr) cin >> r >> c;
    
    ans.clear();
    func(x - 1, tr[0].second, 0);
    
    cout << ans.size() << endl;
    for (auto a : ans) cout << (a + 1) << ' ';
    cout << endl;
}

int main() {
    ios_base::sync_with_stdio(0);
    cin.tie(0);
    cout.tie(0);
    int t = 1;
    cin >> t;
    while (t--) solve();
}
