#include <bits/stdc++.h>
using namespace std;

typedef long long ll;
#define endl "\n"

void solve() {
    ll n, m, x;
    cin >> n >> m >> x;
    ll col = x / n + 1;
    if (x % n == 0) col--;
    ll row = n - (n * col) + x - 1;
    ll ans = m * row + col;
    cout << ans << '\n';
}

int main() {
    ios_base::sync_with_stdio(0);
    cin.tie(0);
    cout.tie(0);
    int tc = 1;
    cin >> tc;
    while (tc--) solve();
}
