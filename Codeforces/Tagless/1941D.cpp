#include <bits/stdc++.h>
using namespace std;

int n, m, aux;
set<int> ans;
vector<pair<int, char>> tr;
vector<vector<pair<int, int>>> dp;

int func(int cur, int i) {
    if (i == m) {
        ans.insert(cur);
        return cur;
    }

    if (tr[i].second == '0' && dp[i][cur].first != -1) return dp[i][cur].first;
    if (tr[i].second == '1' && dp[i][cur].second != -1) return dp[i][cur].second;
    
    if (tr[i].second == '0') return dp[i][cur].first = func((cur + tr[i].first) % n, i + 1);
    if (tr[i].second == '1') {
        aux = cur - tr[i].first;
        if (aux < 0) aux += n;
        return dp[i][cur].second = func(aux, i + 1);
    }

    dp[i][cur].first = func((cur + tr[i].first) % n, i + 1);

    aux = cur - tr[i].first;
    if (aux < 0) aux += n;
    dp[i][cur].second = func(aux, i + 1);
}

void solve() {
    int x;
    cin >> n >> m >> x;
    tr.assign(m, pair(0, 0));
    dp.assign(m, vector<pair<int, int>>(n, pair(-1, -1)));
    
    for (auto &[r, c] : tr) cin >> r >> c;
    
    ans.clear();
    func(x - 1, 0);
    
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
