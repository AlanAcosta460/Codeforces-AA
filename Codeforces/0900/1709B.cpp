#include <bits/stdc++.h>
using namespace std;

void solve() {
    int n, m;
    cin >> n >> m;

    vector<long long int> cols(n);
    for (auto &a : cols) cin >> a;

    vector<pair<int, int>> quests(m);
    for (auto &[s, j] : quests) cin >> s >> j;

    vector<long long int> damage1(n, 0), damage2(n, 0);
    damage1[0] = 0;
    damage2[0] = 0;

    for (int i = 0; i < n; i++) {
        if (cols[i] > cols[i + 1]) damage1[i + 1] = cols[i] - cols[i + 1];
        else damage2[i + 1] = cols[i + 1] - cols[i];
    } 
    
    for (int i = 1; i < n; i++) {
        damage1[i] += damage1[i - 1];
        damage2[i] += damage2[i - 1];
    }

    for (auto [s, t] : quests) {
        if (t > s) cout << abs(damage1[t - 1] - damage1[s - 1]) << endl;
        else cout << abs(damage2[t - 1] - damage2[s - 1]) << endl;
    }
}

int main() {
    ios_base::sync_with_stdio(0);
    cin.tie(0);
    cout.tie(0);
    int t = 1;
    // cin >> t;
    while (t--) solve();
}
