#include <bits/stdc++.h>
using namespace std;

void solve() {
    long long n, k, aux;
    cin >> n >> k;

    vector<pair<long, long>> monsters(n);
    for (auto &m : monsters) cin >> m.second;
    for (auto &m : monsters) {
        cin >> aux;
        m.first = abs(aux);
    }

    sort(monsters.begin(), monsters.end());

    long long time = 0, bullets = k;
    for (int i = 0; i < n; i++) {
        if (monsters[i].first - time > 0) {
            if (monsters[i].second <= bullets) bullets -= monsters[i].second;
            else {
                time++;
                monsters[i].second -= bullets;
                bullets = k;
                i--;
            }
        } else {
            cout << "NO" << endl;
            return;
        }
    }

    cout << "YES" << endl;
}

int main() {
    ios_base::sync_with_stdio(0);
    cin.tie(0);
    cout.tie(0);
    int t = 1;
    cin >> t;
    while (t--) solve();
}
