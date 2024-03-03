#include <bits/stdc++.h>
using namespace std;

void solve() {
    int n;
    cin >> n;

    vector<int> prices(n);
    for (auto &p : prices) cin >> p;

    sort(prices.begin(), prices.end());

    int q, m;
    cin >> q;

    while (q--) {
        cin >> m;
        cout << (upper_bound(prices.begin(), prices.end(), m) - prices.begin()) << endl;
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
