#include <bits/stdc++.h>
using namespace std;

void solve() {
    long long a, b, c, x, y;
    cin >> a >> b >> c >> x >> y;

    (x - a > 0) ? x -= a : x = 0;
    (y - b > 0) ? y -= b : y = 0;

    if (x + y <= c) cout << "YES" << endl;
    else cout << "NO" << endl;
}

int main() {
    ios_base::sync_with_stdio(0);
    cin.tie(0);
    cout.tie(0);
    int t = 1;
    cin >> t;
    while (t--) solve();
}
