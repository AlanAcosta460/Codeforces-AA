#include <bits/stdc++.h>
using namespace std;

void solve() {
    long long x, y, a, b;
    cin >> x >> y >> a >> b;

    long long count = 0;

    if (2 * a <= b) count = a * x + a * y;
    else count = (max(x, y) - min(x, y)) * a + min(x, y) * b;

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
