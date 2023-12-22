#include <bits/stdc++.h>
using namespace std;

void solve() {
    int n, m, ans = 0;
    cin >> n >> m;
    vector<int> a(n);
    for (int i = 0; i < n; i++) cin >> a[i];

    if (m < n || n == 2) {
        cout << -1 << '\n';
        return;
    }

    for (int i = 0; i < n; i++) ans += 2 * a[i];
    cout << ans << '\n';
    for (int i = 1; i < n; i++) cout << i << ' ' << i + 1 << '\n';
    cout << n << ' ' << 1 << '\n';
}

int main() {
    ios_base::sync_with_stdio(0);
    cin.tie(0);
    cout.tie(0);
    int tc = 1;
    cin>>tc;
    for (int t = 1; t <= tc; t++) solve();
}
