#include <bits/stdc++.h>
using namespace std;

void solve() {
    int n, t;
    cin >> n >> t;

    vector<pair<int, int>> vec(n);
    for (auto &v : vec) cin >> v.first;
    for (auto &v : vec) cin >> v.second;

    int index = -1, maxEnt = 0; 
    for (int i = 0; i < n; i++) {
        if (vec[i].first <= (t - i) && vec[i].second > maxEnt) {
            maxEnt = vec[i].second;
            index = i + 1;
        }
    }

    cout << index << endl;
}

int main() {
    ios_base::sync_with_stdio(0);
    cin.tie(0);
    cout.tie(0);
    int t = 1;
    cin >> t;
    while (t--) solve();
}
